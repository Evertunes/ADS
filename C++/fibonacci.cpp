#include <iostream>
using namespace std;

int main() {
    const int num_terms = 10; // Número de termos da sequência de Fibonacci
    int fib1 = 0, fib2 = 1;   // Primeiros dois termos da sequência
    int next_term;

    cout << "Os primeiros " << num_terms << " termos da sequência de Fibonacci são:\n";

    // Imprimir os primeiros termos da sequência
    for (int i = 0; i < num_terms; ++i) {
        if (i == 0) {
            cout << fib1 << " ";
        } else if (i == 1) {
            cout << fib2 << " ";
        } else {
            next_term = fib1 + fib2;
            cout << next_term << " ";
            fib1 = fib2;
            fib2 = next_term;
        }
    }

    cout << endl; // Para nova linha ao final

    return 0;
}
