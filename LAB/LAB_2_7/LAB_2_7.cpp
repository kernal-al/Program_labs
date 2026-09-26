#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <clocale>
#include <cmath>

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
	for (int p = 1; ; ++p)
	{
		int pp = p * p;
		// q — наибольшее число >= p, при котором p² + q² <= n
		while (q >= p && pp + q * q > n)
			--q;

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

		int d = n - pp - q * q;              // недолёт, >= 0
		if (d < bestDiff || (d == bestDiff && q < bestQ))
		{
			bestDiff = d; bestP = p; bestQ = q;
		}
		d = pp + (q + 1) * (q + 1) - n;      // перелёт, > 0
		if (d < bestDiff || (d == bestDiff && q + 1 < bestQ))
		{
			bestDiff = d; bestP = p; bestQ = q + 1;
		}
	}

	printf("P = %d, Q = %d\n", bestP, bestQ);
	return 0;
}
