#include <math.h>
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RU");
    int N = 1;
    float P1 = 1, P2 = 2;
    do
    {
        printf("Введите количество треугольников: ");
        scanf("%d", &N);
    } while (N < 1);
    do
    {
        printf("Введите P1 и P2 (P1 < P2): ");
        scanf("%f %f", &P1, &P2);
    } while (P1 <= 0 || P2 <= P1);
    int K = 0;
    for (int i = 1; i <= N; ++i)
    {
        float AX, AY, BX, BY, CX, CY;
        printf("%d-й треугольник\n", i);
        printf("Введите координаты точки A (AX,AY): ");
        scanf("%f %f", &AX, &AY);
        printf("Введите координаты точки B (BX,BY): ");
        scanf("%f %f", &BX, &BY);
        printf("Введите координаты точки C (CX,CY): ");
        scanf("%f %f", &CX, &CY);
        float AB = sqrt(pow((AX - BX), 2) + pow((AY - BY), 2));
        float AC = sqrt(pow((AX - CX), 2) + pow((AY - CY), 2));
        float BC = sqrt(pow((BX - CX), 2) + pow((BY - CY), 2));
        float P = AB + AC + BC;
        printf("Периметр %d треугольника: %.2f\n", i, P);
        if (P > P1 && P < P2)
        {
            K += 1;
        }
    }
    printf("Количество треугольников с периметром больше P1 и меньше P2: %d", K);
}
