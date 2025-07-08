/*
 * Basic Traffic Light Control
 * Developed by Samson Saya
 * 
 * Simulates a standard traffic light sequence with configurable timing
 */

// LED pin definitions
int Orange=6;

int Green=8;

int Red=10;

// Define your LED pins (replace with your actual pin numbers)
//const int Orange = 2;
//const int Green = 3;
//const int Red = 4;

// Timing constants (in milliseconds)
const unsigned long ORANGE_TIME = 30000;    // 30 seconds for Orange
const unsigned long GREEN_TIME = 60000;   // 1 minute for green
const unsigned long RED_TIME = 90000;     // 1.5 minutes for red

void setup() {
  pinMode(Orange, OUTPUT);
  pinMode(Green, OUTPUT);
  pinMode(Red, OUTPUT);
  
  // Start with all LEDs off (optional)
  digitalWrite(Orange, LOW);
  digitalWrite(Green, LOW);
  digitalWrite(Red, LOW);
}

void loop() {
  // Orange phase
  digitalWrite(Orange, HIGH);
  digitalWrite(Green, LOW);
  digitalWrite(Red, LOW);
  delay(ORANGE_TIME);
  
  // Green phase
  digitalWrite(Green, HIGH);
  digitalWrite(Orange, LOW);
  digitalWrite(Red, LOW);
  delay(GREEN_TIME);
  
  // Red phase
  digitalWrite(Red, HIGH);
  digitalWrite(Green, LOW);
  digitalWrite(Orange, LOW);
  delay(RED_TIME);
}
