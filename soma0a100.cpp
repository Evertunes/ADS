#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i, soma;

    soma = 0;
    i = 0;
    while (i <= 100)
    {
        i = i + 1;
        soma += i;
    }
    cout << "\t soma = " << soma << endl;
}