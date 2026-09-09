#include <iostream>
#include <math.h>
int main()
{
	setlocale(LC_ALL, "RU");
	int Hour_hand, Minute_hand;
	printf("Введите количество часов: ");
	scanf("%d", &Hour_hand);
	printf("Введите количество минут: ");
	scanf("%d", &Minute_hand);
	Hour_hand = Hour_hand % 12;
	float minute_angle = Minute_hand * 360/60.;
	float hour_angle = (Hour_hand * 360/12.)+ (Minute_hand * 30/60.);
	float diff = std::abs(hour_angle - minute_angle);
	if (diff > 180)
	{
		diff = 360 - diff;
	}
	printf("Угол между стрелками: %.1f\n", diff);
	return 0;
}