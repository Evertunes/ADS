#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

struct Produto {
    string nome;
    float preco;
    
    // Método para salvar o produto no formato "nome, preco"
    string toString() const {
        return nome + " " + to_string(preco);
    }
};

// Função para criar um novo registro
void criar(const string& nome, float preco) {
    ofstream arquivo("produtos.txt", ios::app);
    if (arquivo.is_open()) {
        Produto p = {nome, preco};
        arquivo << p.toString() << endl;
        arquivo.close();
    } else {
        cerr << "Não foi possível abrir o arquivo." << endl;
    }
}

// Função para ler todos os registros
void ler() {
    ifstream arquivo("produtos.txt");
    string linha;
    
    if (arquivo.is_open()) {
        while (getline(arquivo, linha)) {
            cout << linha << endl;
        }
        arquivo.close();
    } else {
        cerr << "Não foi possível abrir o arquivo." << endl;
    }
}

// Função para atualizar um registro
void atualizar(const string& nome, float novapreco) {
    ifstream arquivo("produtos.txt");
    vector<Produto> produtos;
    string linha;

    if (arquivo.is_open()) {
        while (getline(arquivo, linha)) {
            size_t pos = linha.find(' ');
            if (pos != string::npos) {
                Produto p = {linha.substr(0, pos), stoi(linha.substr(pos + 1))};
                if (p.nome == nome) {
                    p.preco = novapreco;  // Atualiza a preco
                }
                produtos.push_back(p);
            }
        }
        arquivo.close();
    }

    // Escreve todas as produtos de volta no arquivo
    ofstream arquivo_saida("produtos.txt");
    if (arquivo_saida.is_open()) {
        for (const auto& p : produtos) {
            arquivo_saida << p.toString() << endl;
        }
        arquivo_saida.close();
    }
}

// Função para deletar um registro
void deletar(const string& nome) {
    ifstream arquivo("produtos.txt");
    vector<Produto> produtos;
    string linha;

    if (arquivo.is_open()) {
        while (getline(arquivo, linha)) {
            size_t pos = linha.find(' ');
            if (pos != string::npos) {
                Produto p = {linha.substr(0, pos), stoi(linha.substr(pos + 1))};
                if (p.nome != nome) {
                    produtos.push_back(p);  // Adiciona apenas se o nome for diferente
                }
            }
        }
        arquivo.close();
    }

    // Escreve as produtos restantes de volta no arquivo
    ofstream arquivo_saida("produtos.txt");
    if (arquivo_saida.is_open()) {
        for (const auto& p : produtos) {
            arquivo_saida << p.toString() << endl;
        }
        arquivo_saida.close();
    }
}

// Função principal
int main() {
    int opcao;
    string nome;
    float preco;

    do {
        cout << "1. Criar\n2. Ler\n3. Atualizar\n4. Deletar\n5. Sair\nEscolha uma opcao: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cout << "Nome: ";
                cin >> nome;
                cout << "preco: ";
                cin >> preco;
                criar(nome, preco);
                break;
            case 2:
                ler();
                break;
            case 3:
                cout << "Nome a atualizar: ";
                cin >> nome;
                cout << "Nova preco: ";
                cin >> preco;
                atualizar(nome, preco);
                break;
            case 4:
                cout << "Nome a deletar: ";
                cin >> nome;
                deletar(nome);
                break;
            case 5:
                cout << "Saindo..." << endl;
                break;
            default:
                cout << "Opcao invalida!" << endl;
                break;
        }
    } while (opcao != 5);

    return 0;
}
