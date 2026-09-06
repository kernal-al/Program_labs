#include <iostream>
#include <math.h>
int main()
{
	setlocale(LC_ALL, "RU");
	int Hour_hand, Minute_hand;
	std::cout << "Введите количество часов: ";
	std::cin >> Hour_hand;
	std::cout << "Введите количество минут: ";
	std::cin >> Minute_hand;
	Hour_hand = Hour_hand % 12;
	float minute_angle = Minute_hand * 360/60.;
	float hour_angle = (Hour_hand * 360/12.)+ (Minute_hand * 30/60.);
	float diff = std::abs(hour_angle - minute_angle);
	if (diff > 180)
	{
		diff = 360 - diff;
	}
	std::cout << "Угол между стрелками: " << diff;
	return 0;
}