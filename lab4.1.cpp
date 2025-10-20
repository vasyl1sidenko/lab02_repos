// Lab_04.1.cpp
// Cіденко Василь
// Лабораторна робота № 4.1
// Цикли
// Варіант 24

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int k, N, i;
    double S;
    cout << "k = "; cin >> k;
    cout << "N = "; cin >> N;
    S = 0;
    i = k;
    while (i <= N)
    {
        S += sqrt(1 + pow(cos(i), 2) * sin(i)) / (1 + pow(sin(i), 2) * cos(i));
        i++;
    }
    cout << S << endl;
    S = 0;
    i = k;
    do {
        S += sqrt(1 + pow(cos(i), 2) * sin(i)) / (1 + pow(sin(i), 2) * cos(i));
        i++;
    } while (i <= N);
    cout << S << endl;
    S = 0;
    for (i=k; i <= N; i++)
    {
        S += sqrt(1 + pow(cos(i), 2) * sin(i)) / (1 + pow(sin(i), 2) * cos(i));
    }
    cout << S << endl;
    S = 0;
    for (i=N; i >= k; i--)
    {
        S += sqrt(1 + pow(cos(i), 2) * sin(i)) / (1 + pow(sin(i), 2) * cos(i));
    }
    cout << S << endl;
    return 0;
}