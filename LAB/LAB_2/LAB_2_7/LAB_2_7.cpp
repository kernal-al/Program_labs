#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "RU");
	int n;
	printf("Введите число N: ");
	scanf("%d", &n);

	int bestDiff = n + 1, bestP = 0, bestQ = 0;
	// Два указателя: P растёт, подходящее Q только убывает,
	// поэтому корень берём один раз, а дальше лишь уменьшаем q.
	int q = (int)sqrt((double)n);
	// Квадраты не пересчитываем умножением, а обновляем сложением:
	// (p+1)² = p² + 2p + 1,  (q-1)² = q² - 2q + 1
	int qq = q * q;
	int pp = 1;                               // p² при p = 1
	for (int p = 1; ; pp += p + p + 1, ++p)
	{
		// q — наибольшее число >= p, при котором p² + q² <= n
		while (q >= p && pp + qq > n)
		{
			qq -= q + q - 1;
			--q;
		}

		if (q < p)
		{
			// Даже при Q = P сумма больше n, дальше будет только хуже
			int d = pp + pp - n;
			if (d < bestDiff || (d == bestDiff && p < bestQ))
			{
				bestDiff = d; bestP = p; bestQ = p;
			}
			break;
		}

		int s = pp + qq;
		int d = n - s;                        // недолёт, >= 0
		if (d < bestDiff || (d == bestDiff && q < bestQ))
		{
			bestDiff = d; bestP = p; bestQ = q;
		}
		d = s + q + q + 1 - n;                // перелёт: p² + (q+1)² - n, > 0
		if (d < bestDiff || (d == bestDiff && q + 1 < bestQ))
		{
			bestDiff = d; bestP = p; bestQ = q + 1;
		}
	}

	printf("P = %d, Q = %d\n", bestP, bestQ);
	return 0;
}