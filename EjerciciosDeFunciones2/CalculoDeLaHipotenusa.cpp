#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int c1,c2;
	float h;
	cout<<"Ingrese el cateto 1: "; cin>>c1;
	cout<<"Ingrese el cateto 2: "; cin>>c2;
	h=sqrt(pow(c1,2)+pow(c2,2));
	cout<<"La hipotenusa del triangulo rectangulo es: "<<h<<endl;
	return 0;
	
}
