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
    for (; pow(4,k+1) < M; ++k)
    {
    }
    printf("наибольшее число %d", k);    
    return 0;
}
