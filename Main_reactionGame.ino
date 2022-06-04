int trigPin = 13;
int echoPin = 12;
int wait = 3000;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);//starts serial communication between the board and the sensor
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

}

void loop() {

// **************INTRO***************
for(int j=1;j<4;j=j+1){
  for(int i=2;i<5;i=i+1){
    Serial.println(i);  
    digitalWrite(i, HIGH);
    delay(150);
    digitalWrite(i, LOW);
    delay(150);
    } 
}

for(int j=1;j<4;j=j+1){
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  delay(150);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  delay(150);
  }

// ***************SWITCH CASES***************
for(;;){
  int x = random(2,5);
  Serial.println("The random int X is : ");
  Serial.println(x);
  if(x == 2){
  digitalWrite(2, HIGH);
//  Ultrasonic
  float dist, duration;
  digitalWrite(trigPin, HIGH);
  delay(100);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  dist = ((duration/2)/29);
  Serial.print(dist);
  Serial.println("CM");
//  internal IF-ELSE
  if (dist<10){
    digitalWrite(2, LOW);
    digitalWrite(7,HIGH);
    delay(500);
    digitalWrite(7,LOW);
    delay(2000);
    }
    
//    else{
//      digitalWrite(2, LOW);
//      delay(2000);

//      BEEEEPPP
//      digitalWrite(2,HIGH);
//      delay(5000);
//      digitalWrite(2,LOW);
//      }

  }

//  3
  else if(x == 3){
  digitalWrite(3, HIGH);
//  Ultrasonic
  float dist, duration;
  digitalWrite(trigPin, HIGH);
  delay(100);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  dist = ((duration/2)/29);
  Serial.print(dist);
  Serial.println("CM");
//  internal IF-ELSE
  if (dist<10){
    digitalWrite(3, LOW);
   digitalWrite(7,HIGH);
    delay(500);
    digitalWrite(7,LOW);
    delay(2000);
    }
    else{
      delay(1000);
      digitalWrite(3, LOW);

//      BEEEEPPP
//      digitalWrite(2,HIGH);
//      delay(5000);
//      digitalWrite(2,LOW);
//      }0
  }

// 4
 
  digitalWrite(4, HIGH);
//  Ultrasonic
  
  digitalWrite(trigPin, HIGH);
  delay(500);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  dist = ((duration/2)/29);
  Serial.print(dist);
  Serial.println("CM");
//  internal IF-ELSE
  if (dist<10){
    digitalWrite(4, LOW);
    digitalWrite(7,HIGH);
    delay(500);
    digitalWrite(7,LOW);
    delay(2000);
    }
   else{
    digitalWrite(4, LOW);
    delay(1000);
    }
      delay(2000);

//      BEEEEPPP
//      digitalWrite(2,HIGH);
//      delay(5000);
//      digitalWrite(2,LOW);
//      }
  }

//  *************** MISC**********************
  float dist, duration;
  digitalWrite(trigPin, HIGH);
  delay(100);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  dist = ((duration/2)/29);
  Serial.print(dist);
  Serial.println("CM");
  
  delay(1);

  if((dist <=10))
   {
    digitalWrite(10, HIGH);
   }
   else if((dist>10))
   {
    digitalWrite(10, LOW);
   }
//   

}
}
