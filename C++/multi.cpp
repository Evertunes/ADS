#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int mult;
    int i;


    for (i = 0; i <= 10; i++)
    {
        cout << endl;
        for (mult = 0; mult <= 10; mult++)
        {
            int total;
            total = mult * i;
            cout << total << endl;
        }
    }
}