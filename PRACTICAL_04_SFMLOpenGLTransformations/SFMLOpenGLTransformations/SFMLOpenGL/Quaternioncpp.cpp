#include "Quaternion.h"








			public Quaternions()
		{
			w = 0.0f;
			x = 0.0f;
			y = 0.0f;
			z = 0.0f;
		}

		public Quaternions(float w1, float x1, float y1, float z1)
		{
			w = w1;
			x = x1;
			y = y1;
			z = z1;
		}
		public override string ToString()
		{

			return "(" + w.ToString("g3") + "," + x.ToString("g3") + "i," + y.ToString("g3") + "j" + z.ToString("g3") + "k) is ";

		}



		public void  Quaternion()
		{
			w = 0.0f;
			x = 0.0f;
			y = 0.0f;
			z = 0.0f;
		}

		public void Quaternion(double a, double b, double c, double d)
		{
			w = (float)a;
			x = (float)b;
			y = (float)c;
			z = (float)d;


		}
		public double Modules
		{
			get
		{
			return Math.Sqrt(w*w + x*x + y*y + z*z);
		}



		}

			public static Quaternions operator -(Quaternions q1, Quaternions q2)
		{
			return new Quaternions(

				q1.X - q2.X,
				q1.Y - q2.Y,
				q1.Z - q2.Z,
				q1.w - q2.w



			);
		}


		//public override string ToString()
		//{
		//    return base.ToString();
		//}
		public static Quaternions operator * (Quaternions q1, Quaternions q2)
		{

			//this is the code and formulas used to multiply two Quaternions together 
			return new Quaternions(
				(q1.w * q2.X) + (q1.X * q2.w) + (q1.Y * q2.Z) - (q1.Z * q2.Y),
				(q1.w * q2.Y) + (q1.Y * q2.w) + (q1.Z * q2.X) - (q1.X * q2.Z),
				(q1.w * q2.Z) + (q1.Z * q2.w) + (q1.X * q2.Y) - (q1.Y * q2.X),
				(q1.w * q2.w) - (q1.X * q2.X) - (q1.Y * q2.Y) - (q1.Z * q2.Z));


		}
		public static Quaternions operator *(Quaternions q1, float scaler)
		{

			//this multiplies s quarternion by the scaler
			return new Quaternions((q1.w * scaler), (q1.X * scaler), (q1.Y * scaler), (q1.Z * scaler));

		}
		public static Quaternions operator +(Quaternions q1, Quaternions q2)
		{

			// this adds two quaternions together 
			return new Quaternions(

				q1.X + q2.X,
				q1.Y + q2.Y,
				q1.Z + q2.Z,
				q1.w + q2.w




			);
		}

		//public static Quaternions operator + (double x, double y, double z) 
		//{
		//return;

		//}


		public Quaternions Conjugate()
		{
			//this gets the conjugate of the quaternions 
			return new Quaternions(w, -x, -y, -z);
		}


		public Quaternions Normalise(Quaternions q1)
		{
			//this is the code i use to normalise the quaternion before using it for the rotating method below 
			Quaternions quaternion;
			float i = (float)(Math.Sqrt((W* W) + (X * X) + (Y *  Y) + (Z *  Z)));
			quaternion = new Quaternions((float)(W / i), (float)(X / i), (float)(Y / i), (float)(Z / i));
			return quaternion;
		}



		public Vector3 Rotate(float angle, Vector3 viktor)
		{
			// this is my attempt at rotating the quaternions 
			Quaternions q1 = new Quaternions(W, X, Y, Z);

			q1 = q1.Normalise(q1);
			double i = ((angle * Math.PI / 180));
			Quaternions q2 = new Quaternions((float)Math.Cos(i / 2.0), (float)Math.Sin(i / 2.0) * q1.x, (float)Math.Sin(i / 2.0) * q1.y, (float)Math.Sin(i / 2.0) * q1.z);
			Quaternions q3 = q2.Conjugate();
			Quaternions q4 = new Quaternions(0.0f, (float)viktor.X, (float)viktor.Y, (float)viktor.Z);
			q4 = ((q2 * q4) * q3);
			return new Vector3(q4.x, q4.y, q4.z);
		}








	

