#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
int main()
{
	setlocale(LC_ALL, "RU");
	short rad = 2;
	float rad_lenght = 2 * M_PI * rad;
	float rad_s = M_PI * std::pow(rad, 2);
	float V = 4 / 3. * rad_s * rad;
	float pov = 4 * rad_s;
	printf("Длина окружности: %.2f\n", rad_lenght);
	printf("Площадь круга: %.2f\n", rad_s);
	printf("Объём шара: %.2f\n", V);
	printf("Площадь поверхности шара: %.2f\n", pov);
}

