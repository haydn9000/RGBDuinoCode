int pinBuzzer = 8;
const int buttonPin = 2;
int buttonState = 0;

void setup()
{
    pinMode(buttonPin, INPUT);
    pinMode(pinBuzzer, OUTPUT);
}
void loop()
{
    long frequency = 2000;
    buttonState = digitalRead(buttonPin);
    if (buttonState == LOW)
    {
        tone(pinBuzzer, frequency);
    }
    else
    {
        noTone(pinBuzzer);
    }
}