#include <iostream>
using namespace std;

// int* vetor é uma forma de declarar um vetor(array), ao inves de usar vetor[] usamos int* vetor
void inverterVetor(int *vetor, int tamanho)
{

    for (int i = 0; i < tamanho / 2; ++i)
    {
        int temp = vetor[i];
        vetor[i] = vetor[tamanho - 1 - i];
        vetor[tamanho - 1 - i] = temp;
    }
}

int main()
{
    const int tamanho = 5;
    int vetor[tamanho] = {1, 2, 3, 4, 5};

    cout << "Vetor original: ";
    for (int i = 0; i < tamanho; ++i)
    {
        cout << vetor[i] << " ";
    }
    cout << endl;

    inverterVetor(vetor, tamanho);

    cout << "Vetor invertido: ";
    for (int i = 0; i < tamanho; ++i)
    {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}

// Função inverterVetor: Recebe um ponteiro para um vetor de inteiros e seu tamanho. A função inverte os elementos do vetor usando um loop.
// Loop: Vai até a metade do vetor, trocando os elementos simétricos.
// Uso de array: O vetor é definido como um array estático dentro da função main.