#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int quantidade = 10;
    double soma = 0;
    double numero;
    int i;

    for (i = 0; i < quantidade; i++)
    {
        cout << "Digite o " << (i + 1) << " numero: ";
        cin >> numero;
        soma += numero;
    }
    double media = soma / quantidade;
    cout << "A media dos numeros e: " << media << endl;
}