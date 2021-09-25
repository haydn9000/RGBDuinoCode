int brightness = 15;  // Can be a value between 0-255.

void setup()
{
    // Innitialize onboard LED pins.
    pinMode(2, OUTPUT);
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(7, OUTPUT);
    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(11, OUTPUT);
}


void turnONdigitalLEDs()
{
    digitalWrite(2, HIGH); // Digital pin
    digitalWrite(4, HIGH); // Digital pin
    digitalWrite(7, HIGH); // Digital pin
    digitalWrite(8, HIGH); // Digital pin
}


void turnONanalogLEDs()
{
    analogWrite(3, brightness);  // ~ Analog pin
    analogWrite(5, brightness);  // ~ Analog pin
    analogWrite(6, brightness);  // ~ Analog pin
    analogWrite(9, brightness);  // ~ Analog pin
    analogWrite(10, brightness); // ~ Analog pin
    analogWrite(11, brightness); // ~ Analog pin
}


void loop()
{
    // turnONdigitalLEDs();
    turnONanalogLEDs();
}
