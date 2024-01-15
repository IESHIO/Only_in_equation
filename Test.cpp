#include <iostream>
using namespace std;
int main()
{
  // Временно создаём статический массив. После изучения динамических двумерных массивов необхожимо заменить из-за того, чтоб формировать многомерные матрицы
  // Так же чтоб решать элементарные операции над двумя и более матрицами я создам два двумерных статических массива, хотя склоняюсь к одно трехмерному
  const unsigned int ROWS_A = 3;
  const unsigned int COLS_A = 3;
  int matrix_A[ROWS_A][COLS_A];
  float determinant, value;
  short int choose;
  cout << "Привет! \nДобро пожаловать в большущий раздел для решения матриц для студентов!" << endl;
  cout << "Введите свою матрицу(ввод происходит сначала со строк):" << endl;
  // инициализируем массив через ввод данных в массив (всего получается 9 элементов)
  for (int i = 0; i < ROWS_A; i++)
  {
    for (int j = 0; j < COLS_A; j++)
    {
      cin >> matrix_A[i][j];
    }
  }
  cout << endl;
  // выводим массив
  for (int i = 0; i < ROWS_A; i++)
  {
    for (int j = 0; j < COLS_A; j++)
    {
      cout.width(3);
      cout << matrix_A[i][j] << "\t";
    }
    cout << endl;
    cout << endl;
  }
  // Возможно, зададим вопрос пользователю, что ему необходимо найти, но пока что он просто прорешивает одиночные матрицы (скорее всего квадратные)
  cout << "1 - Необходимо совершить операцию над матрицей" << endl;
  cout << "2 - Необходимо исследовать систему линейный уравнений" << endl;
  cin >> choose;
  switch (choose)
  {
  case 1:
    cout << "Введите число которое хотите умножить:";
    cin >> value;

    break;
  case 2:
    cout << "Выберите метод для нахождения определителя матрицы: \n 1 - Разложения определителя по первой строке \n 2 - Правило треугольника" << endl;
    cin >> choose;
    if(choose == 1) 
    {
      determinant = matrix_A[0][0] * ((matrix_A[1][1] * matrix_A[2][2])- (matrix_A[1][2] * matrix_A[2][1])) -  matrix_A[0][1] * ((matrix_A[1][0] * matrix_A[2][2])- (matrix_A[1][2] * matrix_A[2][0])) +  matrix_A[0][2] * ((matrix_A[1][0] * matrix_A[2][1])- (matrix_A[1][1] * matrix_A[2][0]));
      cout << "По Разложения определителя по первой строке определитель = " << determinant << endl;
    }
/*
    else
    {
      determinant = (matrix_A[0][0] * matrix_A[1][1] * matrix_A[2][2]) + (matrix_A[0][1] * matrix_A[1][2] * matrix_A[2][0]) + (matrix_A[0][2] * matrix_A[1][0] * matrix_A[2][1]) - (matrix_A[0][0] * matrix_A[1][2] * matrix_A[2][1]) - (matrix_A[0][1] * matrix_A[1][0] * matrix_A[2][2]) - (matrix_A[0][2] * matrix_A[1][1] * matrix_A[2][0]);
      cout << "По правилу треугольника определитель = " << determinant << endl;
    }
    /*determinant = (a11*a22*a33)+(a12*a23*a31)+(a13*a21*a32)-(a11*a23*a32)-(a12*a21*a33)-(a13*a22*a31);
    cout<<"По правилу треугольника определитель =" <<determinant<<endl;
    determinant = (a11*a22*a33)+(a12*a23*a31)+(a13*a21*a32)-(a13*a22*a31)-(a11*a23*a32)-(a12*a21*a33);
    cout<<"По правилу Саррюса определитель =" <<determinant<<endl */
    break;
  default:
    cout << "Тебе здесь не рады." << endl;
    break;
  }

  return 0;
}#include <iostream>
using namespace std;
int main()
{
  // Временно создаём статический массив. После изучения динамических двумерных массивов необхожимо заменить из-за того, чтоб формировать многомерные матрицы
  // Так же чтоб решать элементарные операции над двумя и более матрицами я создам два двумерных статических массива, хотя склоняюсь к одно трехмерному
  const unsigned int ROWS_A = 3;
  const unsigned int COLS_A = 3;
  int matrix_A[ROWS_A][COLS_A];
  float determinant, value;
  short int choose;
  cout << "Привет! \nДобро пожаловать в большущий раздел для решения матриц для студентов!" << endl;
  cout << "Введите свою матрицу(ввод происходит сначала со строк):" << endl;
  // инициализируем массив через ввод данных в массив (всего получается 9 элементов)
  for (int i = 0; i < ROWS_A; i++)
  {
    for (int j = 0; j < COLS_A; j++)
    {
      cin >> matrix_A[i][j];
    }
  }
  cout << endl;
  // выводим массив
  for (int i = 0; i < ROWS_A; i++)
  {
    for (int j = 0; j < COLS_A; j++)
    {
      cout.width(3);
      cout << matrix_A[i][j] << "\t";
    }
    cout << endl;
    cout << endl;
  }
  // Возможно, зададим вопрос пользователю, что ему необходимо найти, но пока что он просто прорешивает одиночные матрицы (скорее всего квадратные)
  cout << "1 - Необходимо совершить операцию над матрицей" << endl;
  cout << "2 - Необходимо исследовать систему линейный уравнений" << endl;
  cin >> choose;
  switch (choose)
  {
  case 1:
    cout << "Введите число которое хотите умножить:";
    cin >> value;

    break;
  case 2:
    cout << "Выберите метод для нахождения определителя матрицы: \n 1 - Разложения определителя по первой строке \n 2 - Правило треугольника" << endl;
    cin >> choose;
    if(choose == 1) 
    {
      determinant = matrix_A[0][0] * ((matrix_A[1][1] * matrix_A[2][2])- (matrix_A[1][2] * matrix_A[2][1])) -  matrix_A[0][1] * ((matrix_A[1][0] * matrix_A[2][2])- (matrix_A[1][2] * matrix_A[2][0])) +  matrix_A[0][2] * ((matrix_A[1][0] * matrix_A[2][1])- (matrix_A[1][1] * matrix_A[2][0]));
      cout << "По Разложения определителя по первой строке определитель = " << determinant << endl;
    }

    else
    {
      determinant = (matrix_A[0][0] * matrix_A[1][1] * matrix_A[2][2]) + (matrix_A[0][1] * matrix_A[1][2] * matrix_A[2][0]) + (matrix_A[0][2] * matrix_A[1][0] * matrix_A[2][1]) - (matrix_A[0][0] * matrix_A[1][2] * matrix_A[2][1]) - (matrix_A[0][1] * matrix_A[1][0] * matrix_A[2][2]) - (matrix_A[0][2] * matrix_A[1][1] * matrix_A[2][0]);
      cout << "По правилу треугольника определитель = " << determinant << endl;
    }
    /*determinant = (a11*a22*a33)+(a12*a23*a31)+(a13*a21*a32)-(a11*a23*a32)-(a12*a21*a33)-(a13*a22*a31);
    cout<<"По правилу треугольника определитель =" <<determinant<<endl;
    determinant = (a11*a22*a33)+(a12*a23*a31)+(a13*a21*a32)-(a13*a22*a31)-(a11*a23*a32)-(a12*a21*a33);
    cout<<"По правилу Саррюса определитель =" <<determinant<<endl */ 
  break;
  default:
    cout << "Тебе здесь не рады." << endl;
    break;
  }

  return 0;
}