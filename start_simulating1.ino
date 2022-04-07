// C++ code
//
	int echoPin = 2;
  	int trigPin = 3;
    int redLed =  4;
    int greenLed = 5;
	float duration;
	float distance;

void setup()
{
  // claer the trigpin condition 
   pinMode(trigPin, OUTPUT);
   pinMode(echoPin, INPUT);
   pinMode(redLed,OUTPUT);
   pinMode(greenLed,INPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(trigPin, LOW);
  delay(100);
  //sets the trigpinhight(active)for 10 microsecond
  digitalWrite(trigPin, HIGH);
  delay(100);
  
  digitalWrite(trigPin, LOW);
  
  duration = pulseIn(echoPin, HIGH);
  // caculating the distance
  distance = (duration * 0.034) / 2;
  
  Serial.print("distance: ");
  Serial.print(distance);
  Serial.println("cm");
  
  if (distance <= 20.0);
  {
   digitalWrite(greenLed ,LOW);
   delay(1000);
   digitalWrite(redLed ,HIGH);
   delay(1000);
  }
  
  }