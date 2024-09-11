#include <iostream>
using namespace std;

int main()
{
    int notas[5] = {10, 20, 5, 55, 100};

    cout << "Notas dos alunos: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Nota " << (i + 1) << ": " << notas[i] << endl;
    }
    return 0;
}