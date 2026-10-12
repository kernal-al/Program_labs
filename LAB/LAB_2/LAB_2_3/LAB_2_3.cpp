#include <cstdio>
#include <clocale>

// Всё считается на этапе компиляции, в рантайме остаётся только вывод.
// Зёрен: 1 + 2 + 4 + ... + 2^63 = 2^64 - 1 — ровно максимум unsigned long long.
constexpr unsigned long long GRAINS = ~0ULL;
// В год: 70 млн т · 10^6 г/т · 10 зёрен/г = 7·10^14 зёрен
constexpr unsigned long long PER_YEAR = 700000000000000ULL;
// Округляем вверх: за неполный последний год урожай ещё не собран
constexpr unsigned long long YEARS = GRAINS / PER_YEAR + (GRAINS % PER_YEAR != 0);

int main()
{
	setlocale(LC_ALL, "RU");
	printf("Лет потребуется: %llu\n", YEARS);
	return 0;
}
