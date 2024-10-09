#include <iostream>
using namespace std;

int main()
{
    int *ptr;

    ptr = new int; // armazeno meu *ptr em uma variavel ptr (ptr é ponteiro)

    if (ptr == NULL)
    {
        // Significa que não tem um endereço de memória para ser alocado
        cout << "Memoria insulficiente!" << endl;
        exit(1);
    }

    cout << endl;
    cout << "Endereco de ptr: " << ptr << endl;

    *ptr = 90; // define o valor 90 para a varivael
    cout << "--------------------------" << endl;
    cout << "Conteudo de ptr: " << *ptr << endl;
    cout << endl;

    delete ptr;
}