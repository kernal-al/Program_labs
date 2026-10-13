// LAB_3_2 — Лабораторная работа 3, вариант 2
// Задача: даны действительные положительные числа X, Y и Z. Выяснить, существует ли
// треугольник с длинами сторон X, Y и Z. Если существует — является ли он остроугольным.
#define _CRT_SECURE_NO_WARNINGS  // чтобы Visual Studio разрешила scanf
#include <stdio.h>
#include <locale.h>

// Треугольник НЕ существует, если сумма двух любых сторон не больше третьей.
// Возвращает 1, если треугольник существует, иначе 0.
int exists(double x, double y, double z)
{
    if ((x + y) <= z || (x + z) <= y || (y + z) <= x)
        return 0;
    return 1;
}

// Треугольник остроугольный, если сумма квадратов двух любых сторон
// больше квадрата третьей. Возвращает 1, если остроугольный, иначе 0.
int isAcute(double x, double y, double z)
{
    double sqrX = x * x;  // квадраты сторон
    double sqrY = y * y;
    double sqrZ = z * z;

    int bX = (sqrY + sqrZ) > sqrX;  // условие для каждой стороны
    int bY = (sqrX + sqrZ) > sqrY;
    int bZ = (sqrX + sqrY) > sqrZ;

    return bX && bY && bZ;
}

int main()
{
    setlocale(LC_ALL, "Russian");  // русский текст в консоли
    setlocale(LC_NUMERIC, "C");    // дробные числа вводим через точку: 0.5

    double x = 0, y = 0, z = 0;  // длины сторон

    // ввод; повторяем, пока все три числа не станут положительными
    do
    {
        printf("Введите длины сторон X, Y, Z (положительные числа): ");
        if (scanf("%lf %lf %lf", &x, &y, &z) != 3)
        {
            // ввели не число — очищаем строку ввода и просим снова
            while (getchar() != '\n') {}
            x = 0;
        }
    } while (x <= 0 || y <= 0 || z <= 0);

    if (!exists(x, y, z))
    {
        printf("Треугольника не существует\n");
    }
    else
    {
        if (isAcute(x, y, z))
            printf("Треугольник остроугольный\n");
        else
            printf("Треугольник не остроугольный\n");
    }

    return 0;
}
