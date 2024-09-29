#include <iostream>
using namespace std;

bool crescente(const int* vetor, int tamanho) {
    
    for (int i = 0; i < tamanho - 1; ++i) {
        if (vetor[i] > vetor[i + 1 ]) {
            return false; // Retorna falso se encontrar um elemento fora de ordem
        }
    }
    return true; // Retorna verdadeiro se todos os elementos estiverem em ordem
}

int main() {
    const int tamanho = 5;
    int vetor[tamanho] = {1, 2, 3, 4, 5}; // Altere os valores para testar diferentes casos

    if (crescente(vetor, tamanho)) {
        cout << "O vetor esta em ordem crescente." << endl;
    } else {
        cout << "O vetor nao esta em ordem crescente." << endl;
    }

    return 0;
}