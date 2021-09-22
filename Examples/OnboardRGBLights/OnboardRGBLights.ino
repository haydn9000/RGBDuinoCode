int brightness = 15;

void setup()
{
    // Innitialize RGB pins.     
    pinMode(12, OUTPUT);
    pinMode(13, OUTPUT);
}


void loop()
{
    digitalWrite(12, HIGH);  // RGB light pin
    digitalWrite(13, HIGH);  // RGB light pin
}

