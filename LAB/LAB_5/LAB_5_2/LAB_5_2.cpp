#include <iostream>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "Russian");
    const int MAX_N = 100; 
    int a[MAX_N];
    int N = 1;
    do
    {
        printf("Введите количество элементов массива (1..%d): ", MAX_N);
        scanf("%d", &N);
    } while (N < 1 || N > MAX_N);
    int i = 0;
    int count = 0;
    int sum = 0;
    for (; i < N; ++i)
    {
        a[i] = rand() % 100 + 1;
        if (a[i] % 2 != 0)
        {
            ++count;
        }
        else
        {
            sum += a[i];
        }
        printf("%d ", a[i]);
    }
    printf("\nКоличество нечетных чисел: %d \nСумма четных чисел: %d", count, sum);
    return 0;
}
