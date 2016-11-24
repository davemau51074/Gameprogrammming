#pragma once
//#include "Vector.h"



//This is lab five before being applied to a practical 

class Vector3
{


public: 
	// The class has three variables x, y and z 
	double x;
	double y;
	double z;



	 //Constructor 1
	Vector3()
	{
		x = 0.0f;
		y = 0.0f;
		z = 0.0f;
	}

	 //Constructor 2
	 Vector3(double x1, double y1, double z1)
	{ // To allow other values for X, Y and Z to be declared
		x = x1;
		y = y1;
		z = z1;
	 }
	// Constructor 3
	// Vector3(Vector3 V)
	//{  // To allow other values for X, Y and Z to be declared
	//	x = V.x;
	//	y = V.y;
	//	z = V.z;
	//}



	 //the code used to calculate the perpindicular Component 
	 Vector3 operator +(Vector3 V2);
	 Vector3 operator -(Vector3 V2);
	 double operator *(Vector3 V2);
	 Vector3 operator  *(double k);
	 Vector3 operator  *(float k);
	 Vector3 operator *(int k);
	 Vector3 operator ^(Vector3 V2);
	 Vector3  Normalise(Vector3 V2);
	 double LengthSquared();
	 Vector3  Normalise();
	 double Length();
//	 Vector3  +(Vector3 V1, Vector3 V2);


};