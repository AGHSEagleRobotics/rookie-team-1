// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "IntakePwr.h"

#define MOTORSPEED 0.5
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

IntakePwr::IntakePwr(): Command() {
        // Use requires() here to declare subsystem dependencies
    // eg. requires(Robot::chassis.get());
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::intake.get());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

// Called just before this Command runs the first time
void IntakePwr::Initialize() {
}

// Called repeatedly when this Command is scheduled to run
void IntakePwr::Execute() {
	RobotMap::intakeShooterMotor->Set(MOTORSPEED);
	RobotMap::intakeTreadMotor->Set(MOTORSPEED);
	printf("INTAKE MOTOR IS POWERED");
}

// Make this return true when this Command no longer needs to run execute()
bool IntakePwr::IsFinished() {
    if(Robot::oi->getOpStick()->GetRawButton(1)) return false;

	RobotMap::intakeShooterMotor->Set(0);
	RobotMap::intakeTreadMotor->Set(0);
    return true;
}

// Called once after isFinished returns true
void IntakePwr::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void IntakePwr::Interrupted() {

}
