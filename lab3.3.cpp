// Lab_03_3.cpp
// <Cіденко Василь>
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 24
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x; // вхідний аргумент
    double R; // вхідний параметр
    double y; // результат обчислення виразу

    cout << "R = "; 
    cin >> R;
    cout << "x = "; 
    cin >> x;

    // розгалуження в повній формі
    if (x <= 0)
        y = -R - (R / 6.0) * x;
    else
        if (0 < x && x <= R)
            y = -sqrt(R * R - (x - R) * (x - R));
        else
            if (R < x && x <= 2 * R)
                y = sqrt(R * R - (x - R) * (x - R));
            else
                y = R;

    cout << endl;
    cout << "y = " << y << endl;

    cin.get();
    return 0;
}
