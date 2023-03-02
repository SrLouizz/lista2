#include <iostream>

using namespace std;

int main()
{	setlocale (LC_ALL, "Portuguese");
    int n= 0;

    cout << "Tabuada:";
    cin >> n;

    for (int i = 1; i<=10; i++){
        cout<< i << " x "<< n << " = "<< i*n<<endl;
    }
	
    return 0;
}
