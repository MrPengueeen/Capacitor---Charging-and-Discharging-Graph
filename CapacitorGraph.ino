// Variable Declaration and Initialization //

int capPin = A0;
long capVoltage;

void setup() {
  
  
  Serial.begin(9600); // Starts serial communication


}
void loop() {
  
  
  capVoltage = analogRead(capPin); // Reads voltage on the Analog pin A0
  Serial.println(capVoltage); // Prints and plots the voltage on Serial Monitor and Plotter


}
