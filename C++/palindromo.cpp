#include <iostream>
using namespace std;

bool palindromo;

void palindr(string Text)
{
    int posicaoReversa = 0;
    int i;
    do
    {
        i = Text.length() - 1;
        posicaoReversa = Text.length() - i - 1;
        if (Text.substr(i, 1) != Text.substr(posicaoReversa, 1))
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

int main(void)
{
    string Texto;
    cout << "Digite a palavra : ";
    cin >> Texto;
    palindr(Texto);
}
