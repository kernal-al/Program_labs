#include<iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    int total_seconds;
    printf("Введите количество секунд:\n");
    scanf("%d", &total_seconds);
    int hours = total_seconds/3600;
    total_seconds = total_seconds - hours * 60 * 60;
    int minutes = total_seconds / 60;
    total_seconds = total_seconds - minutes * 60;
    printf("%d часов %d минут %d секунд\n", hours, minutes, total_seconds);
    return 0;
}
