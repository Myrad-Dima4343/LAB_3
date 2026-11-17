// #1
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Введите целое число: ");
    scanf("%d", &n);

    // а) является ли оно четным
    if (n % 2 == 0) {
        printf("а) Число четное: Да\n");
    } else {
        printf("а) Число четное: Нет\n");
    }

    // б) заканчивается ли оно цифрой 7
    if (abs(n) % 10 == 7) {
        printf("б) Заканчивается цифрой 7: Да\n");
    } else {
        printf("б) Заканчивается цифрой 7: Нет\n");
    }

    // в) заканчивается ли оно четной цифрой (без составного условия)
    if (n % 2 == 0) {
        printf("в) Заканчивается четной цифрой: Да\n");
    } else {
        printf("в) Заканчивается четной цифрой: Нет\n");
    }

    return 0;
}

#2
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Введіть двозначне число: ");
    scanf("%d", &n);

    int abs_n = abs(n);

    // Перевірка, чи є число двозначним
    if (abs_n < 10 || abs_n > 99) {
        printf("Помилка: введене число не є двозначним.\n");
        return 1;
    }

    int a = abs_n / 10; // перша цифра (десятки)
    int b = abs_n % 10; // друга цифра (одиниці)

    int square = n * n;
    int four_sum_cubes = 4 * (a * a * a + b * b * b);

    if (square == four_sum_cubes) {
        printf("Так, квадрат числа дорівнює учетвереній сумі кубів його цифр.\n");
    } else {
        printf("Ні, квадрат числа не дорівнює учетвереній сумі кубів його цифр.\n");
    }

    return 0;
}

#3
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Введіть тризначне число: ");
    scanf("%d", &n);

    int abs_n = abs(n);

    // Перевірка, чи є число тризначним
    if (abs_n < 100 || abs_n > 999) {
        printf("Помилка: введене число не є тризначним.\n");
        return 1;
    }

    int first = abs_n / 100; // перша цифра (сотні)
    int last = abs_n % 10;   // остання цифра (одиниці)

    if (first == last) {
        printf("Так, число %d є паліндромом.\n", n);
    } else {
        printf("Ні, число %d не є паліндромом.\n", n);
    }

    return 0;
}
#4
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    const double EPS = 1e-9; // допустима похибка для дійсних чисел

    printf("Введіть три сторони трикутника a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Перевірка, чи існує трикутник з такими сторонами
    if (a <= 0 || b <= 0 || c <= 0 || (a + b <= c) || (a + c <= b) || (b + c <= a)) {
        printf("Трикутник із такими сторонами не існує.\n");
        return 0;
    }

    // Перевірка теореми Піфагора для кожної сторони
    if (fabs(a * a - (b * b + c * c)) < EPS) {
        printf("Трикутник є прямокутним. Гіпотенуза — сторона a (%.2f).\n", a);
    } else if (fabs(b * b - (a * a + c * c)) < EPS) {
        printf("Трикутник є прямокутним. Гіпотенуза — сторона b (%.2f).\n", b);
    } else if (fabs(c * c - (a * a + b * b)) < EPS) {
        printf("Трикутник є прямокутним. Гіпотенуза — сторона c (%.2f).\n", c);
    } else {
        printf("Трикутник не є прямокутним.\n");
    }

    return 0;
}

#5

#include <stdio.h>

int main() {
    double a, b, c, d;
    double min1, min2, result;

    printf("Введіть чотири числа (a, b, c, d): ");
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

    // Знаходимо min(a, b)
    if (a < b) {
        min1 = a;
    } else {
        min1 = b;
    }

    // Знаходимо min(c, d)
    if (c < d) {
        min2 = c;
    } else {
        min2 = d;
    }

    // Знаходимо max(min1, min2)
    if (min1 > min2) {
        result = min1;
    } else {
        result = min2;
    }

    printf("Результат max(min(a, b), min(c, d)) = %.2f\n", result);

    return 0;
}


#6

#include <stdio.h>

int main() {
    double A, B, X, Y, Z;

    printf("Введіть розміри отвору (A, B): ");
    scanf("%lf %lf", &A, &B);

    printf("Введіть розміри цегли (X, Y, Z): ");
    scanf("%lf %lf %lf", &X, &Y, &Z);

    if (A <= 0 || B <= 0 || X <= 0 || Y <= 0 || Z <= 0) {
        printf("Помилка: усі розміри мають бути додатними.\n");
        return 1;
    }

    // Перевіряємо кожну з трьох граней цегли у двох положеннях
    if ((X <= A && Y <= B) || (X <= B && Y <= A) ||
        (X <= A && Z <= B) || (X <= B && Z <= A) ||
        (Y <= A && Z <= B) || (Y <= B && Z <= A)) {
        printf("Так, цегла пройде через отвір.\n");
    } else {
        printf("Ні, цегла не пройде через отвір.\n");
    }

    return 0;
}


#7

#include <stdio.h>

int main() {
    int N, M;

    printf("Введіть кількість поверхів (N) та номер квартири (M): ");
    scanf("%d %d", &N, &M);

    // Перевірка, чи існує така квартира у будинку
    if (N < 1 || M < 1 || M > N * 3) {
        printf("Помилка: квартири з таким номером у будинку немає.\n");
        return 1;
    }

    // Обчислюємо реальний поверх квартири
    int floor = (M - 1) / 3 + 1;

    // Якщо поверх парний, ліфт зупиняється на поверх нижче (непарному)
    if (floor % 2 == 0) {
        floor = floor - 1;
    }

    printf("Ліфт має доставити пасажира на %d-й поверх.\n", floor);

    return 0;
}


#8
#include <stdio.h>

int main() {
    int password;

    printf("Введіть пароль співробітника: ");
    scanf("%d", &password);

    switch (password) {
        case 9583:
        case 1747:
            printf("Доступ дозволено. Доступні модулі баз: A, B, C.\n");
            break;

        case 3331:
        case 7922:
            printf("Доступ дозволено. Доступні модулі баз: B, C.\n");
            break;

        case 9455:
        case 8997:
            printf("Доступ дозволено. Доступний модуль бази: C.\n");
            break;

        default:
            printf("Помилка: невірний пароль. Доступ до бази даних заборонено.\n");
            break;
    }

    return 0;
}

#9

#include <stdio.h>

// Функція для обчислення векторного добутку для трьох послідовних вершин
double cross_product(double x1, double y1, double x2, double y2, double x3, double y3) {
    return (x2 - x1) * (y3 - y2) - (y2 - y1) * (x3 - x2);
}

int main() {
    double x1, y1, x2, y2, x3, y3, x4, y4;

    printf("Введіть координати вершин у порядку обходу контуру:\n");
    printf("A (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);
    printf("B (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);
    printf("C (x3 y3): ");
    scanf("%lf %lf", &x3, &y3);
    printf("D (x4 y4): ");
    scanf("%lf %lf", &x4, &y4);

    // Обчислюємо векторні добутки на кожній із 4 вершин
    double z1 = cross_product(x1, y1, x2, y2, x3, y3);
    double z2 = cross_product(x2, y2, x3, y3, x4, y4);
    double z3 = cross_product(x3, y3, x4, y4, x1, y1);
    double z4 = cross_product(x4, y4, x1, y1, x2, y2);

    // Перевіряємо, чи всі добутки мають однаковий суворий знак
    if ((z1 > 0 && z2 > 0 && z3 > 0 && z4 > 0) ||
        (z1 < 0 && z2 < 0 && z3 < 0 && z4 < 0)) {
        printf("Чотирикутник є опуклим.\n");
    } else {
        printf("Чотирикутник не є опуклим (увігнутий або вироджений).\n");
    }

    return 0;
}

#10

#include <stdio.h>

int main() {
    int n;

    printf("Введіть натуральне число n (1 <= n <= 9999): ");
    scanf("%d", &n);

    if (n < 1 || n > 9999) {
        printf("Помилка: число має бути натуральним і не перевищувати 9999.\n");
        return 1;
    }

    // Виділяємо чотири цифри (включно з ведучими нулями)
    int d1 = n / 1000;         // тисячі
    int d2 = (n / 100) % 10;   // сотні
    int d3 = (n / 10) % 10;    // десятки
    int d4 = n % 10;           // одиниці

    // Перевіряємо всі 4 комбінації, коли три цифри однакові, а четверта інша
    if ((d1 == d2 && d2 == d3 && d3 != d4) ||
        (d1 == d2 && d2 == d4 && d4 != d3) ||
        (d1 == d3 && d3 == d4 && d4 != d2) ||
        (d2 == d3 && d3 == d4 && d4 != d1)) {
        printf("Так, чотиризначний запис (%04d) містить рівно три однакові цифри.\n", n);
    } else {
        printf("Ні, чотиризначний запис (%04d) не містить три однакові цифри.\n", n);
    }

    return 0;
}
