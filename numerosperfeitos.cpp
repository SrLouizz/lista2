#include <iostream>
using namespace std;

bool ehPerfeito(int n) {
	setlocale(LC_ALL, "Portuguese");
    int soma = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            soma += i;
        }
    }
    return (soma == n);
}

int main() {
    int num;
    cout << "Digite um numero inteiro: ";
    cin >> num;
    cout << "Numeros perfeitos menores ou iguais a " << num << ":" << endl;
    for (int i = 1; i <= num; i++) {
        if (ehPerfeito(i)) {
            cout << i << endl;
        }
    }
    return 0;
}

