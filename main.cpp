#include "Matrices.h"

using namespace Matrices;

int main()
{
	Matrix a(2, 2);

	a(0, 0) = 0;
	a(0, 1) = -1;
	a(1, 0) = 1;
	a(1, 1) = 0;
	
	//Matrix a = { { 0, -1 }, { 1, 0 } };

	Matrix b(2, 4);

	b(0, 0) = 1;
	b(0, 1) = 0.866025;
	b(0, 2) = 1;
	b(0, 3) = 0.5;
	b(1, 0) = 0;
	b(1, 1) = 0.5;
	b(1, 2) = 1;
	b(1, 3) = 0.866025;

	//Matrix b = {{1, 0.866025, 1, 0.5}, {0, 0.5, 1, 0.866025} };
	std::cout << "a:" << std::endl;

	std::cout << a << std::endl;

	std::cout << "b:" << std::endl;

	std::cout << b << std::endl;

	Matrix c = b + b;

	std::cout << "c = b + b:" << std::endl;

	std::cout << c << std::endl;

	c = a * b;

	std::cout << "c = a * b:" << std::endl;

	std::cout << c << std::endl;
	
	return 0;
}