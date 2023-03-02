#include <iostream>
using namespace std;

bool ehPrimo(int num) {
	setlocale(LC_ALL, "Portuguese");
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int num;
    cout << "Digite um numero inteiro: ";
    cin >> num;

    cout << "Os numeros primos menores ou iguais a " << num << " sao: ";
    for (int i = 2; i <= num; i++) {
        if (ehPrimo(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}

