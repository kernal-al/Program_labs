#include <iostream>
#include <math.h>

int main() {
    setlocale(LC_ALL, "RU");
    int hours, minutes;

    printf("Введите количество часов: ");
    scanf_s("%i", &hours);

    printf("Введите количество минут: ");
    scanf_s("%i", &minutes);

    hours %= 24;
    minutes %= 60;

    double hourAngle = hours * 30 + minutes * 0.5;
    double minuteAngle = minutes * 6;
    double difference = fabs(hourAngle - minuteAngle);

    double angle = difference < 180
        ? difference
        : 360 - difference;

    printf("%g", angle);
}
