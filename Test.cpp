#include <iostream>
using namespace std;
int main()
{
    const unsigned int ROWS=3;
    const unsigned int COLS=3;
    int array [ROWS][COLS];
    
    for(int i=0;i<ROWS;i++)
    {
        for(int j=0;j<COLS;j++)
        {
          cin>>array[i][j]; 
        }
    }
    
    cout << "Введённая матрица:" << endl;
    
    for(int i=0;i<ROWS;i++)
    {
        for(int j=0;j<COLS;j++)
        {
          cout<<array[i][j]<< "\t"; 
        }
        cout<<endl;
    }
    

return 0;
}    