#include <iostream>
#include <math.h>


class Vector
{
private:
	int x = 3;
	int y = 4;

public:
	Vector() {
		std::cout << "Vector = " << std::sqrt(std::pow(x, 2) + std::pow(y, 2)) << std::endl;
	}
	Vector( int newX, int newY) {
		std::cout << "Vector = " << std::sqrt(std::pow(newX, 2) + std::pow(newY, 2)) << std::endl;
	}
	void SetVector( int newX, int newY) {
		std::cout << "Vector = " << std::sqrt(std::pow(newX, 2) + std::pow(newY, 2)) << std::endl;
	}
};


int main()
{
	Vector vector;
	vector.SetVector(2,3);
	Vector::Vector(2, 4);
	return 0;
}
