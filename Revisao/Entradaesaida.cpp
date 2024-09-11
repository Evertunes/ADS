#include <iostream>
#include <string>

using namespace std;


int main ()
{
    int idade;
    string nome;

    cout << "Digite seu nome: ";
    getline(cin, nome); // Leitura de string com espacos

    cout << "Digite sua idade: ";
    cin >> idade;

    cout << "Nome: " << nome << ", Idade: " << idade << endl;
    return 0;
}