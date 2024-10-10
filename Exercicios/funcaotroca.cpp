#include <iostream>
using namespace std;

void troca(int *a, int *b)
{
    *a = *b;
    cout << "\nNovo valor: " << *a;
}

int main()
{

    int a = 50;
    int b;
    cout << "Digite um valor: ";
    cin >> b;
    cout << "\nOs valor recebido foi: ";
    cout << b;
    cout << "\nOs valor anterior eh: ";
    cout << a;

    troca(&a, &b);
}