#include <iostream>
#include <math.h>
int main()
{
	setlocale(LC_ALL, "RU");
	float a, b;
	std::cout << "Введите переменную a: ";
	std::cin >> a;
	std::cout << "Введите переменную b: ";
	std::cin >> b;
	double numerator = std::pow(a, std::pow(std::sin(b), 2) + std::cos(std::pow(b, 3))) + std::pow(b, 2 / 3.);
	double denominator = std::pow(std::abs((a * std::tan(b)) / (1.0 - std::exp(std::sqrt(a)))), 1/4.);
	double y = std::sqrt(std::abs((numerator) / (denominator)));
	std::cout << "Ответ: " << y;
	return 0;
}