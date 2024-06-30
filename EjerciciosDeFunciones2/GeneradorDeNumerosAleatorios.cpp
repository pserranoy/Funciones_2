#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	srand(time(0));
	int numeroLimite,i=1,nG;
	cout<<"Ingrese el numero limite: "; cin>>numeroLimite;
	cout<<"Ingrese la cantidad de numeros aleatorios que se desea generar: "; cin>>nG;
	cout<<"Los numeros aleatorios son: ";
	while(nG>=i){
		int numeroAleatorio=rand()%numeroLimite+1;
		cout<<numeroAleatorio<<" ";
		i=i+1;
	}
	return 0;
}
