#include <iostream>
int main()
{
    setlocale(LC_ALL, "RU");

    int n;
    std::cout << "Введите число N: ";
    if (!(std::cin >> n)) return 0;

    int min_diff = INT_MAX;
    int best_p = 0;
    int best_q = 0;

    for (int p = 1; p * p <= n; ++p) {
        int q = std::round(std::sqrt(n - p * p));
        if (q < p) q = p;
        for (int curr_q = q; curr_q <= q + 1; ++curr_q) {
            if (p > curr_q) continue;

            int current_diff = std::abs(n - p * p - curr_q * curr_q);

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