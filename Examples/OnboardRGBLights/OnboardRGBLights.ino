int brightness = 15;

void setup()
{
    // Innitialize RGB pins.     
    pinMode(12, OUTPUT);
    pinMode(13, OUTPUT);
}

// Some of these are not dimmable, fix this to reflect
void loop()
{
    digitalWrite(12, HIGH);  // RGB light pin
    digitalWrite(13, HIGH);  // RGB light pin
}

