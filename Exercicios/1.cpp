
#include <iostream>

using namespace std;
// função que calcula o quadrado de um numero

int valor(void)
{
    int numero;
    cout << "Entre um numero: ";
    cin >> numero;
    return numero;
}

int main()
{

    int a, b;
    a = valor();
    b = valor();
    cout << "Soma = " << a + b << endl;
}
