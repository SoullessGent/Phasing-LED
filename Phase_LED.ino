// Sets the initial state of the circuit

#define BLUE 2
#define GREEN 5
#define RED 4
void setup() {
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
  digitalWrite(RED, HIGH);
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, LOW);
  
}

void loop() {

//create the variables and set them

  int redValue;
  int greenValue;
  int blueValue;
  int delayTime = 10;
  

  redValue = 255;
  greenValue = 0;
  blueValue = 0;
 
//Loops through the colors 

  for (int i=0; i<255; i+=1) {
    redValue -= 1;
    greenValue += 1;
    analogWrite(RED, redValue);
    analogWrite(GREEN, greenValue);
    delay(delayTime);
  }

  for (int i=0; i<255; i+=1) {
    greenValue -= 1;
    blueValue += 1;
    analogWrite(GREEN, greenValue);
    analogWrite(BLUE, blueValue);
    delay(delayTime);
  }
  
  for (int i=0; i<255; i+=1) {
    blueValue -= 1;
    redValue += 1;
    analogWrite(BLUE, blueValue);
    analogWrite(RED, redValue);
    delay(delayTime);
  }

}
