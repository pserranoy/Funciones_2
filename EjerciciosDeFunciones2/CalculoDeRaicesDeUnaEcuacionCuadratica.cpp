#include <iostream>
#include <cmath>
using namespace std;

main(){
	int a,b,c; //Coeficientes ingresados en el teclado ax^2 + bx + c = 0
	float d,x1,x2;
	cout<<"Ingrese el valor de a: "; cin>>a;
	cout<<"Ingrese el valor de b: "; cin>>b;
	cout<<"Ingrese el valor de c: "; cin>>c;
	if(a=!0){
		d=pow(b,2)-4*(a*c); //d es el valor que se va a decidir si es posible realizar la operacion.
		if(d>=0){
			x1=((-1*b)+sqrt(d))/(2*a);
			x2=((-1*b)-sqrt(d))/(2*a);
			cout<<"El valor de la raiz01 es: "<<x1<<endl;
			cout<<"El valor de la raiz02 es: "<<x2<<endl;
		}else{
			cout<<"El resultado es una raiz imaginaria."<<endl;
		}
	}else{
		cout<<"El coeficiente a debe de ser diferente a 0."<<endl;
	}
	return 0;
}
