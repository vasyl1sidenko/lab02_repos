// Lab_2.1.cpp
// Сіденко Василь
// Лабораторна робота № 2.1
// Лінійні програми.
// Варіант 24
#include <iostream>
#include <cmath> // для sin, cos, tan
using namespace std;

int main()
{
    double a;  
    double z1;  // результат z1
    double z2;  // результат z2

    cout << "a  = "; // умова
    cin >> a;

    // формули
    z1 = (sin(a) + sin(5*a) - sin(3*a)) / (cos(a) - cos(3*a) + cos(5*a));
    z2 = tan(3*a);

    cout << endl;
    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;

    return 0; // branch_02
}

