/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

Servo servo1;  // create servo object to control a servo
Servo servo2;
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position
int posj2 = 85;

void setup() {
  servo1.attach(9);  // attaches the servo on pin 9 to the servo object
  servo2.attach(10);  // attaches the servo on pin 9 to the servo object
}

// void leg_forward(angle) {
// }

// void leg_backward(angle) {
// }

// void leg_up(angle) {
// }

// void leg_down(angle) {
// }

// void leg_in(angle) {
// }

// void leg_out(angle) {
// }

void loop() {
  for (pos = 45, posj2 = 55; pos <= 135, posj2 <=150; pos += 1, posj2 +=1) {
    servo1.write(pos);
    servo2.write(posj2);
    delay(8);
  }

//  for (posj2 = 85; posj2 <= 125; posj2 += 1) {
//    servo2.write(posj2);
//    delay(15);
//  }
//  for (posj2 = 125; posj2 >= 85; posj2 -= 1) {
//    servo2.write(posj2);
//    delay(15);
//  }
  for (pos = 135, posj2 = 150; pos >= 45, posj2 >= 55; pos -= 1, posj2 -= 1) {
    servo1.write(pos);
    servo2.write(posj2);
    delay(8);
  }
  delay(1000);

}