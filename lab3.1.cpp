#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x; // вхідний параметр
    double y; // результат обчислення
    double A; // стала частина
    double B; // змінна частина

    cout << "x = "; 
    cin >> x;

    A = x;

    // --- Спосіб 1: скорочена форма ---
    if (x <= -1)
        B = log10(fabs(cos(5 * x))) + exp(1.0 / (x + 1));
    if (x > -1 && x < 0.4)
        B = cbrt(2 - x) - tan(x);
    if (x >= 0.4)
        B = sin(5 * x) - sqrt(fabs(1 - x));

    y = A + B;
    cout << endl;
    cout << "1) y = " << y << endl;

    // --- Спосіб 2: повна форма ---
    if (x <= -1) {
        B = log10(fabs(cos(5 * x))) + exp(1.0 / (x + 1));
    }
    else if (x > -1 && x < 0.4) {
        B = cbrt(2 - x) - tan(x);
    }
    else {
        B = sin(5 * x) - sqrt(fabs(1 - x));
    }

    y = A + B;
    cout << "2) y = " << y << endl;

    return 0;
}
