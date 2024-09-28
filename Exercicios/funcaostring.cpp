#include <iostream>
#include <string>

using namespace std;

// string & str é uma forma de passar uma string para uma função por referência
// O símbolo de ampersand (&) indica que a variável está sendo passada por referência.
// Isso significa que a função receberá uma referência à string original em vez de uma cópia dela.
int contarVogais(const string &str)
{
    int contador = 0;

    // Declara uma variável c do tipo char, que armazenará cada caractere da string durante a iteração.
    //: O operador de dois pontos indica que estamos iterando sobre uma coleção, no caso str que faz referencia à string.
    for (char c : str)
    {
        c = tolower(c); // Converte para minúscula para facilitar a contagem
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            contador++;
        }
    }
    return contador;
}

int main()
{
    string texto;
    
    cout << "Digite uma string: ";
    getline(cin, texto);

    int numeroVogais = contarVogais(texto);
    cout << "Número de vogais: " << numeroVogais << endl;

    return 0;
} 