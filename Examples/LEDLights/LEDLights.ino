int brightness = 15;


void setup()
{
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

// Some of these are not dimmable, fix this to reflect
void loop()
{
    analogWrite(2, brightness);
    analogWrite(3, brightness);
    analogWrite(4, brightness);
    analogWrite(5, brightness);
    analogWrite(6, brightness);
    analogWrite(7, brightness);
    analogWrite(8, brightness);
    analogWrite(9, brightness);
    analogWrite(10, brightness);
    analogWrite(11, brightness);
}
