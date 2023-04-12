#include <iostream>
using namespace std;
// В данном файле будет распологаться решение обычных уравнений различными методами
int main()
{
    setlocale(LC_ALL,"ru");
    cout<<"Введите уравнения:";
    double x,a,result;
    cin >> x;
    cin >> a;
    cout << x << "x = " << a << endl;  
    result = a / x;
    cout << "x = " <<result << endl; 
}

/*
Задачи:
1-написать код для выбора режимов (можно взять как у файла "quadratic_equation").
2-написать код для любого метода решений уравнений.
*/
