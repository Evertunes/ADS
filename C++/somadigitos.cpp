#include <iostream>
using namespace std;

int main() {
    int num, soma = 0;

    cout << "Digite um numero inteiro: ";
    cin >> num;

    num = abs(num); // Trabalhar com o valor absoluto do número para lidar com números negativos

    while (num > 0) {
        int digit = num % 10; // Obtém o último dígito do número
        soma += digit;           // Adiciona o dígito à soma
        num /= 10;           // Remove o último dígito do número
    }

    cout << "A soma dos digitos e: " << soma << endl;

    return 0;
}
