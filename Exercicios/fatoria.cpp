#include <iostream>
using namespace std;

unsigned long long fatorial(int numero)
{
    //verifica se o número digitado é negativo
    if (numero < 0)
    {
        cerr << "Erro: Fatorial de número negativo não está definido." << endl;
        return 0;
    }

    //define a varivael resultado como 1
    unsigned long long resultado = 1;
    
    //calcula o fatorial do número digitado
    for (int i = 1; i <= numero; ++i)
    {
        resultado *= i;
    }

    return resultado;
}

int main()
{
    int numero;
    cout << "==============================================="<<endl;
    cout << "Digite um numero para calcular o fatorial: "<<endl;
    cin >> numero;

    unsigned long long resultado = fatorial(numero);
    
    if (resultado != 0)
    {
        cout << "==============================================="<<endl;
        cout << "O fatorial de " << numero << " e " << resultado << endl;
    }

    return 0;
}