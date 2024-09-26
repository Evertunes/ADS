#include <iostream>
using namespace std;

bool recebe (int numero)
{
    if (numero % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main ()
{
    int num;

    cout << "=================="<<endl;
    cout << "Digite um numero: ";
    cin >> num;

    if(recebe(num) == true)
    {
        cout << "=================="<<endl;
        cout << "O numero e par";
    }
    else
    {
        cout << "=================="<<endl;
        cout << "O numero e impar";
    }
    
}