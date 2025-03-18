#include<Servo.h> 
Servo servo; 
const int trigPin = 5;
const int echoPin = 6;
const int distanceThreshold = 30;

void setup() 
{
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  servo.attach(3); 
}

void loop() 
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(2);
  digitalWrite(trigPin, LOW);
  long duration = pulseIn(echoPin, HIGH);
  int distance = duration / 58;
  
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
  
 if (distance <= 20 && distance >= 0) 
{
servo.write(50); delay(3000); 
} 
else 
{
servo.write(160); 

}
 delay(100);
}
