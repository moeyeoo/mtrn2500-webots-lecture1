#include <webots/Robot.hpp>

// Added a new include file
#include <webots/Motor.hpp>

const int TIME_STEP {64};
const double MAX_SPEED {6.28};


int main(int argc, char **argv) {
webots::Robot robot{};
 // get the motor devices
webots::Motor* leftMotor = robot.getMotor("left wheel motor");
webots::Motor* rightMotor = robot.getMotor("right wheel motor");
 
 /* set the target position of the motors
 leftMotor->setPosition(10.0);
 rightMotor->setPosition(10.0);
*/
leftMotor->setPosition(INFINITY);
rightMotor->setPosition(INFINITY);
  
leftMotor->setVelocity(0.1 * MAX_SPEED);
rightMotor->setVelocity(-0.1 * MAX_SPEED);

 while (robot.step(TIME_STEP) != -1);



 return 0;
}