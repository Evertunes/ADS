#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main() {
    
    string input;
    
    cout << "Digite uma sequência de números separados por vírgula: ";
    
    getline(cin, input);
    
    vector<double> numbers;
    
    stringstream ss(input);
    
    string item;

    // Dividindo a string de entrada por vírgulas e armazenando os números no vetor
    while (getline(ss, item, ',')) {

        
        stringstream numStream(item);
        double number;
        numStream >> number;
        numbers.push_back(number);
    }

    // Calculando a soma dos números
    double sum = 0;
    int count = numbers.size();
    int index = 0;

    while (index < count) {
        sum += numbers[index];
        index++;
    }

    // Calculando a média
    double average = count > 0 ? sum / count : 0;

    // Exibindo a média
    
    cout << "A media dos numeros e: " << average << endl;

    return 0;
}