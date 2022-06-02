int trigPin0 = 13;
int echoPin0 = 12;

int trigPin1 = 11;
int echoPin1= 10;

int trigPin2 = 9;
int echoPin2 = 8;



void setup() {
  Serial.begin(9600);
  pinMode(trigPin0, OUTPUT);
  pinMode(echoPin0, INPUT);

//  pinMode(trigPin1, OUTPUT);
//  pinMode(echoPin1, INPUT);

//  pinMode(trigPin2, OUTPUT);
//  pinMode(echoPin2, INPUT);

//  pinMode(trigPin3, OUTPUT);
//  pinMode(echoPin3, INPUT);
  
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  for(int i = 2; i<5; i = i+1){
    Serial.println(i);
    digitalWrite(i, HIGH);
    delay(300);
    digitalWrite(i,LOW);
    delay(300);
    }
  
  long duration, distance;
  digitalWrite(trigPin0,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin0, LOW);
  duration=pulseIn(echoPin0, HIGH);
  distance =duration*0.034/2;
  Serial.print(distance);
  Serial.println("CM");
  delay(10);


  
for(int i = 1; i<6; i = i+1){
  int x = random(2,4);
  digitalWrite(x, HIGH);
  Serial.println(x);
  if((distance<=6)) 
  {
    digitalWrite(x, LOW);
}
else if(distance>6)
 {
     digitalWrite(x, LOW);
   }
   else if(distance>6)
 {
     digitalWrite(x, LOW);
   }
  }

 
 if((distance<=10)) 
  {
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
}
   else if(distance>10)
 {
     digitalWrite(2, LOW);
     digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
   }
}
