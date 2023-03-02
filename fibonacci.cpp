#include <iostream>

using namespace std;

int main() {
  int n;
  int anterior = 0;
  int atual = 1;

  cout << "Digite um numero inteiro: ";
  cin >> n;

  cout << "Sequencia de Fibonacci ate o " << n << "o termo: ";

  for (int i = 1; i <= n; i++) {
    cout << anterior << " ";

    int proximo = anterior + atual;
    anterior = atual;
    atual = proximo;
  }

  cout << endl;

  return 0;
}

