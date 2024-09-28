#include <iostream>
using namespace std;

double armazenarNumeros(int numeros[], int quantidade, double soma)
{

    for (int i = 0; i < quantidade; ++i)
    {
        // Recebe os números
        cout << "Digite o numero: " << (i + 1) << ": " << endl;
        cin >> numeros[i];
        soma += numeros[i];
    }

    double media = soma / quantidade;
    // Exibe os números armazenados
    cout << "=====================" << endl;
    cout << "Numeros armazenados: ";
    for (int i = 0; i < quantidade; ++i)
    {
        cout << numeros[i] << " ";
    }

    cout << endl;

    // Exibir o maior valor
    cout << "===================================" << endl;
    cout << "A media aritmetica e: " << media << endl;

    return 1;
}

int main()
{

    // Recebe o tamnho do vetor
    int quantidade;
    double soma = 0;
    cout << "=======================================" << endl;
    cout << "Quantos numeros voce deseja armazenar? " << endl;
    cin >> quantidade;

    // Declarando o vetor com tamanho fixo
    // Criamos um limite de números a serem armazenados
    int numeros[100]; // Supondo um máximo de 100 números

    // Verifica se a quantidade não ultrapassa o limite do vetor
    if (quantidade > 100)
    {
        cout << "====================================" << endl;
        cout << "Quantidade excede o limite do vetor." << endl;
        return 1;
    }
    else
    {
        // Chama a função principal
        armazenarNumeros(numeros, quantidade, soma);
    }
    return 0;
}