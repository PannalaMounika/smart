/***********************************************************
Project 18: Smart Fan
Description: When an object comes in front of it, it detects and fan starts rotating
Company: Texoham eLearning Platform
Website: www.texoham.com/elearning
***********************************************************/
const int sensor_pin = 4;
const int ledPin = 13;
int val;

//const int Input1 = 3;                 //arduino 3rd pin connected to L293D pin input1
//const int Input2 = 4;                 //arduino 4th pin connected to L293D pin input2
const int Input3 = 8;                 //arduino 8th pin connected to L293D pin input3
const int Input4 = 9;  
const int EN2 = 2 ;//arduino 9th pin connected to L293D pin input4

void setup() 
{ 
  pinMode(sensor_pin,INPUT);
  pinMode (Input4, OUTPUT);
  pinMode (Input3, OUTPUT);
  pinMode (EN2,OUTPUT);
  pinMode(ledPin, OUTPUT);
  //pinMode (Input2, OUTPUT);
  //pinMode (Input1, OUTPUT);
  Serial.begin(9600);
}
void anticlockwise()
{
  digitalWrite(Input4, HIGH); 
  digitalWrite(Input3, LOW); 
  digitalWrite(EN2, HIGH);
  //digitalWrite(Input2, LOW); 
  //digitalWrite(Input1, LOW);
}

void clockwise()
{
  digitalWrite(Input4, HIGH); 
  digitalWrite(Input3, LOW); 
  digitalWrite(EN2, HIGH);
//  delay(1000);
//  digitalWrite(Input4, LOW); 
//  digitalWrite(Input3, HIGH); 
//  digitalWrite(EN2, HIGH);
//  delay(1000);
  
  //digitalWrite(Input2, HIGH); 
  //digitalWrite(Input1, LOW);
}


void loop()
{
   val = digitalRead(sensor_pin);
   if (val==0)
  {
   
    
//    digitalWrite(Input4, HIGH); 
//    digitalWrite(Input3, LOW);
   clockwise();
    delay(1000); 
  }
  else if (val==1)
  {
    anticlockwise();
//    digitalWrite(Input4, LOW); 
//    digitalWrite(Input3, HIGH); 
    
  }
  delay(1000);
 
  }

 


  
  
//  digitalWrite(trigPin, LOW);
//  delayMicroseconds(2);
//  digitalWrite(trigPin, HIGH);
//  delayMicroseconds(10);
//  digitalWrite(trigPin, LOW);  
//  duration = pulseIn(echoPin, HIGH);
//  distance = duration/58.2;   // The speed of sound is 340 m/s or 29 microseconds per centimeter.// The echo travels out and back, so to find the distance of the
//  Serial.println(distance);                                        // object we take half of the distance travelled.
//  Serial.println("distance: ");
//                                          
//  if(distance<20)
//  {      
//    start();
//     digitalWrite(ledPin, 0);
//    delay(500);
//  }
//  else
//  {
//   stop();
//   delay(500);
//   digitalWrite(ledPin, 1);
//  }
