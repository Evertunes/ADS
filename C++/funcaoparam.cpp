#include <iostream>
using namespace std;
// função que calcula o quadrado de um numero
int soma(int n1, int n2) { return n1 + n2; }
int sub(int n1, int n2) { return n1 - n2; }
int divide(int n1, int n2) { return n1 / n2; }
int mult(int n1, int n2) { return n1 * n2; }

int main()
{

    int primeiro, segundo;
    char op;
    cout << "Entre com um numero: " << endl;
    cin >> primeiro;
    cout << "Escolha qual operacao deseja: " << endl;
    cout << "==============================" << endl;
    cout << "* [A]dicao\n* [S]ubtracao\n* [D]ivisao\n* [M]ultiplicacao\n* [E]xit..." << endl;
    cout << "==============================" << endl;
    cin >> op;
    cout << "Entre com outro numero: " << endl;
    cin >> segundo;


    do
    {
        switch (op)
        {
        case 'a':
            cout<<endl;
            cout << soma(primeiro, segundo);
            cout<<endl;
            break;
        case 's':
            cout<<endl;
            cout << sub(primeiro, segundo);
            cout<<endl;
            break;
        case 'd':
            cout<<endl;
            cout << divide(primeiro, segundo);
            cout<<endl;
            break;
        case 'm':
            cout<<endl;
            cout << mult(primeiro, segundo);
            cout<<endl;
            break;
        case 'e':
            cout<<endl;
            cout << "Saindo...";
            cout<<endl;
            return 0;
            break;
        default:
            break;
        }


        cout << "Entre com um numero: " << endl;
        cin >> primeiro;
        cout << "Escolha qual operacao deseja: " << endl;
        cout << "==============================" << endl;
        cout << "* [A]dicao\n* [S]ubtracao\n* [D]ivisao\n* [M]ultiplicacao\n* [E]xit..." << endl;
        cout << "==============================" << endl;
        cin >> op;
        cout << "Entre com outro numero: " << endl;
        cin >> segundo;

    } while (op != 'e');
}
