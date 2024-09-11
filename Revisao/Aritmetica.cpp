#include <iostream>

using namespace std;


int main()
{
    int a = 10, b = 20;
    int soma = a + b;
    int subtracao = a - b;
    int multiplicacao = a * b;
    double divisao = static_cast<double>(a)/ b;
    int modulo = a % b;

    cout << "Soma: " << soma << endl;
    cout << "Subtracao: " << subtracao << endl;
    cout << "Multiplicacao: " << multiplicacao << endl;
    cout << "Divisao: " << divisao << endl;
    cout << "Modulo: " << modulo << endl;

    return 0;
    
}