// constants won't change. They're used here to set pin numbers:
const int buttonPin = 2;     // the number of the pushbutton pin
const int ledPin =  13;      // the number of the LED pin
int buttonState2;


// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status


void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
Serial.begin(9600);
}

void loop() {

  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);
  buttonState2 = digitalRead(4);
  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
    if (buttonState2 == LOW)
{ Serial.println("b");

    }
  } else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
Serial.println("a");
    delay(400);

  }
}
