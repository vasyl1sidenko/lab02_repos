// Lab_03_4.cpp
// <Cіденко Василь>
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 24

#include <iostream>
using namespace std;

int main()
{
    double x; // вхідний аргумент
    double y; // вхідний параметр
    double R; // радіус

    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;

    // розгалуження в повній формі
    if ( (x * x + y * y <= R * R && y >= 0) ||
         (x <= 0 && y <= 0 && y >= -R && y >= x - R) )
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    return 0;
}
