void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);//SET the direction on Pin
  pinMode(12,OUTPUT);//SET the direction on Pin
  pinMode(11,OUTPUT);//SET the direction on Pin
  pinMode(10,OUTPUT);//SET the direction on Pin
  // pinMode(9,OUTPUT);//SET the direction on Pin
  // pinMode(8,OUTPUT);//SET the direction on Pin
  // pinMode(7,OUTPUT);//SET the direction on Pin
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13,HIGH);//LED IS ON HIGH = 5V
  
  digitalWrite(12,HIGH);//LED IS ON HIGH = 5V
  
  digitalWrite(11,HIGH);//LED IS ON HIGH = 5V
  
  digitalWrite(10,HIGH);//LED IS ON HIGH = 5V
  
  // digitalWrite(9,HIGH);//LED IS ON HIGH = 5V
  
  // digitalWrite(8,HIGH);//LED IS ON HIGH = 5V
  
  // digitalWrite(7,HIGH);//LED IS ON HIGH = 5V
  delay(1000);
  digitalWrite(13,LOW);//LED IS ON HIG                                                                                                                                                                                           H = 5V
  
  digitalWrite(12,LOW);//LED IS ON HIGH = 5V
  
  digitalWrite(11,LOW);//LED IS ON HIGH = 5V
  
  digitalWrite(10,LOW);//LED IS ON HIGH = 5V
  
  // digitalWrite(9,LOW);//LED IS ON HIGH = 5V
  
  // digitalWrite(8,LOW);//LED IS ON HIGH = 5V
  
  // digitalWrite(7,LOW);//LED IS ON HIGH = 5V
  delay(1000);
 
}
