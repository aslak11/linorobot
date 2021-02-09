/*
  Copyright (c) 2016, Juan Jimeno
  All rights reserved.
  Redistribution and use in source and binary forms, with or without
  modification, are permitted provided that the following conditions are met:
   Redistributions of source code must retain the above copyright notice,
  this list of conditions and the following disclaimer.
   Redistributions in binary form must reproduce the above copyright
  notice, this list of conditions and the following disclaimer in the
  documentation and/or other materials provided with the distribution.
   Neither the name of  nor the names of its contributors may be used to
  endorse or promote products derived from this software without specific
  prior written permission.
  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORTPPIPI (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE.
*/

#include "Motor.h"

#define MOTOR_DRIVER Controller::L298

  #define MOTOR1_PWM 4
  #define MOTOR1_IN_A 31
  #define MOTOR1_IN_B 51

  #define MOTOR2_PWM 5
  #define MOTOR2_IN_A 32
  #define MOTOR2_IN_B 52

  #define MOTOR3_PWM 6
  #define MOTOR3_IN_A 33
  #define MOTOR3_IN_B 43

  #define MOTOR4_PWM 7
  #define MOTOR4_IN_A 34
  #define MOTOR4_IN_B 44
Controller motor1_controller(MOTOR_DRIVER, MOTOR1_PWM, MOTOR1_IN_A, MOTOR1_IN_B);
Controller motor2_controller(MOTOR_DRIVER, MOTOR2_PWM, MOTOR2_IN_A, MOTOR2_IN_B);
Controller motor3_controller(MOTOR_DRIVER, MOTOR3_PWM, MOTOR3_IN_A, MOTOR3_IN_B);
Controller motor4_controller(MOTOR_DRIVER, MOTOR4_PWM, MOTOR4_IN_A, MOTOR4_IN_B);

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  motor1_controller.spin(0);
  motor2_controller.spin(0);
  motor3_controller.spin(0);
  motor4_controller.spin(0);
  delay(5000);
  motor1_controller.spin(40);
  motor2_controller.spin(40);
  motor3_controller.spin(40);
  motor4_controller.spin(40);
  delay(5000);
  motor1_controller.spin(0);
  motor2_controller.spin(0);
  motor3_controller.spin(0);
  motor4_controller.spin(0);
  delay(5000);
  motor1_controller.spin(-40);
  motor2_controller.spin(-40);
  motor3_controller.spin(-40);
  motor4_controller.spin(-40);
  delay(5000);
}
