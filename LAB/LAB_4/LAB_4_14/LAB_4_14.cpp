#include <iostream>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "RU");
    int a[1000];
    int N = 1000;
    int count = 0;
    int sum = 0;
    int i = 0;
    int first = -1;
    int second = -1;
    for (; i < N; i++) 
    {
        a[i] = rand() % 14 - 5;
        if (a[i] > 0 && count == 0) 
        {
            first = i;
            count += 1;
        }
        else if (a[i] > 0 && count == 1)
        {
            second = i;
            count += 1;
        }
        if (first != -1) sum += a[i];
        if (second != -1) break;
    }
    if (second == -1 || first == -1)
    {
        printf("for: недостаточно положительных элементов\n");
        return 0;
    }
    else
        printf("Сумма от 1 положительного элемента в массиве до 2 (for) = %d\n", sum);
        
        count = 0, i = 0, sum = 0, first = -1, second = -1;
    while (i < N)
    {
     
        if (a[i] > 0 && count == 0)
        {
            first = i;
            count += 1;
        }
        else if (a[i] > 0 && count == 1)
        {
            second = i;
            count += 1;
        }
        if (first != -1) sum += a[i];
        if (second != -1) break;
        i += 1;
    }
    printf("Сумма от 1 положительного элемента в массиве до 2 (while) = %d\n", sum);
    count = 0, i = 0, sum = 0, first = -1, second = -1;
    do
    {
        if (a[i] > 0 && count == 0)
        {
            first = i;
            count += 1;
        }
         else if (a[i] > 0 && count == 1)
        {
            second = i;
            count += 1;
        }
         if (first != -1) sum += a[i];
         if (second != -1) break;
            
        i += 1;
    } while (i < N);
    printf("Сумма от 1 положительного элемента в массиве до 2 (do-while) = %d", sum);
    return 0;
}