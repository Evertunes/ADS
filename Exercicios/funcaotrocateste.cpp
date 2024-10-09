#include <iostream>

// Função que troca os valores de dois inteiros
void troca(int *a, int *b) {
    int temp = *a; // Armazena o valor de 'a' em uma variável temporária
    *a = *b;       // Atribui o valor de 'b' a 'a'
    *b = temp;    // Atribui o valor temporário a 'b'
}

int main() {
    int x = 5;
    int y = 10;

    std::cout << "Antes da troca: x = " << x << ", y = " << y << std::endl;

    // Chama a função troca passando os endereços de x e y
    troca(&x, &y);

    std::cout << "Depois da troca: x = " << x << ", y = " << y << std::endl;

    return 0;
}