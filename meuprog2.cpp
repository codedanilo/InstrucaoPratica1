/*
Programa que pede ao usuário 2 números inteiros, A e B, 
e mostre na tela a soma, subtração, multiplicação, 
divisão e resto da divisão desses números.
*/

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, sum, resto;

    cout << "Primeiro numero: ";
    cin >> num1;
    cout << "Segundo numero : ";
    cin >> num2;

    sum = num1 + num2;
    cout << "A soma é: " << sum << "\n";

    sum = num1 - num2;
    cout << "A subtração é: " << sum << "\n";

    sum = num1 * num2;
    cout << "A multiplicação é: " << sum << "\n";

    sum = num1 / num2;
    cout << "A divisão é: " << sum << "\n";

    resto = sum;
    resto = resto %sum;
    cout << "O resto da divisão é: " << resto;

    return 0;
}