#include <iostream>
using namespace std;

int binario(int numero)
{
    int soma[100];
    int i = 0;
    // O loop a seguir realiza a conversão do número decimal em binário
    while (numero > 0)
    {
        soma[i] = numero % 2; // Calcula o resto da divisão por 2 (que é 0 ou 1)
        i = i + 1;            // Incrementa o índice para armazenar o próximo dígito binário
        numero = numero / 2;  // Divide o número decimal por 2 para continuar a conversão
    }

    // Exibe o número binário convertido
    cout << "------------------------------" << endl;
    cout << "Numero convertido em binario: ";

    for (int j = i - 1; j >= 0; j--)
    {
        cout << soma[j]; // Mostra os dígitos binários na ordem correta
    }
    return 0;
}

int main()
{
    int numero;

    // Solicita ao usuário que o número decimal a ser convertido
    cout << "CONVERSAO DE UM NUMERO DECIMAL EM BINARIO " << endl;
    cout << "==========================================" << endl;
    cout << "Digite o numero a converter e pressione ENTER:" << endl;
    cin >> numero;

    cout << binario(numero) << endl;

    // Exibe o número decimal que será convertido
    cout << "------------------------------------------" << endl;
    cout << "Numero a converter: ";
    cout << numero;
}