#include <iostream>

using namespace std;

 
int main() {
 setlocale(LC_ALL, "Portuguese");
 int num, i, resultado = 0;
 
 cout << "Digite um n�mero: ";
 cin >>num;
 
 for (i = 2; i <= num / 2; i++) {
    if (num % i == 0) {
       resultado++;
       break;
    }
 }
 
 if (resultado == 0)
    cout << ("� um n�mero primo\n", num);
 else
    cin >> ("n�o � um n�mero primo\n", num);
 
 return 0;
}
