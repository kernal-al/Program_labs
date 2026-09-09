#include <iostream>
#include <math.h>
int main()
{
	setlocale(LC_ALL, "RU");
	float a, b;
	printf("Введите переменную a: ");
	scanf("%f", &a);
	printf("Введите переменную b: ");
	scanf("%f", &b);
	float numerator = std::pow(a, std::pow(std::sin(b), 2) + std::cos(std::pow(b, 3))) + std::pow(b, 2 / 3.);
	float denominator = std::pow(std::abs((a * std::tan(b)) / (1.0 - std::exp(std::sqrt(a)))), 1/4.);
	float y = std::sqrt(std::abs((numerator) / (denominator)));
	printf("Ответ: %.6f\n", y);
	return 0;
}