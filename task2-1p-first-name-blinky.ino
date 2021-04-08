// This #include statement was automatically added by the Particle IDE.
#include "lib1.h"

// We define MY_LED to be the LED that we want to blink.
//
// In this tutorial, we're using the blue D7 LED (next to D7 on the Photon
// and Electron, and next to the USB connector on the Argon and Boron).
const pin_t MY_LED = D7;
const int DOT = 500;
const int DASH = 1000;
const int PAUSE = 500;
const int LONG_PAUSE = 2000;
const int LOOP_PAUSE = 4000;

// The following line is optional, but recommended in most firmware. It
// allows your code to run before the cloud is connected. In this case,
// it will begin blinking almost immediately instead of waiting until
// breathing cyan,
SYSTEM_THREAD(ENABLED);

// The setup() method is called once when the device boots.
void setup()
{
	// In order to set a pin, you must tell Device OS that the pin is
	// an OUTPUT pin. This is often done from setup() since you only need
	// to do it once.
	pinMode(MY_LED, OUTPUT);
}

void blink(int delayTime) {
    // Blink LED on and off
	digitalWrite(MY_LED, HIGH);
	delay(delayTime);
	digitalWrite(MY_LED, LOW);
	
	// Pause after blinking LED
	delay(PAUSE);
}

void blinkDot() {
    blink(DOT);
}

void blinkDash() {
    blink(DASH);
}

void blinkCode_D() {
    // D -..
    blinkDash();
    blinkDot();
    blinkDot();
    
    delay(LONG_PAUSE);
}

void blinkCode_E() {
    // E .
    blinkDot();
    
    delay(LONG_PAUSE);
}

void blinkCode_N() {
    // N -.
    blinkDash();
    blinkDot();
    
    delay(LONG_PAUSE);
}

void blinkCode_O() {
    // O ---
    blinkDash();
    blinkDash();
    blinkDash();
    
    delay(LONG_PAUSE);
}

void blinkCode_S() {
    // S ...
    blinkDot();
    blinkDot();
    blinkDot();
    
    delay(LONG_PAUSE);
}

// The loop() method is called frequently.
void loop()
{
    // blink name
	blinkCode_E(); // E .
	blinkCode_D(); // D -..
	blinkCode_S(); // S ...
	blinkCode_O(); // O ---
	blinkCode_N(); // N -.
	
	delay(LOOP_PAUSE);
}