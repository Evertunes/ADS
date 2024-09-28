include <iostream>
using namespace std;

void armazenarNumeros(int numeros[ ], int quantidade) {
    for (int i = 0; i < quantidade; ++i) {
        cout << "Digite o número " << (i + 1) << ": "<<endl;
        cin >> numeros[i];
        
        for (int i = 0; i < n; i++) {
        cin >> vetor[i];
    }

    // Encontrar o maior valor
    int maior = vetor[0];
    for (int i = 1; i < n; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }

    // Exibir o maior valor
    cout << "O maior valor do vetor é: " << maior << endl;

    return 0;
    }
}

int main() {

    int quantidade;
    

    cout << "Quantos números você deseja armazenar? ";
    cin >> quantidade;
    
    int vetor[quantidade];
    // Declarando o vetor com tamanho fixo
    // Criamos um limite de números a serem armazenados
    int numeros[100]; // Supondo um máximo de 100 números

    // Verifica se a quantidade não ultrapassa o limite do vetor
    if (quantidade > 100) {
        cout << "Quantidade excede o limite do vetor." << endl;
        return 1;
    }
    else
    {
    armazenarNumeros(numeros, quantidade);

        cout << "Números armazenados: ";
        for (int i = 0; i < quantidade; ++i) {
            cout << numeros[i] << " ";
        }
        cout << endl;
    int n;

    // Ler o tamanho do vetor
    cout << "Digite o tamanho do vetor: ";
    cin >> n;

    

    // Ler os elementos do vetor
    cout << "Digite os elementos do vetor: ";
    
}
        return 0;
        
    }
}