#include <iostream>
using namespace std;

int main()
{
	cout << "Hola :) Este programa 5 Unidad 2" <<"\n";
	int num;
	
	cout << "Escribe un numero" <<"\n";
	cin >> num;
	
	if(num % 2 == 0)    cout << "EL NUMERO ES PAR";
	   else
	
    if(num % 3 == 0)    cout << "EL NUMERO ES IMPAR Y DIVISIBLE POR 3";
             else   cout << "EL NUMERO ES IMPAR Y NO DIVISIBLE POR 3";
             
}
