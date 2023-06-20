#include <iostream>
#include <cmath>
using namespace std;
// В данном файле будет распологаться решение квадратных уравнений различными методами

int crammers_rule();
int discriminant();
int viet_rule();

int main()
{
    setlocale(LC_ALL, "ru");
    cout << "Введите метод для решения квадратного уравнения" << endl;
    cout << "1 - дискриминант"<< "\n" << "2 - Метод Краммера" << endl;
    cout << "3 - метод коэфицента" << endl;
    short int between;
    cin >> between;

    switch (between)
    {
    case 1:
        discriminant();
        break;

    case 2:
        crammers_rule();
        break;
    case 3:
        viet_rule();
        break;

    default:
        cout << "математическая операция не реализована" << endl;
        return 0;
    }
}

int discriminant()
{
    int D, result, a, b, c, x1, x2;
    cin >> a >> b >> c;
    cout << a << "x^2 " << b << "x " << c << "= 0";
    D = pow(b, 2) - 4 * a * c;
    cout << "D = " << D << endl;

    if (D > 0)
    {
     x1=-b+sqrt(D)/(2*a);
     x2=-b-sqrt(D)/(2*a);
     cout<<"найденны корни \n"<< "x1 = " <<x1<<endl;
     cout<<"x2 = "<<x2<<endl;
     else if (x == 0)
     {
      x1= -b/(2*a);
     }
    }
    
    else
    {
     cout<<"нет дейстаительных корней";
    }

    return 0;
}

int crammers_rule()
{
    float a11, a12, a13, a21, a22, a23, b1, b2, b3, determinant, result_x, result_y, x, y; // Поработать над типами данных переменных (с памятью)
    /* double:      float:
     * 112 байт      56 байт
     * 896 бит       448 бит
     */
    short int choose;
    cout << "Выберите количество уравнений в методе Краммера:";
    cin >> choose;
    switch (choose)
    {
    case 2:
        cout << "Введите два уравнение:" << endl;
        cout << " Введите коэффиценты: ";
        cin >> a11 >> a12;
        cin >> a21 >> a22;
        cout << " после =: ";
        cin >> b1 >> b2;
        cout << "\n";

        cout << a11 << " x1 + " << a12 << " x2 = " << b1 << endl;
        cout << a21 << " x1 + " << a22 << " x2 = " << b2 << "\n"
             << endl;

        cout << "Матрица определителя:" << endl;
        cout << a11 << " " << a12 << endl;
        cout << a21 << " " << a22 << endl;
        determinant = (a11 * a22) - (a12 * a21);
        cout << endl;

        cout << "Определитель = " << determinant << endl;

        cout << "Матрица для вычисления определителя x: " << endl;
        cout << b1 << " " << a12 << endl;
        cout << b2 << " " << a22 << endl;
        result_x = (b1 * a22) - (a12 * b2);
        cout << endl;

        cout << "Определитель х = " << result_x << endl;
        cout << endl;

        cout << "Матрица для вычисления определителя y: " << endl;
        cout << a11 << " " << b1 << endl;
        cout << a21 << " " << b2 << endl;
        result_y = (a11 * b2) - (b1 * a21);
        cout << endl;

        cout << "Определитель y = " << result_y << endl;
        cout << endl;
        x = result_x / determinant;
        cout << "x = " << x << endl;
        y = result_y / determinant;
        cout << "y = " << y << endl;
        break;
        //--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
    case 3:
        cout << "Введите три уравнение" << endl;
        cout << " Введите коэффиценты: ";
        cin >> a11 >> a12 >> a13;
        cin >> a21 >> a22 >> a23;
        cout << " после =: ";
        cin >> b1 >> b2 >> b3;
        cout << "\n";

        cout << a11 << "x1 + " << a12 << "x2 = " << b1 << endl;
        cout << a21 << "x1 + " << a22 << "x2 = " << b2 << endl;
        cout << a11 << "x1 + " << a12 << "x2 = " << b3 << endl;

        cout << "Матрица определителя " << endl;
        cout << a11 << " " << a12 << endl;
        cout << a21 << " " << a22 << endl;
        determinant = (a11 * a22) - (a12 * a21);

        cout << "Определитель = " << determinant << endl;

        cout << "Матрица для вычисления определителя x: " << endl;
        cout << b1 << " " << a12 << endl;
        cout << b2 << " " << a22 << endl;
        result_x = (b1 * a22) - (a12 * b2);

        cout << "Определитель х = " << result_x << endl;

        cout << "Матрица для вычисления определителя y: " << endl;
        cout << a11 << " " << b1 << endl;
        cout << a21 << " " << b2 << endl;
        result_y = (a11 * b2) - (b1 * a21);

        cout << "Определитель y = " << result_y << endl;
        x = result_x / determinant;
        cout << "x = " << x << endl;
        y = result_y / determinant;
        cout << "y = " << y << endl;
        break;
        //---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
    default:
        cout << "Неправильные значения";
        return 0;
    }
}

/*
Задачи:
1-Написать код для интерфейса матриц:

*22     676*        !22     676!
*          *        !          !
*16     231*        !16     231!

ну или что-то в таком стиле.
2-Добавить решение через дискреминант.
3-написать выбор разных методов. (выполнено*)
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
*/
