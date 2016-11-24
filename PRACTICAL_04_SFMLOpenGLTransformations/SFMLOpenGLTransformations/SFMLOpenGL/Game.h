#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/OpenGL.hpp>
#include <gl/GL.h>
#include <gl/GLU.h>
#include "Vector.h"
#include "Matrix.h"


using namespace std;
using namespace sf;

class Game
{
public:
	Game();
	~Game();
	void run();
	MyVector3 vector1 =  MyVector3(0.0,0.0,0.0);
	MyVector3 vector2 =  MyVector3(2.0,3.0,0.0);
	MyVector3 vector3 =  MyVector3(3.0,5.0,0.0);


	Matrix3 rotation = Matrix3(2, 3, 4, 5,0, 0,0,0,0);

private:
	Window window;
	bool isRunning = false;
	void initialize();
	void update();
	void draw();
	void unload();
	const int primatives;

	GLuint index;
	Clock clock;
	Time elapsed;
	

	float rotationAngle = 0.0f;
};