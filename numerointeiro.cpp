#include <iostream>

using namespace std;

main()
{
	setlocale(LC_ALL, "Portuguese");
	int num=-0;
	
	cout << "Numero inteiro:";
    cin >> num;
    
    for (int i = -1; i<=-100; i++){
        cout<< i << " x "<< num << " = "<< i*num<<endl;
    }
	
    return 0;
}
