#include <iostream>
#include <cmath>
#include <iomanip>
#define M_PI 3.14159265358979323846
using namespace std;

void task51() {
    cout << "Task: 51\n";
    int n;
    cout << "Введите натуральное число n: ";
    cin >> n;

    if (n <= 0) {
        cout << "Ошибка: введите натуральное число больше 0." << endl;
        return;
    }

    int sum = 0;
    for (int i = n; i <= 2 * n; i++) {
        sum += i * i;
    }

    cout << "Сумма квадратов от n^2 до (2n)^2: " << sum << endl;
}

void task2() {
    cout << "Task: 2\n";
    int n;
    cout << "Введите число: ";
    cin >> n;

    if (!cin) {
        cout << "Ошибка: введите только числа." << endl;
        return;
    }

    if (n <= 0) {
        cout << "Ошибка: введите положительное целое число." << endl;
        return;
    }

    cout << "Делители числа " << n << ": ";
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

void task210() {
    cout << "Task: 210\n";
    int n = 1;
    double epsilon = 0, a1 = 0, an = 0, previous = a1;

    while (true) {
        cout << "Введите число эпсилон: ";
        if (cin >> epsilon) {
            if (epsilon > 0) {
                break;
            }
            else {
                cout << "Ошибка: введите положительное число." << endl;
            }
        }
        else {
            cout << "Ошибка: введите корректное число." << endl;
            return; 
        }
    }

    int min_elem_index = -1;
    cout << "Элементы последовательности: ";
    cout << a1 << " ";

    while (true) {
        n++;
        an = atan(previous) + 1;
        cout << an << " ";

        if (abs(an - previous) < epsilon) {
            min_elem_index = n;
            break;
        }
        previous = an;
    }

    if (min_elem_index != -1) {
        cout << "\n\nНаименьший номер члена последовательности: " << min_elem_index;
    }
    else {
        cout << "\n\nТакого номера нет.";
    }
}

void task77() {
    cout << "Task: 77\n";
    double L = 4.5;
    double d = 3.0;
    double delta_d = 0.2;

    cout << "Угол между палкой и полом (в градусах):" << endl;

    while (d > 0) { 
        double theta = acos(d / L) * 180.0 / M_PI;
        cout << "d = " << d << " м, угол = " << theta << " градусов" << endl;
        d -= delta_d;
    }
    cout << "Палка упала." << endl;
}


void task114() {
    cout << "Task: 114\n";
    int S;
    cout << "Введите сумму S: ";
    cin >> S;

    if (S <= 0) {
        cout << "Ошибка: введите положительное число." << endl;;
    }

    int denominations[] = { 10000, 1000, 500, 100, 50, 10, 5, 1 };
    int counts[8] = { 0 };

    for (int i = 0; i < 8; ++i) {
        counts[i] = S / denominations[i];
        S %= denominations[i];
    }

    cout << "Необходимые купюры:" << endl;
    for (int i = 0; i < 8; ++i) {
        if (counts[i] > 0) {
            cout << denominations[i] << " грн: " << counts[i] << endl;
        }
    }
}

void task175() {
    cout << "Task: 175\n";
    cout << "Введите положительные целые числа (введите 0 для завершения): ";

    int num;
    int product = 1;

    while (true) {
        cin >> num;

        if (num == 0) {
            cout << "0 ";
            break;
        }

        if (num < 0) {
            cout << "\nОшибка: введите положительное целое число." << endl;
            continue;
        }

        product *= num;
        cout << num << " (" << product << ") ";
    }
    cout << endl;
}


void task266() {
    cout << "Task: 266\n";
    int number;
    cout << "Введите натуральное число: ";
    cin >> number;

    if (number <= 0) {
        cout << "Ошибка: введите положительное натуральное число." << endl;
        return;
    }

    int maxDigit = 0, count = 0;

    while (number > 0) {
        int digit = number % 10;
        if (digit > maxDigit) {
            maxDigit = digit;
            count = 1;
        }
        else if (digit == maxDigit) {
            count++;
        }
        number /= 10;
    }
    cout << "Цифра " << maxDigit << " встречается " << count << " раз." << endl;
}

void task58() {
    cout << "Task: 58\n";
    double x = 2;
    double S = 0;
    int n = 11;

    for (int i = 1; i <= n; i += 2) {
        if (i == 3) {
            S += pow(x, i) / 3;
        }
        else {
            S += pow(x, i) / i;
        }
    }
    cout << "Сумма S = " << S << endl;
}

void task113() {
    cout << "Task: 113\n";
    int k;
    cout << "Введите значение k: ";
    cin >> k;

    if (k <= 2) {
        cout << "Ошибка: введите значение k больше 2." << endl;
        return; 
    }

    cout << left << setw(10) << "m" << setw(10) << "n" << setw(10) << "a" << setw(10) << "b" << setw(10) << "c" << endl;
    for (int m = 2; m < k; m++) {
        for (int n = 1; n < k; n++) {
            if (n >= m) break; 
            int a = m * m - n * n;
            int b = 2 * m * n;
            int c = m * m + n * n;
            cout << setw(10) << m << setw(10) << n << setw(10) << a << setw(10) << b << setw(10) << c << endl;
        }
    }
}

void task219() {
    cout << "Task: 219\n";
        int n = 1;
        double epsilon = 0, a1 = 0, an = 0, previous = a1, x = 0;

        cout << "Введите значение x: ";
        cin >> x;
        a1 = x;
        previous = a1;

        cout << "Введите число эпсилон: ";
        cin >> epsilon;

        int min_elem_index = -1;
        cout << "Элементы последовательности: ";
        cout << a1 << " ";
        while (true) {
            n++;

            an = x / (2 * previous * previous);
            if (isinf(an) || isnan(an))
            {
	            cout << "\n Ошибка: элемент последовательности стал бесконечным или неопределенным.";
            	break;
            }
            cout << an << " ";

            if (abs(an - previous) < epsilon) {
                min_elem_index = n;
                break;
            }

            previous = an;
        }

        if (min_elem_index != -1) {
            cout << "\n\nНаименьший номер члена последовательности: " << min_elem_index;
        }
        else {
            cout << "\n\nТакого номера нет.";
        }
    }



int main() {
    //task51();
    //task2();
    //task210();
    //task77();
    //task114();
    //task175();
    //task266();
    //task58();
    //task113();
    //task219();
    return 0;
}

