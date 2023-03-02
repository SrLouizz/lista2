#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");
  	int num;
  	int fat = 1;

  	cout << "Digite um numero inteiro: ";
  	cin >> num;

  	for (int i = 1; i <= num; i++) {
    fat *= i;
  }

  cout << num << "! = " << fat << endl;

  return 0;
}

