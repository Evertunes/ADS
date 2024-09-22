#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <fstream> // Incluindo a biblioteca para manipulação de arquivos

using namespace std;

// Abre (ou cria) um arquivo para escrita
ofstream arquivo("dados.txt");

// Estrutura para armazenar informações de um produto
struct Produto
{
    string nome;
    float preco;
};

// Função para exibir o menu
void exibirMenu()
{
    cout << "==========================" << endl;
    cout << "1. Adicionar Produto\n";
    cout << "2. Remover Produto\n";
    cout << "3. Listar Produtos\n";
    cout << "4. Sair\n";
    cout << "==========================" << endl;
    cout << "Escolha uma opcao: ";
}

// Função para adicionar um produto
void adicionarProduto(vector<Produto> &produtos)
{

    Produto novoProduto;
    cout << "--------------------------" << endl;
    cout << "Digite o nome do produto: ";
    cin.ignore();
    getline(cin, novoProduto.nome);
    cout << "--------------------------" << endl;
    cout << "Digite o preço do produto: ";
    cin >> novoProduto.preco;
    produtos.push_back(novoProduto);
    
    // Verifica se o arquivo foi aberto corretamente
    if (!arquivo)
    {
        cerr << "Erro ao abrir o arquivo!" << endl;
    }
    
    // Escreve os dados no arquivo
    arquivo << "Nome: " << novoProduto.nome << endl;
    arquivo << "Preco: " << novoProduto.preco << endl;
    
    // Fecha o arquivo
    arquivo.close();
    
    cout << "Dados salvos com sucesso!" << endl;
    cout << endl;
    cout << "--------------------------" << endl;
    cout << "==========================" << endl;
    cout << "Produto adicionado com sucesso!\n";
    cout << "--------------------------" << endl;
}

// Função para remover um produto
void removerProduto(vector<Produto> &produtos)
{
    string nome;
    cout << "--------------------------" << endl;
    cout << "Digite o nome do produto a ser removido: ";
    cout << "--------------------------" << endl;
    cin.ignore();
    getline(cin, nome);

    auto it = remove_if(produtos.begin(), produtos.end(), [&nome](const Produto &p)
                        { return p.nome == nome; });

    if (it != produtos.end())
    {
        produtos.erase(it, produtos.end());
        cout << "--------------------------" << endl;
        cout << "Produto removido com sucesso!\n";
        cout << "--------------------------" << endl;
    }
    else
    {
        cout << "--------------------------" << endl;
        cout << "Produto nao encontrado.\n";
        cout << "--------------------------" << endl;
    }
}

// Função para listar todos os produtos
void listarProdutos(const vector<Produto> &produtos)
{
    if (produtos.empty())
    {
        cout << "--------------------------" << endl;
        cout << "Nenhum produto cadastrado.\n";
        cout << "--------------------------" << endl;
        return;
    }
    cout << "--------------------------" << endl;
    cout << "Lista de Produtos:\n";
    cout << "--------------------------" << endl;
    cout << endl;

    for (const auto &produto : produtos)
    {
        cout << ". Nome: " << produto.nome << ", Preco: R$" << produto.preco << '\n';
    }
}

int main()
{
    vector<Produto> produtos;
    int opcao;

    do
    {
        exibirMenu();
        cin >> opcao;

        switch (opcao)
        {
        case 1:
            adicionarProduto(produtos);
            break;
        case 2:
            removerProduto(produtos);
            break;
        case 3:
            listarProdutos(produtos);
            break;
        case 4:
            cout << "--------------------------" << endl;
            cout << "Saindo...\n";
            break;
        default:
            cout << "--------------------------" << endl;
            cout << "Opcao invalida. Tente novamente.\n";
            cout << "--------------------------" << endl;
            break;
        }
    } while (opcao != 4);
    return 0;
}
