#include<iostream>
using namespace std;

int main ()
{
    int a;
    int b;
    int *ptr;
    int *ptr2;
    
    a = 90;
    b = 2;
    ptr = &a;
    ptr2 = &b;

    cout << "a =" << a << endl;
    cout << "b =" << b << endl;

    cout << "Endereco de 'a' = " << &a << endl;
    cout << "Endereco de 'b' = " << &b << endl;
    cout << "ptr = " << ptr << endl;
    cout << "ptr2 = " << ptr2 << endl;
}