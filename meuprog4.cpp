#include <iostream>
using namespace std;
int main() {
    float numero, maior, menor;
    int cont = 1;
    while (cont <= 3) {
       cout << ("Digite um numero real:");
       cin >> numero;
       if (cont == 1) {
           maior = numero;
           menor = maior;
       }
       else if (numero > maior) {
           maior = numero;
       }
       else if (numero < menor) {
           menor = numero;
       }
       cont++;
    }
    cout << "Menor número: " << menor << "\nMaior número: " << maior << endl;
}