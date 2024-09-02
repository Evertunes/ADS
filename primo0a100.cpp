#include <iostream>
#include <cmath>

using namespace std;

bool primo(int num) {
    if (num <= 1) return false;
    if (num == 2) return true; // 2 é o unico numero primo par
    if (num % 2 == 0) return false; // numeros pares maiores que 2 não sao primos

    int divisor = 3;
    while (divisor <= sqrt(num)) {
        if (num % divisor == 0) return false;
        divisor += 2; // verificar numeros impares
    }
    return true;
}

int main() {
    int num = 1;

    cout << "Números primos entre 1 y 100:" << endl;

    while (num <= 100) {
        if (primo(num)) {
            cout << num << " ";
        }
        ++num;
    }

    cout << endl;
}
