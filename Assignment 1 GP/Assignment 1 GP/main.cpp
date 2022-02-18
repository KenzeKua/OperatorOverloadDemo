#include "Vector3.h"

int main()
{
	Vector3 A(10, 10, 10);
	Vector3 B(2, 4, 5);
	Vector3 C(0, 0, 0);

	C = A + B;
	C.Print();
	
	C = A - B;
	C.Print();

	C = A.operator*(5);
	C.Print();

	C = A.operator/(2);
	C.Print();

	A.Magnitude();

	A.Dot(B);

	C = A.Cross(B);
	C.Print();

	system("PAUSE");

	return 0;
}