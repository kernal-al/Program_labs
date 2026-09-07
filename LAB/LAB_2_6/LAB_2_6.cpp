#include <iostream>
int main()
{
	setlocale(LC_ALL, "RU");
	int money;
	std::cout << "Введите количество денег(с копейками): " ;
	std::cin >> money;
	int rubles = money / 100;
	int kopecks = money % 100;

	int max_money = money;
	int best_step = 0;

	int curr_rub = rubles;
	int curr_kop = kopecks;

	for (int step = 1; step <= 10000; ++step)
	{
		if (curr_rub == 0 && curr_kop < 29)
		{
			break;
		}

		if (curr_kop >= 29)
		{
			curr_kop -= 29;
		}
		else
		{
			curr_rub -= 1;
			curr_kop += 71;
		}

		std::swap(curr_rub, curr_kop);

		int curr_total = curr_rub * 100 + curr_kop;

		if (curr_total > max_money)
		{
			max_money = curr_total;
			best_step = step;
		}
	}

	std::cout << "Наибольшая конечная сумма: " << max_money << std::endl;
	std::cout << "Оптимальное число проходов: " << best_step << std::endl;

	return 0;

}