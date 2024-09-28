#include <iostream>
using namespace std;

int main() {
    int numero;
    unsigned long long fatorial = 1; // Usar unsigned long long para números grandes

    cout << "Digite um numero inteiro nao negativo: "<<endl;
    cin >> numero;

    // Verifica se o número é negativo
    if (numero < 0) {
        cout << "Fatorial nao e definido para numeros negativos" << endl;
    } else {
        int temp = numero; // Variável temporária para manter o valor original

        // Calcular o fatorial usando um loop while
        while (temp > 1) {
            fatorial *= temp;
            temp--; // Decrementar temp
        }

        // Caso especial para 0! (por definição, 0! = 1)
       if (numero == 0) {
            fatorial = 1;
        }

        cout << "O fatorial de " << numero << " e: " << fatorial << endl;
    }

   return 0;
}