#include<iostream>
using namespace std;

int main ()
{
    int nota;
    cout << "Digite a nota: "<<endl;
    cin >> nota;

    if (nota >= 90)
    {
        cout << "Nota: A" << endl;
    }
    else if (nota >= 80)
    {
        cout << "Nota: B" <<endl;
    }
    else if (nota >= 70)
    {
        cout << "Nota: C" << endl;
    }
    else 
    {
        cout << "Nota: D" << endl;
    }
    return 0;
}