#include <iostream>

int main()
{
	setlocale(LC_ALL, "RU");
	unsigned long long Total_grains = (1ULL << 64) - 1; // Или 18446744073709551615ULL, просто побитовый сдвиг идеально отражает легенду про шахматиста 
	double tons = Total_grains / 10000000;
	double years = tons / 70000000;
	std::cout << "Лет потребуется:" << (int)years;
	return 0;
}
