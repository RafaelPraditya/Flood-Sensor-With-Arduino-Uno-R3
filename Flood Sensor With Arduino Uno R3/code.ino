
extern "C" uint8_t pompa(void);  

void setup() {
    DDRB &= ~(1 << DDB0);   
    pinMode(13, OUTPUT);
}

void loop() {
    uint8_t waterValue = pompa();
    
    if (waterValue) {
        digitalWrite(13, LOW);
    } else {
        digitalWrite(13, HIGH);
    }

    delay(100);
}

