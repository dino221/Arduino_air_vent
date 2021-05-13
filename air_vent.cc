const int RELAY_ENABLE = 2;

void setup() {
    pinMode ( RELAY_ENABLE, OUTPUT );
    Serial.begin(9600);
}

void loop() {
    Serial.println("Relay ON");
    digitalWrite(RELAY_ENABLE, LOW);
    delay(1000);

    Serial.println("Relay OFF");
    digitalWrite(RELAY_ENABLE, HIGH);
    delay (1000);
}
