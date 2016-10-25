#ifndef LINO_BASE_CONFIG_H
#define LINO_BASE_CONFIG_H

#define DEBUG 0

#define K_P 0.4 // P constant
#define K_I 0.0 // I constant
#define K_D 1.0 // D constant

//define your motors' specs here
const int MAX_RPM = 330; //motor's maximum RPM
const int COUNTS_PER_REV = 1030; //wheel encoder's no of ticks per rev
const float WHEEL_DIAMETER = 0.135; //wheel's diameter in meters

//ENCODER PINS
// left side encoders pins
#define MOTOR1_ENCODER_A 10 //front_A
#define MOTOR1_ENCODER_B 9 //front_B

// right side encoders pins
#define MOTOR2_ENCODER_A 11 //front_A
#define MOTOR2_ENCODER_B 12 //front_B

//don't change this if you followed the schematic diagram
//MOTOR PINS
//left side motor pins
#define MOTOR1_PWM 22
#define MOTOR1_IN_A 15
#define MOTOR1_IN_B 14

//right side motor pins
#define MOTOR2_PWM 23
#define MOTOR2_IN_A 17
#define MOTOR2_IN_B 16

#define STEERING_PIN 21
#endif
