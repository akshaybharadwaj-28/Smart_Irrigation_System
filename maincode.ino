#include <LiquidCrystal_I2C.h>
#include <SoftwareSerial.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
SoftwareSerial bluetooth(10, 11); // RX, TX (connect to HC-05 TX, RX)
#define pumpPin 7
#define moisturePin A0
char bluetoothCommand = ' ';
char mode = 'A';  // Default is Automatic Mode
bool pumpState = true;  // true = OFF, false = ON
void displayStatus(String line1, String line2 = "") {
lcd.clear();
lcd.setCursor(0, 0);
lcd.print(line1);
lcd.setCursor(0, 1);
lcd.print(line2);
}
void setup() {
Serial.begin(9600);
bluetooth.begin(9600);
lcd.init();
lcd.backlight();
lcd.clear();
pinMode(pumpPin, OUTPUT);
digitalWrite(pumpPin, HIGH); // Pump OFF initially (active low)
displayStatus("IRRIGATION", "SYSTEM IS ON");
delay(3000);
lcd.clear(); 
}
void loop() {
int sensorValue = analogRead(moisturePin);
Serial.println(sensorValue);
if (bluetooth.available()) {
bluetoothCommand = bluetooth.read();
Serial.print("Received: ");
Serial.println(bluetoothCommand);
if (bluetoothCommand == 'M' || bluetoothCommand == 'm') {
mode = 'M';
bluetooth.println("Switched to Manual Mode");
displayStatus("Manual Mode");
}
else if (bluetoothCommand == 'A' || bluetoothCommand == 'a') {
mode = 'A';
bluetooth.println("Switched to Auto Mode");
displayStatus("Automatic Mode");
}
} 
if (mode == 'M') {
if (bluetoothCommand == '1') {
digitalWrite(pumpPin, LOW); // Turn pump ON
pumpState = false;
displayStatus("Water Pump is", "ON");
bluetooth.println("Pump is ON");
}
else if (bluetoothCommand == '0') {
digitalWrite(pumpPin, HIGH); // Turn pump OFF
pumpState = true;
displayStatus("Water Pump is", "OFF");
bluetooth.println("Pump is OFF");
}
bluetoothCommand = ' '; // Reset command after use
}
if (mode == 'A') {
if (sensorValue > 950) {
if (pumpState) {
digitalWrite(pumpPin, LOW);
pumpState = false;
displayStatus("Water Pump is", "ON");
}
}
else {
if (!pumpState) {
digitalWrite(pumpPin, HIGH);
pumpState = true;
displayStatus("Water Pump is", "OFF");
}
}
// Moisture level feedback
lcd.setCursor(0, 1);
if (sensorValue > 300 && sensorValue <= 950) {
lcd.print("Water not needed ");
}
else if (sensorValue > 950) {
lcd.print("Water is needed ");
}
}
delay(500);
