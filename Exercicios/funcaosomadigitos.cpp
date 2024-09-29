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

int somaDigitos(int numero) {
    
    int soma = 0;
    
    //Soma os digitos
    while (numero > 0) {
        soma += numero % 10; // Adiciona o último dígito à soma
        numero /= 10;        // Remove o último dígito
    }
    return soma;
}


int main()
{

    int numero;
    cout << "------------------"<<endl;
    cout << "Digite um numero: "<<endl;
    cin >> numero;
    cout << "======================="<<endl;
    cout << "Quantidade de digitos: " << contarDigitos(numero) << endl;
    
    int resultado = somaDigitos(numero);
    cout << "------------------"<<endl;
    cout << "A soma dos digitos e: " << resultado << endl;

    cout << endl;
    return 0;

}