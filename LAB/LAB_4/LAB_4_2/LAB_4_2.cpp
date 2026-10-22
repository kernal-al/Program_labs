#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    int k = 0;
    int M;
    do
    {
        printf("Введите целое число M > 1: ");
        scanf("%d", &M);
    } while (M <= 1);

    for (; pow(4, k + 1) < M; ++k)
    {
    }
    printf("for: %d\n", k);

    k = 0;
    while (pow(4, k + 1) < M)
    {
        ++k;
    }
    printf("while: %d\n", k);

    k = 0;
    do
    {
        ++k;
    } while (pow(4, k) < M);
    printf("do-while: %d\n", k - 1);

    return 0;
}
