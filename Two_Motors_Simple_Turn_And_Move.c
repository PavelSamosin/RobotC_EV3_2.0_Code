//Moving the robot forward then turning and moving again.
//BY: Pavel Samosin
//4/4/2019
//LSA: ROBOTC_EV3_2.0
//------------------------------------------------------------------------------------------------------------------------------
//This program will move the robot foward, make a turn, then move again.
//
//------------------------------------------------CODE--------------------------------------------------------------------------

task main()
{
//Moves the motors connected to ports A and B at half speed for 2000 miliseconds.
	motor[motorA] = 63;
	motor[motorB] = 63;
	wait1Msec(2000);

//Makes the robot make a simple turn.
  motor[motorA] = 63;
  motor[motorB] = -63;
  wait1Msec(2000);

//Then after that, moves the motors backward at the same speed for 2000 miliseconds.
	motor[motorA] = 63;
	motor[motorB] = 63;
	wait1Msec(2000);
}
