#include <iostream>
using namespace std;

int main ()
{
    int seq, dig, mult;
    
    cout << "===================================="<<endl;
    cout << "Digite um numero a ser multiplicado:"<<endl;
    cout << "===================================="<<endl;
    cin >> dig;
    cout << "===================================="<<endl;
    cout<<endl;
    cout << "Tabuada do "<<dig <<"!"<<endl;
    cout<<endl;
    cout << "    =="<<endl;
    cout << "    =="<<endl;
    cout << "    =="<<endl;
    cout << " ========"<<endl;
    cout << "  ======"<<endl;
    cout << "   ===="<<endl;
    cout << "    =="<<endl;
    
    for(seq = 0; seq <= 10; seq += 1)
    {
       seq += 0.5;
       mult = dig * seq;
       cout<<endl;
       cout << "**** "<< mult <<" ****"<<endl;
    }
    cout<<endl;
}