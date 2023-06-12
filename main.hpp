#ifndef MAIN_H
#define MAIN_H
#include "mbed.h"
#include <ros.h>


float pwm_FR;
float pwm_FL;
float pwm_BR;
float pwm_BL;

int en_ext1 = 0;
int en_ext2 = 5;
int en_ext3 = 10;
int en_in1 = 100;
int en_in2 = -1000;
int en_in3 = 200;
int en_in4 = -200;

ros::NodeHandle nh;

class DCmotor{
    private:
        DigitalOut enable_R;        // the enabler for R rotation
        DigitalOut enable_L;        // the enabler for L rotation
        PwmOut motor_R;             // the pwm channel for R rotation
        PwmOut motor_L;             // the pwm channel for L rotation
        double pwm;                 // the pwm value send by user
    
    public:
        // user defined constructor
        DCmotor(PinName enable_pin_R, PinName enable_pin_L, PinName motor_pin_R, PinName motor_pin_L);

        // method to rotate the motor (seting the pwm)
        void rotate(double pwm);
};

#endif