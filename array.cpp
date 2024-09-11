#include <iostream>
using namespace std;

int main ()

{
    int indice, nota[10];
    float total;
    for (indice = 0; indice < 10; indice += 1)
    {
        cout << "Entre com a nota do estudante " << indice << ": ";
        cin >>  nota[indice];
    }
    cout << "======================================="<<endl;
    cout << "Notas : ";

    total = 0;

    for (indice = 0; indice < 10; indice += 1)
    {
        cout << nota[indice] << " ";
        total = total + nota[indice];
    }
    cout << endl << "======================================="<<endl;
    cout << "Media: " << total / 10 << endl;
    cout << "======================================="<<endl;
}