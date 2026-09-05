#include<iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    int total_seconds;
    std::cout << "Введите количество секунд:\n";
    std::cin >> total_seconds;
    int hours = total_seconds/3600;
    total_seconds = total_seconds - hours * 60 * 60;
    int minutes = total_seconds / 60;
    total_seconds = total_seconds - minutes * 60;
    std::cout << hours << " " << "часов" << " " << minutes << " " << "минут" << " " << total_seconds << " " << "секунд";
    return 0;
}
