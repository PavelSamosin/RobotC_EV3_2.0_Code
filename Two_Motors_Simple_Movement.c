//Moving two motors forward and backward.
//BY: Pavel Samosin
//4/4/2019
//LSA: ROBOTC_EV3_2.0
//------------------------------------------------------------------------------------------------------------------------------
//This program will simple move two connected motors at half speed forward, then half speed backward, all for 2 seconds.
//
//------------------------------------------------CODE--------------------------------------------------------------------------

task main()
{
//Moves the motors connected to ports A and B at half speed for 2000 miliseconds.
	motor[motorA] = 63;
	motor[motorB] = 63;
	wait1Msec(2000);

//Then after that, moves the motors backward at the same speed for 2000 miliseconds.
	motor[motorA] = -63;
	motor[motorB] = -63;
	wait1Msec(2000);
}
