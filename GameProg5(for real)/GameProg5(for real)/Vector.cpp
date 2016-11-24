#include "Vector.h"









//Vector3()
//{}





//Vector3()
//{
//
//
//
//
//}







  Vector3 Vector3::operator +(Vector3 V2)
{  // An overloaded operator + to return the sum of 2 vectors
	return Vector3(x + V2.x, y + V2.y, z + V2.z);
}

 Vector3 Vector3::operator -( Vector3 V2)
{ // An overloaded operator - to return the difference of 2 vectors
	return Vector3(x - V2.x, y- V2.y, z - V2.z);
}

 double Vector3::operator *( Vector3 V2)
{// An overloaded operator * to return the scalar product of 2 vectors
	return double(x * V2.x + y * V2.y + z * V2.z);
}

 Vector3 operator *(double k, Vector3 V1)
{// An overloaded operator * to return the product of a scalar by a vector
	return Vector3(V1.x * (float)k, V1.y * (float)k, V1.z * (float)k);
}

 Vector3 operator *(float k, Vector3 V1)
{// An overloaded operator * to return the product of a scalar by a vector
	return Vector3(V1.x * k, V1.y * k, V1.z * k);
}

 Vector3 operator *(int k, Vector3 V1)
{// An overloaded operator * to return the product of a scalar by a vector
	return Vector3(V1.x * k, V1.y * k, V1.z * k);
}

 Vector3 operator ^(Vector3 V1, Vector3 V2)
{// An overloaded operator ^ to return the vector product of 2 vectors
	return Vector3(V1.y * V2.z - V1.z * V2.y, V1.z * V2.x - V1.x * V2.z, V1.x * V2.y - V1.y * V2.x);
}

 double Vector3::LengthSquared()
 {
 
 
 
	 return double(x * x +  y * y + z * z);
 
 
 }


 double Vector3::Length()
 {
	 return double(x * x + y * y + z * z);
 }




 Vector3 Vector3::Normalise(Vector3 V1)
 {
	 if (Length() > 0.0)
	 {  // Check for divide by zero
		 double magnit = Length();
		 x /= magnit;
		 y /= magnit;
		 z /= magnit;
	 }
 
 }

//string ToString()
//{
//	return "(" + x.ToString("g3") + "," + y.ToString("g3") + "," + z.ToString("g3") + ")";
//}
