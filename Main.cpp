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
      cout << "1.sumar"<< endl <<"2.restar"<< endl << "3.multiplicar" << endl << " 4.dividir"<<endl;
      cout << "¿ que operación quiere hacer?"; 
      cin >> t;
      
      if (t==1){
	t=x+r2;
      }
      if (t==2){
	t=x-r2;
      }
      if (t==3){
	t=x*r2;
      }
      if (t==4){
	t=x/r2;
      }
      cout << " el resultado" << t << endl;
    }
