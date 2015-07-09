#include <iostream>

using namespace std;

int main()
{
	double x=0;
	cout << "introduce el primer número";
	cin>> x;
      
	double r2=0;
	cout << "introduce el segundo número";
	cin >> r2;
      
	double t=0;
	int opcion = 0;
	cout << "1.sumar"<< endl <<"2.restar"<< endl << "3.multiplicar" << endl << " 4.dividir"<<endl;
	cout << "¿ que operación quiere hacer?"; 
	cin >> opcion;
	switch (opcion) {
		case 1:
			t=x+r2;
			break;
		case 2:
			t=x-r2;
			break;
		case 3:
			t=x*r2;
			break;
		case 4:
			t=x/r2;
			break;
		default:
			cout << "se ha producido un error"<<endl;
			return 0;
	}
	cout << "resultado"<< t << endl;
	return 0;
}
