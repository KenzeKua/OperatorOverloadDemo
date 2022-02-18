#include "Vector3.h"

Vector3::Vector3()
{
}
Vector3::Vector3(double x, double y, double z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

Vector3 Vector3::operator+(Vector3& vec2)
{
	std::cout << "Addition : ";
	return Vector3(
		x + vec2.x,
		y + vec2.y,
		z + vec2.z
	);
}
Vector3 Vector3::operator-(Vector3& vec2)
{
	std::cout << "Subtract : ";
	return Vector3(
		x - vec2.x,
		y - vec2.y,
		z - vec2.z
	);
}
Vector3 Vector3::operator*(float a)
{
	std::cout << "Multiply : ";
	return Vector3(
		x * a,
		y * a,
		z * a
	);
}
Vector3 Vector3::operator/(float a)
{
	std::cout << "Divide : ";
	return Vector3(
		x / a,
		y / a,
		z / a
	);
}

void Vector3::Magnitude()
{
	std::cout << "Magnitude : ";
	l = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
	std::cout << l << std::endl << std::endl;
}
void Vector3::Dot(Vector3& vec2)
{
	std::cout << "Dot : ";
	i = ((x * vec2.x) + (y * vec2.y) + (z * vec2.z));
	std::cout << i << std::endl << std::endl;
}
Vector3 Vector3::Cross(Vector3& vec2)
{
	std::cout << "Cross : ";

	return Vector3(
		y * vec2.z - z * vec2.y,
		z * vec2.x - x * vec2.z,
		x * vec2.y - y * vec2.x
	);
}

void Vector3::Print()
{
	std::cout << "(x, y, z) = (" << x << ", " << y << ", " << z << ")" << std::endl << std::endl;
}
