// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"
#include "CANTalon.h"

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
std::shared_ptr<CANTalon> RobotMap::intakeTreadMotor;
std::shared_ptr<CANTalon> RobotMap::intakeShooterMotor;
std::shared_ptr<CANTalon> RobotMap::driveTrainRightFront;
std::shared_ptr<CANTalon> RobotMap::driveTrainRightBack;
std::shared_ptr<CANTalon> RobotMap::driveTrainLeftFront;
std::shared_ptr<CANTalon> RobotMap::driveTrainLeftBack;
std::shared_ptr<RobotDrive> RobotMap::driveTrainRobotDrive41;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION

void RobotMap::init() {
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
    LiveWindow *lw = LiveWindow::GetInstance();

    intakeTreadMotor.reset(new CANTalon(6));
    lw->AddActuator("Intake", "TreadMotor", intakeTreadMotor);
    
    intakeShooterMotor.reset(new CANTalon(4));
    lw->AddActuator("Intake", "ShooterMotor", intakeShooterMotor);
    
    driveTrainRightFront.reset(new CANTalon(0));
    lw->AddActuator("DriveTrain", "RightFront", driveTrainRightFront);
    
    driveTrainRightBack.reset(new CANTalon(1));
    lw->AddActuator("DriveTrain", "RightBack", driveTrainRightBack);
    
    driveTrainLeftFront.reset(new CANTalon(2));
    lw->AddActuator("DriveTrain", "LeftFront", driveTrainLeftFront);
    
    driveTrainLeftBack.reset(new CANTalon(3));
    lw->AddActuator("DriveTrain", "LeftBack", driveTrainLeftBack);
    
    driveTrainRobotDrive41.reset(new RobotDrive(driveTrainLeftFront, driveTrainLeftBack,
              driveTrainRightFront, driveTrainRightBack));
    
    driveTrainRobotDrive41->SetSafetyEnabled(true);
        driveTrainRobotDrive41->SetExpiration(0.1);
        driveTrainRobotDrive41->SetSensitivity(0.5);
        driveTrainRobotDrive41->SetMaxOutput(1.0);



    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}