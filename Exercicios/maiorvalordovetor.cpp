#include <iostream>
using namespace std;

int armazenarNumeros(int numeros[], int quantidade)
{

    for (int i = 0; i < quantidade; ++i)
    {   
        // Recebe os números
        cout << "Digite o numero: " << (i + 1) << ": " << endl;
        cin >> numeros[i];
    }
        // Exibe os números armazenados
        cout << "=====================" << endl;
        cout << "Numeros armazenados: ";
        for (int i = 0; i < quantidade; ++i)
        {
            cout << numeros[i] << " ";
        }
        
        cout << endl;

        // Encontrar o maior valor
        int maior = numeros[0];
        
        for (int i = 0; i < quantidade; i++)
        {
            if (numeros[i] > maior)
            {
                maior = numeros[i];
            }
        }
        // Exibir o maior valor
        cout << "===================================" << endl;
        cout << "O maior valor do vetor e: " << maior << endl;
    
    return 1;
}

int main()
{

    // Recebe o tamnho do vetor
    int quantidade;
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
        armazenarNumeros(numeros, quantidade);
    }
    return 0;
}
