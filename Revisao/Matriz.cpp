#include <iostream>
using namespace std;

int main()
{
    int matriz[3][4] =
    {
        {1, 2, 3, 4},
        {3, 2, 1, 0},
        {5, 4, 3, 2}
    };

    cout << "Matriz: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for ( int j = 0; j < 4; j++)
        {
            cout << matriz [i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}