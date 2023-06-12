/*
 * rosserial PubSub Example
 * Prints "hello world!" and toggles led
 */
#include "main.hpp"
#include "mbed.h"
#include <ros.h>
#include <std_msgs/String.h>
#include <std_msgs/Empty.h> 
#include <control/HardwareCommand.h> 
#include <control/EncoderData.h> 

DCmotor motor_FR(D1, D2, D3, D4); // Setup PIN OUT DCmotor(PinName enable_pin_R, PinName enable_pin_L, PinName motor_pin_R, PinName motor_pin_L)
DCmotor motor_FL(D5, D6, D7, D8);
DCmotor motor_BR(D9, D10, D11, D12);
DCmotor motor_BL(D13, D14, D15, D15);


DCmotor::DCmotor(PinName enable_pin_R, PinName enable_pin_L, PinName motor_pin_R, PinName motor_pin_L) : enable_R(enable_pin_R), enable_L(enable_pin_L), motor_R(motor_pin_R), motor_L(motor_pin_L){
    enable_R = 1;
    enable_L = 1;

    motor_R.write(0);
    motor_L.write(0);
}

void DCmotor::rotate(double pwm){
    if (pwm >= 0){
        motor_L.write(0);
        motor_R.write(pwm);
        }
    else if (pwm < 0){
        motor_R.write(0);
        motor_L.write(abs(pwm));
        }
}


void commandMotor( const control::HardwareCommand& hc_msg) {
    motor_FR.rotate(hc_msg.motor1);
    motor_FL.rotate(hc_msg.motor2);
    motor_BR.rotate(hc_msg.motor3);
    motor_BL.rotate(hc_msg.motor4);
}

ros::Subscriber<control::HardwareCommand> sub("/control/command/hardware", &commandMotor);

control::EncoderData en_msg;
ros::Publisher encoderData("/control/data/encoder", &en_msg);

int main() {

    nh.initNode();
    nh.advertise(encoderData);
    nh.subscribe(sub);
    control::EncoderData en_data;

    while (1) {
        
        en_data.encoder1 = en_ext1;
        en_data.encoder1 = en_ext1;
        en_data.encoder1 = en_ext1;
        en_data.encoder1 = en_ext1;
        en_data.encoder1 = en_ext1;
        en_data.encoder1 = en_ext1;
        en_data.encoder1 = en_ext1;

        encoderData.publish(&en_data);

        nh.spinOnce();
        wait_ms(500);
    }
}

