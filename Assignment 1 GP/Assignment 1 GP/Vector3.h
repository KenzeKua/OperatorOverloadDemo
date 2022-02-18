#ifndef VECTOR3_H
#define VECTOR3_H

#include <iostream>
#include <cmath>

class Vector3
{
private:
	double x, y, z;

	float l;
	float i;

public:
	Vector3();
	Vector3(double x, double y, double z);

	Vector3 operator+(Vector3& vec2);
	Vector3 operator-(Vector3& vec2);
	Vector3 operator*(float a);
	Vector3 operator/(float a);

	void Magnitude();
	void Dot(Vector3& vec2);
	Vector3 Cross(Vector3& vec2);

	void Print();
};

#endif