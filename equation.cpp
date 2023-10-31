#include <iostream>
#include <cmath>
using namespace std;
// В данном файле будет распологаться решение уравнений различными методами
int line(); // объявление всех функций
int quadratic();
int crammers_rule();
int discriminant();
int fractional();
int trigonometry();
int demonstration();
int logarithmic();
int matrix();
int main()
{
    setlocale(LC_ALL, "ru");
    unsigned short int ChooseEquation;
    cout << "Привет! \nДобро пожаловать в программу для решения уравнений для студентов!" << endl;
    cout << "Какой у тебя вид уравнение?" << endl;
    cout << "1 - линейное (ax+b=0) \n2 - квадратное (ax^2+bx+c=0)\n3 - биквадратное (f(x)/g(x)=0) \n";
    cout << "4 - тригонометрическое (sin x = a) \n5 - показательное (a^x = b)\n6 - логарифмическое (log⌄a x = b)" << endl;
    cout << "7 - матрицы \n"
         << endl;
    cin >> ChooseEquation; // ввод значения для выбора решения вида уравнения
    switch (ChooseEquation)
    {
    case 1:
        line(); // переход к линейным уравнениям
        break;

    case 2:
        quadratic(); // переход к квадратным уравнениям
        break;

    case 3:
        fractional(); // переход к биквадратным уравнениям
        break;

    case 4:
        trigonometry(); // переход к тригонометрическим уравнениям
        break;

    case 5:
        demonstration(); // переход к показательным уравнениям
        break;

    case 6:
        logarithmic(); // переход к логарифмическим уравнениям
        break;

    case 7:
        matrix(); // переход к решениюю матриц
        break;

    default:
        cout << "вид уравнения пока что не реализован" << endl;
        return 0;
    }
}
int line()
{
    unsigned short int SelectMethod;
    char QuestionSystem;
    cout << "Необходимо решение системы линейных уравнения? y/n" << endl;
    cin >> QuestionSystem;
    if (QuestionSystem == 'y')
    { // Если пользователь выберет 'y', то необходимо реализовать либо функцию решению систем линейных уравнений либо через switch и выбор case'ов выбирать методы решения

        cout << "Ты это реально запрограммируешь?"; // да.
    }

/*
    else
    { // Если пользователь выберет 'n', то реализация пойдёт по switch и необходимо написать название и индексы методов
        cout << "Каким методом его нужно решить?" << endl;
        // cout <<"1 - метод первый /n2-метод второй"<<endl;
        cin >> SelectMethod;
        switch (SelectMethod)
        {
        case 1:

            break;

        case 2:

            break;

        default:
            cout << "математическая операция не реализована" << endl;
            return 0;
        }
    }
    return 0;
}
*/
int quadratic()
{
    unsigned short int SelectMethod;
    cout << "каким методом его нужно решить?" << endl;
    cout << "1 - дискриминант \n2 - Метод Краммера \n3 - метод коэфицента" << endl;
    cin >> SelectMethod;
    switch (SelectMethod)
    {
    case 1:
        discriminant();
        break;

    case 2:
        crammers_rule();
        break;

    case 3:

        break;

    default:
        cout << "математическая операция не реализована" << endl;
        return 0;
    }
    return 0;
}
int discriminant()
{
    float a, b, c, D, x1, x2, i; //Поработать над типами данных (вычисление корней плохо работает с вещественным дискриминантом)
    char Questionimaginary;
    cout << "Введите своё уравнение:";
    cin >> a >> b >> c;
    if (a > 0 && c > 0) // если пользователь введёт коэффицент a и c, которые больше нуля то будут выведены соответствующие знаки
    {
        cout << a << "x^2 + " << b << "x + " << c << "= 0" << endl;
    }

    else if (a > 0 && b > 0)// если пользователь введёт коэффицент a и b, которые больше нуля то будут выведены соответствующие знаки
    {
    {
        cout << a << "x^2 + " << b << "x " << c << "= 0" << endl;
    }

    else
    { // если пользователь введёт коэффиценты меньше нуля то ему выведутся отрицательные знаки
        cout << a << "x^2 " << b << "x " << c << "= 0" << endl;
    }

    D = pow(b, 2) - 4 * a * c;
    cout << "D = " << D << endl;
    if (D > 0)
    {
        x1 = -b + sqrt(D) / (2 * a);
        x2 = -b - sqrt(D) / (2 * a);
        cout << "найденны корни: \nx1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }

    else if (D == 0)
    {
        x1 = -b / (2 * a);
    }

    else
    {
        cout << "нет действительных корней, но можно найти комплексные корни." << endl; // реализовать выбор пользователю, считать ли комплексные числа
        cout << "Найти мнимые корни? (y/n)" << endl;
        cin >> Questionimaginary;
        if ((Questionimaginary == 'y'))
        { // При выборе 'y' происходит подсчёт мнимых корней
            cout << D << " или " << abs(D) << "i" << endl;
            x1 = -b + sqrt(D) / (2 * a);
            x2 = -b - sqrt(D) / (2 * a);
            i = i / (2 * a);
            cout << "найденны корни: \nx1 = " << x1 << i << endl; // ОШИБКА nan! Неккоректный вывод x1 и x2, а также i. Предположительно решить эту проблему создав новую функцию или через указатели
            cout << "x2 = " << x2 << i << endl;                   // Предположительно, ошибка происходит из-за неккоретного if. Инициализация переменных остаётся вне if и поэтому b и a пустые.
        }
    }
    return 0;
}
int crammers_rule()
{
    float a11, a12, a13, a21, a22, a23, a31, a32, a33, b1, b2, b3, determinant, result_x, result_y, x, y; // Поработать над типами данных переменных (с памятью)
    /* double:      float:
     * 136 байт       68 байт
     * 1088 бит       544 бит
     */
    unsigned short int QuantityEquation;
    cout << "Выберите количество уравнений в методе Краммера:";
    cin >> QuantityEquation;
    switch (QuantityEquation)
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
        cout << a21 << " x1 + " << a22 << " x2 = " << b2 << endl;

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
    case 3: /*
cout << "Введите три уравнение" << endl;
cout << "Введите коэффиценты: ";
cin >> a11 >> a12 >> a13;                                                                                   Необходимо переосмыслить и дописать (Возможно переписать данный отсек в коде)
cin >> a21 >> a22 >> a23;                                                                                   Только недавно (25.10.23) при тестирование квадратных уравнений я узнал, что этот отсек недоделан
cout << "после =: ";                                                                                        Вводятся всего 4 коэффицента вместо 6, неккоректное отображение уравнений и видимо неправильный алгоритм решения и нахождения корней с определителем
cin >> b1 >> b2 >> b3;                                                                                      Надо провести работу по оптимизации и корректному решению, видимо эта проблема висела давно
cout << "\n";

cout << a11 << "x1 + " << a12 << "x2 = " << b1 << endl;
cout << a21 << "x1 + " << a22 << "x2 = " << b2 << endl;
cout << a31 << "x1 + " << a32 << "x2 = " << b3 << endl;

cout << "\nМатрица определителя " << endl;
cout << a11 << " " << a12 << endl;
cout << a21 << " " << a22 << endl;
determinant = (a11 * a22) - (a12 * a21);

cout << "\nОпределитель = " << determinant << endl;

cout << "\nМатрица для вычисления определителя x: " << endl;
cout << b1 << " " << a12 << endl;
cout << b2 << " " << a22 << endl;
result_x = (b1 * a22) - (a12 * b2);

cout << "\nОпределитель х = " << result_x << endl;

cout << "\nМатрица для вычисления определителя y: " << endl;
cout << a11 << " " << b1 << endl;
cout << a21 << " " << b2 << endl;
result_y = (a11 * b2) - (b1 * a21);

cout << "\nОпределитель y = " << result_y << endl;
x = result_x / determinant;
cout << "\nx = " << x << endl;
y = result_y / determinant;
cout << "y = " << y << endl;                                                                                Вывод:Стоит провести массовое тестирование данный программы. Написать тесты(научиться их делать), а еще прогнать по Big O. Мне кажется, что алгоритм программы слишком медленный и не оптимальный
break;                                                          */
        //---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
    default:
        cout << "Неправильные значения";
    }
    return 0;
}
int fractional()
{
    cout << "Введите своё биквадратное уравнение:" << endl;
    return 0;
}
int trigonometry()
{
    cout << "Введите своё тригонометрическое уравнение:" << endl;
    return 0;
}
int demonstration()
{
    cout << "Введите своё показательное уравнение:" << endl;
    return 0;
}
int logarithmic()
{
    cout << "Введите своё логарифмическое уравнение:" << endl;
    return 0;
}

int matrix()
{
    long int a11, a12, a13, a21, a22, a23, a31, a32, a33;
    unsigned short int ChooseMatrix;
    cout << "Какой вид матрицы?"
         << "\n2x2 или 3x3?";
    switch (ChooseMatrix)
    {
    case 2:
        cin >> a11 >> a12;
        cin >> a21 >> a22;
        cout << a11 << " " << a12 << endl;
        cout << a21 << " " << a22 << endl; 
        break;

    case 3:
        cin >> a11 >> a12 >> a13;
        cin >> a21 >> a22 >> a23;
        cin >> a31 >> a32 >> a33;

        cout << a11 << " " << a12 << endl;
        cout << a21 << " " << a22 << endl;

        break;
    default:
        cout << "выйди" << endl;
    }
    cin >> ChooseMatrix;
    return 0;
}

/*
Задачи:

*/
