/*(1) Crea un programa en C++ que:

1.- Muestre el listado de los planetas (con sus números asociados).

Planeta	Distancia media al sol (En millones de kilómetros).
Mercurio 59
Venus 108
Tierra 150
Marte 228
Júpiter	750
Saturno	1431
Urano 2877
Neptuno	4509
2.- Pida por teclado el número (dato entero) asociado a un planeta.

3.- Muestre la distancia media al Sol, a la que se encuentra el planeta seleccionado.

Nota: Si el número introducido por el usuario, no está asociado a ningún planeta, se mostrará el mensaje: “ERROR: <número> no está asociado a ningún planeta.”.*/

#include<iostream>

using namespace std;

int main(){
	
	int opcion;
	
	cout<<"Este programa muestra la distacion del sol conforme al planeta que seleccione."<<endl;
	cout<<endl<<"1.Mercurio"<<endl; cout<<"2.Venus"<<endl; cout<<"3.Tierra"<<endl; cout<<"4.Marte"<<endl; cout<<"5.Jupiter"<<endl; cout<<"6.Saturno"<<endl;
	cout<<"7.Urano"<<endl; cout<<"8.Neptuno"<<endl;
	cout<<endl<<"Digite numero asociado a un planeta de la lista"<<endl; cin>>opcion; 
	
	if(opcion==1){
		cout<<"La distancia de Mercurio al Sol es de 59 millones de kilometros";	
	} 
	
	if(opcion==2){
			cout<<"La distancia de Venus al Sol es de 108 millones de kilometros";}
			
	if(opcion==3){
		cout<<"La distancia de la Tierra al Sol es de 150 millones de kilometros";
		}
    if(opcion==4){
		cout<<"La distancia de Marte al Sol es de 228 millones de kilometros";
		}
	
	if(opcion==5){
		cout<<"La distancia de Jupiter al Sol es de 750 millones de kilometros";
	}			
if(opcion==6){
	cout<<"La distancia de Saturno al Sol es de 1431 millones de kilometros";
    }
	if (opcion==7){
		cout<<"La distancia de Urano al Sol es de 2877 millones de kilometros";
	}
	if (opcion==8){
		cout<<"La distancia de Neptuno al Sol es de 4509 millones de kilometros";
	}
    if(opcion>=9){
		cout<<"ERROR: "<<opcion<<" no esta asociado a ningun planeta.";
	}
	return 0;
}
