#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Digite um numero inteiro: ";
    cin >> num;

    cout << "Os multiplos de " << num << " menores que 100 sao: ";
    for (int i = 1; i <= 100 / num; i++) {
        cout << num * i << " ";
    }
    cout << endl;

    return 0;
}

