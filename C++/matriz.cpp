#include <iostream>
using namespace std;
#define ALTURA 3
#define LARGURA 3

int main()

{
    int x;
    int y;
    char matriz[ALTURA][LARGURA];

    // preenche a matriz com zeros
    for (y = 0; y < ALTURA; y += 1)
    {
        for (x = 0; x < LARGURA; x += 1)
        {
            matriz[y][x] = 0;
        }
    }
    // imprime a matriz com zeros e a coordernada escolhida com 1
    cout << endl
         << "Entre coordernadas na forma \"y x\"." << endl;
    cout << "Use valores negativos para sair do programa." << endl;

    cout << "Coordenadas: ";
    cin >> y >> x;

    while (x >= 0 && y >= 0)
    {
        matriz[y][x] = 1;
        for (y = 0; y < ALTURA; y += 1)
        {
            for (x = 0; x < LARGURA; x += 1)
            {
                cout << matriz[y][x] << " ";
            }
            cout << endl
                 << endl;
        }
        cout << endl;
        cout << "Coordenadas: ";
        cin >> y >> x;
    }
}