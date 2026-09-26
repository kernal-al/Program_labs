#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <clocale>
#include <cstdlib>

int main()
{
	setlocale(LC_ALL, "RU");
	int h, m;
	printf("Введите количество часов: ");
	scanf("%d", &h);
	printf("Введите количество минут: ");
	scanf("%d", &m);

	// Считаем в полуградусах, чтобы обойтись целыми числами:
	// часовая = 60h + m, минутная = 12m, разность = 60h - 11m, |разность| <= 660
	int d = abs(h % 12 * 60 - 11 * m);
	if (d > 360)                 // 360 полуградусов = 180°
		d = 720 - d;

	printf("Угол между стрелками: %d.%d\n", d >> 1, (d & 1) * 5);
	return 0;
}
