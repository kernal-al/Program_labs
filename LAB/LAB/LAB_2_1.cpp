#include <iostream>
#include <math.h>
#include <numbers>
int main()
{
	setlocale(LC_ALL, "RU");
	float p = std::numbers::pi;
	short rad = 2;
	float rad_lenght = 2 * p * rad;
	float rad_s = p * std::pow(rad, 2);
	float V = 4 / 3. * rad_s * rad;
	float pov = 4 * rad_s;
	std::cout << "Длина окружности: " << rad_lenght << std::endl;
	std::cout << "Площадь круга: " << rad_s << std::endl;
	std::cout << "Объём шара: " << V << std::endl;
	std::cout << "Площадь поверхности шара: " << pov << std::endl;
}

