#include <iostream>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "RU");
    const int MAX_N = 1000;
    int a[MAX_N];
    int N;
    do
    {
        printf("Введите количество элементов массива (1..%d): ", MAX_N);
        scanf("%d", &N);
    } while (N < 1 || N > MAX_N);
    int count = 0;
    int sum = 0;
    int i = 0;
    for (; i < N; i++)
    {
        a[i] = rand() % 14 - 5;
    }
    i = 0;
    for (; i < N && count < 2; i++)
    {
        if (a[i] > 0)
        {
            ++count;
        }
        if (count > 0) sum += a[i];
    }
    printf("Массив (из %d элементов):", N);
    for (int j = 0; j < N; j++)
    {
        printf(" %d", a[j]);
    }
    printf("\n");
    if (count < 2)
    {
        printf("for: недостаточно положительных элементов\n");
        return 0;
    }
    printf("Сумма от 1 положительного элемента в массиве до 2 (for) = %d\n", sum);

    count = 0, i = 0, sum = 0;
    while (i < N && count < 2)
    {
        if (a[i] > 0)
        {
            ++count;
        }
        if (count > 0) sum += a[i];
        ++i;
    }
    printf("Сумма от 1 положительного элемента в массиве до 2 (while) = %d\n", sum);

    count = 0, i = 0, sum = 0;
    do
    {
        if (a[i] > 0)
        {
            ++count;
        }
        if (count > 0) sum += a[i];
        ++i;
    } while (i < N && count < 2);
    printf("Сумма от 1 положительного элемента в массиве до 2 (do-while) = %d", sum);
    return 0;
}
