#include <iostream>
#include <iomanip>
using namespace std;
#define LIN 10
#define COL 10

int main ()

{
    int x;
    int y;
    int tabela[LIN][COL];

    for (y = 0; y < LIN; y += 1)
        for (x = 0; x < COL; x += 1)
            tabela[y][x] = y * x;
    cout << "\n   Tabela de multiplicacao\n";
    cout << setw(6) << 0;

    for (x = 1; x < COL; x += 1)
        cout << setw(3) << x;
    cout << endl;

    cout << "   ";

    for (x = 0; x < 3 * COL; x += 1)
        cout << "-";
    cout << endl;

    for (y = 0; y < LIN; y += 1)
    {
        cout << setw(2) << y << "|";
        for (x = 0; x < COL; x += 1)
            cout << setw(3) << tabela[y][x];
        cout << endl;
    }
}