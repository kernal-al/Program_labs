#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <cstdio>
#include <clocale>
#include <cmath>

int main()
{
	setlocale(LC_ALL, "RU");
	double r;
	printf("Введите радиус: ");
	scanf("%lf", &r);

	double pr = M_PI * r;      // πr — общая часть всех формул, считаем один раз
	double S = pr * r;         // πr²
	double sphere = 4 * S;     // 4πr²

	printf("Длина окружности: %.2f\n", pr + pr);
	printf("Площадь круга: %.2f\n", S);
	printf("Площадь поверхности сферы: %.2f\n", sphere);
	printf("Объём шара: %.2f\n", sphere * r / 3);   // 4/3·πr³ = 4πr²·r/3
	return 0;
}
