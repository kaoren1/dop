#include <iostream>
using namespace std;

//11 вариант
int main()
{
    setlocale(LC_ALL, "RUS");
    int a, b;
    cout << "Введите значение первой перменной: ";
    cin >> a;
    cout << "Введите значение второй перменной: ";
    cin >> b;

    int* pA = &a;
    int* pB = &b;

    int c = *pA;
    *pA = *pB;
    *pB = c;

    cout << "Значение первой переменной: " << a << endl;
    cout << "Значение второй переменной: " << b << endl;
}