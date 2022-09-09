#include<Servo.h> //бібліотека для сервомотора

#define S0 2
#define S1 3
#define S2 4
#define S3 5
#define sensorOut 6 //контакти до яких підключено датчик

int frequency = 0;
int color=0;

Servo servodown;//оголошуємо зміну типу Servo
Servo servoup;//оголошуємо зміну типу Servo

void setup() {
pinMode(S0, OUTPUT);
pinMode(S1, OUTPUT);
pinMode(S2, OUTPUT);
pinMode(S3, OUTPUT);
pinMode(sensorOut, INPUT);
// Встановлення масштабування частоти на 20%
digitalWrite(S0, HIGH);
digitalWrite(S1, LOW);
servodown.attach(8);//контакт сервомотора
servoup.attach(9);//контакт сервомотора
Serial.begin(9600);
}

int readColor() {
// Встановлення червоних фотодіодів для зчитування
digitalWrite(S2, LOW);
digitalWrite(S3, LOW);
// Зчитування вихідної- частоти
frequency = pulseIn(sensorOut, LOW);
int R = frequency;
// Друк значення на послідовному моніторі
Serial.print("R= ");
Serial.print(frequency);
Serial.print("  ");
delay(50);
// Встановлення зелених фотодіодів для зчитування
digitalWrite(S2, HIGH);
digitalWrite(S3, HIGH);
// Зчитування вихідної- частоти
frequency = pulseIn(sensorOut, LOW);
int G = frequency;
// Друк значення на послідовному моніторі
Serial.print("G= ");
Serial.print(frequency);
Serial.print("  ");
delay(50);
// Встановлення синіх фотодіодів для зчитування
digitalWrite(S2, LOW);
digitalWrite(S3, HIGH);
// Зчитування вихідної- частоти
frequency = pulseIn(sensorOut, LOW);
int B = frequency;
// рук значення на послідовному моніторі
Serial.print("B= ");
Serial.print(frequency);
Serial.println("  ");
delay(50);
if(R<135 & R>105 & G<215& G>180){
    color = 1; // Red
  }
  if(G<145 & G>110 & B<150&B>125){
    color = 2; // Orange
  }
  if(R<165& R>135& G<165 & G>130){
    color = 3; // Green
  }
  if(R<115 & R>80 & G<135 & G>100){
    color = 4; // Yellow
  }
  if(R<180 & R>150 & G<220 & G>185){
    color = 5; // Brown
  }
  if (G<190 & G>155 & B<115 &B>90){
    color = 6; // Blue
  }
  Serial.println(color);
  return color;  
Serial.println(color);
return color;  
}
void loop() {
servoup.write(178);
delay(500);
for(int i = 178; i > 125; i--) {
  servoup.write(i);
  delay(5);
}
color = readColor();
delay(2000);
color = readColor();
switch (color) {
case 1:
  servodown.write(5);
break;
case 2:
  servodown.write(24);
break;
case 3:
  servodown.write(44);
break;
case 4:
  servodown.write(63);
break;
case 5:
  servodown.write(83);
break;
case 6:
  servodown.write(103);
break;
}
delay(300);
for(int i = 125; i > 90; i--) {
    servoup.write(i);
    delay(2);
  } 
  delay(200);
  
  for(int i = 90; i < 178; i++) {
    servoup.write(i);
    delay(2);
  }

color=0;
 }
