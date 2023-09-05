/*
Transformação do programa do exercício 4 
para trabalhar com números do tipo float.
*/

#include <iostream>
using namespace std;

int main()
{
    float num1, num2, sum ;

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

    return 0;
}