#include<iostream>
using namespace std;

int main ()
{
    cout << "Contagem usando for: " << endl;
    for ( int i = 1; i <= 10; i++)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Contagem usando while: " << endl;
    int i = 1;
    while (i <= 15)
    {
        cout << i << " ";
        i++;
    }
    cout << endl;

    return 0;
}

