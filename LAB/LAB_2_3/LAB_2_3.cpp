#include <iostream>

int main()
{
	setlocale(LC_ALL, "RU");
	float Total_grains = powf(2.0, 64.0) - 1.0;
	float tons = Total_grains / 10000000;
	float years = tons / 70000000;
	printf("Лет потребуется: %d\n", (int)years);
	return 0;
}
