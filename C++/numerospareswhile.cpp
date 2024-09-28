#include <iostream>
using namespace std;

int main()
{
    int numeros;

    for (numeros = 2; numeros <= 700; numeros += 1)
    {
        if (numeros % 2 == 0)
        {
            cout << numeros;
            cout << endl;
        }
    }
}