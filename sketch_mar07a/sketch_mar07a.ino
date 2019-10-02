 #include <Servo.h>

#define pinServo1 6//base
#define pinServo2 7//subi e descer
#define pinServo3 5//reto 
#define pinServo4 4//garra
#define pinPotenciometro4 A2               
#define pinPotenciometro1 A0//garra
#define pinPotenciometro2 A3
#define pinPotenciometro3 A1

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

void setup() {
servo1.attach(pinServo1);
Serial.begin(9600);

servo2.attach(pinServo2);
Serial.begin(9600);

servo3.attach(pinServo3);
Serial.begin(9600);

servo4.attach(pinServo4);
Serial.begin(9600);
}

void loop() {
int lido1 = analogRead(pinPotenciometro1);
byte angulo1 = map(lido1, 0, 1023, 0, 179);

int lido2 = analogRead(pinPotenciometro2);
byte angulo2 = map(lido2, 0, 1023, 0, 179);


int lido3 = analogRead(pinPotenciometro3);
byte angulo3 = map(lido3, 0, 1023, 0, 179);

int lido4 = analogRead(pinPotenciometro4);
byte angulo4 = map(lido4,  0, 600, 0, 60);


servo1.write(angulo1);
servo2.write(angulo2);
servo3.write(angulo3);
servo4.write(angulo4);





}
