const int trigPin = 9;
const int echoPin = 10;
int buzzerPin = 3;

long duration;
int distance;
void setup() {
pinMode(buzzerPin, OUTPUT);
pinMode(trigPin, OUTPUT); // 
pinMode(echoPin, INPUT); // 
Serial.begin(9600); // 
}
void loop() {
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);
// Calculating the distance
distance= duration*0.034/2;
// Prints the distance on the Serial Monitor
Serial.print("Distance: ");
Serial.println(distance);
  digitalWrite(buzzerPin, HIGH); //Setting pin to high
  delay(200); //Delaying
  digitalWrite(buzzerPin , LOW); //Setting pin to LOW
  delay(distance*1.5); //Delaying
}
