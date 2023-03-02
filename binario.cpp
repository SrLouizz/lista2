#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
    int num;
    cout << "Digite um numero inteiro: ";
    cin >> num;

    cout << "O numero " << num << " em binario eh: ";

    // Convertendo para binário
    for (int i = 31; i >= 0; i--) {
        int bin = (num >> i) & 1;
        cout << bin;
    }

    cout << endl;
    return 0;
}

