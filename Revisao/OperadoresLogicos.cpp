#include <iostream>
using namespace std;

int main ()
{
    bool maiorDeIdade = true;
    bool possuiCarteira = false;

    if (maiorDeIdade && possuiCarteira)
    {
        cout << "Pode alugar o carro!" <<endl;
    }
    else 
    {
        cout << "Nao pode alugar o carro!" <<endl;
    }
    return 0;
}