volatile int val;



void setup(){

  val = 0;

  Serial.begin(9600);

  pinMode(13, OUTPUT);

  pinMode(2, OUTPUT);

}



void loop(){

  val = analogRead(A5);

  Serial.println(val);

  if (val > 150) {

    digitalWrite(13,HIGH);

    digitalWrite(2,LOW);



  }

  if (val <= 150) {

    digitalWrite(13,LOW);

    digitalWrite(2,HIGH);



  }

  delay(500);



}
