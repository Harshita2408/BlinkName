void setup() {
  pinMode(13, OUTPUT);
}

void Dot()
{
  digitalWrite(13, HIGH);
  delay(1000);                   //on calling the dot function on pin 13, a delay of 1 second is given for both glowing and fading out of led
  digitalWrite(13, LOW);
  delay(1000);
}

void Dash()
{
  digitalWrite(13, HIGH);
  delay(3000);                   //on calling the dash function on pin 13, a delay of 3 second is given for glowing of the led
  digitalWrite(13, LOW);
  delay(1000);                   //a delay of 1 sec is given for fading out of the led
}

void loop()
{
  //morse code for letter H
  Dot();
  Dot();
  Dot();
  Dot();
  //morse code for letter A
  Dot();                          //morse code for the name HARSHITA
  Dash();
  //morse code for letter R
  Dot();
  Dash();
  Dot();
  //morse code for letter S
  Dot();
  Dot();
  Dot();
  //morse code for letter H
  Dot();
  Dot();
  Dot();
  Dot();
  //morse code for letter I
  Dot();
  Dot();
  //morse code for letter T
  Dash();
  //morse code for letter A
  Dot();
  Dash();
}
