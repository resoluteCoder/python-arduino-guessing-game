const int INCORRECT = 7;
const int CORRECT = 12;

void setup() {
	pinMode(INCORRECT, OUTPUT);
	pinMode(CORRECT, OUTPUT);
	Serial.begin(9600);
}

void loop() {
	if (Serial.available() > 0) {
		int value = Serial.parseInt();
		Serial.println(value + 1);	
		if (value == 1) {
			digitalWrite(INCORRECT, HIGH);	
			delay(2000);
			digitalWrite(INCORRECT, LOW);	
		}
		if (value == 0) {
			digitalWrite(CORRECT, HIGH);	
			delay(5000);
			digitalWrite(CORRECT, LOW);	
		}
	}
}

