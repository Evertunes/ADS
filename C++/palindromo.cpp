#include <iostream>
using namespace std;

bool palindromo;

int main(void)
{
    string Texto;
    int posicaoReversa = 0;
    cout << "Digite a palavra : ";
    cin >> Texto;
    int i;
    do
    {
        i = Texto.length() - 1;
        posicaoReversa = Texto.length() - i - 1;
        if (Texto.substr(i, 1) != Texto.substr(posicaoReversa, 1))
        {
            palindromo = false;
            cout << "Nao e palindromo!";
            break;
        }
        else
            cout << "E palindromo!";
        break;
    } while (i > 0);
}
