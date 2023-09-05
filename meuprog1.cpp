/*
Programa que pede nome do usuário e mostra a mensagem bom dia
*/

#include <iostream>
using namespace std;

int main()
{
    char nome[50];

    cout << "Digite seu nome: ";
    cin >> nome;
    cout << "Bom dia, " << nome;

    return 0;
}
