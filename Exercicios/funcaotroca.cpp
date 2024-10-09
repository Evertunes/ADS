#include <iostream>
using namespace std;

int trocaa;
int trocab;

void troca(int *a, int *b)
{
    *a = 50;
    *b = 120;
    cout << "Novo valor: " << *a << " e " << *b;
}

int main()
{

    int a;
    int b;

    a = 10;
    b = 20;

    cout << "Digite dois valores: ";
    cout << trocaa, trocab;
    cout << "Os valores recebidos foram: " << endl;
    cout << trocaa, trocab;
    cout << "Os valores anteriores eram: " << endl;
    cout << a << " e " << b;
    
    troca(*trocaa,*trocab);
}