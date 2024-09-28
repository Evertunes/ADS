#include <iostream>
using namespace std;

bool primo(int num)
{
    // Verificar se o número é menor ou igual a 1
    if (num <= 1)
        return false;

    // Inicializar o divisor para o loop
    int divisor = 2;

    // Usar o loop while para verificar divisores
    while (divisor * divisor <= num)
    {
        if (num % divisor == 0)
        {
            return false; // O número não é primo
        }
        divisor++;
    }

    return true; // O número é primo
}

int main()
{
    int number;

    cout << "Digite um número: ";
    cin >> number;

    if (primo(number))
    {
        cout << number << " é um número primo." << endl;
    }
    else
    {
        cout << number << " não é um número primo." << endl;
    }
    return 0;
}