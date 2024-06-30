#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	srand(time(0));
	int nU,nC,U,C;
	U=0;
	C=0;
	cout<<"Juego de piedra,papel,tijera||considere que piedra es 1, papel es 2, tijera es 3. El ganador sera el que gane tres partidas."<<endl;
	while((U<3)&&(C<3)){
		nC=rand()%3+1;
		cout<<"Ingrese su movimiento: "; cin>>nU;
		if((nU==3)&&(nC==1)){
			C=C+1;
			cout<<"Partida perdida: "<<U<<" a "<<C<<endl;
		}else if((nU==2)&&(nC==1)){
			U=U+1;
			cout<<"Partida ganada: "<<U<<" a "<<C<<endl;
		}else if(nU==nC){
			cout<<"Partida empatada: "<<U<<" a "<<C<<endl;
	    }else if((nU==1)&&(nC==2)){
			C=C+1;
			cout<<"Partida perdida: "<<U<<" a "<<C<<endl;
	    }else if((nU==1)&&(nC==3)){
			U=U+1;
			cout<<"Partida ganada: "<<U<<" a "<<C<<endl;
	    }else if((nU==2)&&(nC==3)){
			C=C+1;
			cout<<"Partida perdida: "<<U<<" a "<<C<<endl;
	    }else if((nU==3)&&(nC==2)){
			U=U+1;
			cout<<"Partida ganada: "<<U<<" a "<<C<<endl;
	    }
    }
    cout<<"Resultados de las partidas:"<<endl;
    cout<<"Partidas ganadas: "<<U<<endl;
    cout<<"Partidas perdidas: "<<C<<endl;
	if(U<C){
		cout<<"El ganador es: Computer"<<endl;
	}else{
		cout<<"El ganador es: Usuario"<<endl;
	}
	return 0;
}
