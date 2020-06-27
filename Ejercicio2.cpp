/* Crea un programa en C++ que:

1.- Muestre el listado de los posibles colores en los que puede estar un semáforo, con sus números asociados.

Color	Significado
1.- Rojo	“No pasar”
2.- Verde	“Adelante”
3.- Amarillo	“Precaución”
2.- Pida por teclado el número (dato entero) asociado a un color.

3.- Muestre el significado del color seleccionado.*/

#include<iostream>

using namespace std;

int main(){

	int opcion;
	
	cout<<"Digite el numero asociado a un color posible de los semaforos para mostrar su significado"<<endl;
	cout<<"1.Rojo"<<endl; cout<<"2.Verde"<<endl; cout<<"3.Amarillo"<<endl;
	 cin>>opcion;
	
	
	if(opcion==1){
		cout<<"No pasar";
	}
	if(opcion==2){
		cout<<"Adelante";
	}
	if(opcion==3){
		cout<<"Precaucion";
	}
	if(opcion>=3){
		cout<<"El numero "<<opcion<<" no esta asociado a ningun color";
	}
	return 0;
}


