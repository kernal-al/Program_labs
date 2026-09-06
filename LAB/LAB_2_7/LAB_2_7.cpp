#include <iostream>
int main()
{
    setlocale(LC_ALL, "RU");

    int n;
    std::cout << "Введите число N: ";
    if (!(std::cin >> n)) return 0;

    int min_diff = INT_MAX; // Изначально минимальная разница — бесконечность
    int best_p = 0;
    int best_q = 0;

    // Перебираем P. Так как P <= Q, то P^2 + P^2 <= N, откуда P <= sqrt(n/2)
    // Чтобы не выйти за рамки при n близких к 10^6, перебор делаем до sqrt(n)
    for (int p = 1; p * p <= n; ++p) {
        // Для каждого P ищем наилучший Q. 
        // Он находится примерно как квадратный корень из (n - p*p)
        int q = std::round(std::sqrt(n - p * p));
        if (q < p) q = p; // Условие из задачи: P <= Q

        // Проверяем текущее значение Q и соседнее Q+1, чтобы точно поймать минимум
        for (int curr_q = q; curr_q <= q + 1; ++curr_q) {
            if (p > curr_q) continue;

            // Считаем выражение |N - P^2 - Q^2|
            int current_diff = std::abs(n - p * p - curr_q * curr_q);

            // Если нашли разницу меньше ИЛИ такую же, но с меньшим Q
            if (current_diff < min_diff || (current_diff == min_diff && curr_q < best_q)) {
                min_diff = current_diff;
                best_p = p;
                best_q = curr_q;
            }
        }
    }
    std::cout << "Результат P и Q: " << best_p << " " << best_q << std::endl;

    return 0;
}