#include <iostream>
#include <cmath>
using namespace std;
void calcularRaices(int, int, int, int*, int*, int*);

int main(){
	int a,b,c; //Coeficientes ingresados en el teclado ax^2 + bx + c = 0
	cout<<"Ingrese el valor de a: "; cin>>a;
	cout<<"Ingrese el valor de b: "; cin>>b;
	cout<<"Ingrese el valor de c: "; cin>>c;
	int x1,x2,Rc,rc;
	calcularRaices(a, b, c, &x1, &x2, &Rc);
	cout<<"El valor de la raiz01 es: "<<x1<<endl;
    cout<<"El valor de la raiz02 es: "<<x2<<endl;
	if(Rc==1){
		cout<<"Es una raiz imaginaria";
	}
	if(Rc==2){
		cout<<"El coeficiente debe de ser diferente a 0";
	}
	return 0;
}

void calcularRaices(int a, int b, int c, int *x1, int *x2, int *Rc){
	float d;
	if(a=!0){
		d=pow(b,2)-4*(a*c); //d es el valor que se va a decidir si es posible realizar la operacion.
		if(d>=0){
			*x1=((-1*b)+sqrt(d))/(2*a);
			*x2=((-1*b)-sqrt(d))/(2*a);
			*Rc=0+0;
		}
		else{
			*Rc=0+1;
		}
	}else{
		*Rc=0+2;
	}
}
