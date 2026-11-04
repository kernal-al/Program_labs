// Лабораторная работа 5. Вариант 14.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

void fillArray(double a[], int n)
{
    for (int i = 0; i < n; ++i)
        a[i] = 3.0 + 20.0 * rand() / RAND_MAX;
}

int selectElements(const double a[], int n, double selected[])
{
    int count = 0;
    for (int i = 0; i < n; ++i)
    {
        if ((int)a[i] % 3 == 0)
        {
            selected[count] = a[i];
            ++count;
        }
    }
    return count;
}

void sortArray(double a[], int n)
{
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < n - 1 - i; ++j)
        {
            if (a[j] > a[j + 1])
            {
                double temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    setlocale(LC_NUMERIC, "C");
    srand((unsigned int)time(NULL));

    const int N = 100;
    double a[N], selected[N];

    fillArray(a, N);
    int count = selectElements(a, N, selected);
    sortArray(selected, count);

    printf("Исходный массив:\n");
    for (int i = 0; i < N; ++i)
        printf("%.10f ", a[i]);

    printf("\nЭлементы с целой частью, кратной 3, по возрастанию:\n");
    for (int i = 0; i < count; ++i)
        printf("%.10f ", selected[i]);
    printf("\n");

    return 0;
}
