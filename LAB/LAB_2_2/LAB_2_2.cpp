#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <clocale>

int main()
{
	setlocale(LC_ALL, "RU");
	unsigned k;
	printf("Введите количество секунд: ");
	scanf("%u", &k);

	// / и % с одним делителем компилятор делает одной инструкцией деления
	unsigned hours = k / 3600, rest = k % 3600;
	printf("%u ч %u мин %u сек\n", hours, rest / 60, rest % 60);
	return 0;
}
