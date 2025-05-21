#include <Arduino.h>

int button1 = 33;
int button2 = 26;
int button3 = 14;

int red = 19;
int yellow = 5;
int green = 16;

void kedipred(int jumlahKedip);
void kedipredgreen(int jumlahKedip);
void kedipredyellowgreen(int jumlahKedip);

void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);

  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);
  pinMode(button3, INPUT_PULLUP);

  Serial.begin(115200);
}

void loop() {
  if (digitalRead(button1) == LOW) {
    Serial.println("Button 1");
    kedipred(5);
  }

  else if (digitalRead(button2) == LOW) {
    kedipredgreen(5);
  }

  else if (digitalRead(button3) == LOW) {
    kedipredyellowgreen(5);
  }
}

void kedipred(int jumlahKedip) {
  for (int i = 0; i < jumlahKedip; i++) {
  digitalWrite(red, HIGH);  
  delay(500);                    
  digitalWrite(red, LOW);  
  delay(500);                   
  }
}

void kedipredgreen(int jumlahKedip) {
  for (int i = 0; i < jumlahKedip; i++) {
  digitalWrite(red, HIGH);
  digitalWrite(green, LOW);
  delay(500); 
  digitalWrite(red, LOW);
  digitalWrite(green, HIGH);
  delay(500); 
  }
}

void kedipredyellowgreen(int jumlahKedip) {
  for (int i = 0; i < jumlahKedip; i++) {
  digitalWrite(red, HIGH);
  digitalWrite(yellow, LOW);
  digitalWrite(green, LOW);
  delay(500); 
  
  digitalWrite(red, LOW);
  digitalWrite(yellow, HIGH);
  delay(500); 
  
  digitalWrite(yellow, LOW);
  digitalWrite(green, HIGH);
  delay(500); 
  
  digitalWrite(green, LOW);
  }
}