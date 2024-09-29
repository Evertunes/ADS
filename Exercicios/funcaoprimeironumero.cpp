#include <iostream>
using namespace std;

int posicao(const int* vetor, int tamanho, int numero) {
    for (int i = 0; i < tamanho; ++i) {
        if (vetor[i] == numero) {
            return i; // Retorna a posição da primeira ocorrência
        }
    }
    return -1; // Retorna -1 se o número não for encontrado
}

int main() {

    const int tamanho = 5;
    int vetor[tamanho] = {10, 20, 30, 40, 20}; // Altere os valores para testar

    int numero;
    cout << "Digite um numero para encontrar a posicao: "<<endl;
    cin >> numero;

    int posica = posicao(vetor, tamanho, numero);
    if (posica != -1) {
        cout << "A primeira ocorrencia do numero " << numero << " esta na posicao: " << posica << endl;
    } else {
        cout << "Numero nao encontrado no vetor." << endl;
    }

    return 0;
}
