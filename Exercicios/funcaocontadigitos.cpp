#include <iostream>
using namespace std;

int contarDigitos(int numero)
{

    // Lidar com o caso de zero
    if (numero == 0)
        return 1;

    // Lidar com números negativos
    if (numero < 0)
        numero = -numero;

    int contador = 0;

    //conta o numero de digitos do numero
    //remove o ultimo digito e incrementa desde o começo, contando assim os digitos
    while (numero > 0)
    {
        numero /= 10; // Remove o último dígito
        contador++;   // Incrementa o contador
    }
    return contador;
}

int main()
{

    int numero;
    cout << "------------------"<<endl;
    cout << "Digite um numero: "<<endl;
    cin >> numero;
    cout << "======================="<<endl;
    cout << "Quantidade de digitos: " << contarDigitos(numero) << endl;
    cout << endl;
    return 0;

}