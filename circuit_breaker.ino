//Author: Vivekanand Dhakane
//Uploaded on: 2 March 2020
#define ctr 0
int count=0;
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(ctr, OUTPUT);
  digitalWrite(ctr, HIGH);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);  // wait for a second
  count++;
  if(count==5)
  {
       digitalWrite(ctr, LOW);
    }
}
