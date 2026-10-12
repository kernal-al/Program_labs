#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <clocale>
#include <cmath>

int main()
{
	setlocale(LC_ALL, "RU");
	double a, b;
	printf("Введите переменную a: ");
	scanf("%lf", &a);
	printf("Введите переменную b: ");
	scanf("%lf", &b);

	double s = sin(b);
	// sin²b и b³ — умножением, b^(2/3) = cbrt(b²) вместо pow
	double numerator = pow(a, s * s + cos(b * b * b)) + cbrt(b * b);
	// 1 - e^√a = -expm1(√a); знак не важен, всё под модулем
	double q = fabs(a * tan(b) / expm1(sqrt(a)));
	// знаменатель q^(1/4) = √√q, он неотрицательный, поэтому |num/den| = |num|/den
	double y = sqrt(fabs(numerator) / sqrt(sqrt(q)));

	printf("Ответ: %.3f\n", y);
	return 0;
}
