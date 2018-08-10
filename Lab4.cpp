#include <iostream>
#include <stdlib.h>

using namespace std;

int menu();
int Eluno();
int ElDos();

int crearmatrix();

int main(){
    char ejecucion = 'y';
    do{
        switch (menu()){
        case 1:{
            Eluno();
            break;
        }
        case 2:{
            ElDos();
            break;
        }
        case 3:
            ejecucion = 'n';
            cout<< "La ejecución ha finalizado " << endl;
            cout<< "****\\\\Buen dia//****" << endl;
            break;

        } //end switch
    } while (ejecucion != 'n');

    return 0;

}




int menu(){
    int opcion=0;
    cout<<"------------------------------------------------"<<endl;
    cout<<"Bienvenido al Laboratorio 4 de Programación III."<<endl;
    cout << "/****Menu****\\" << endl;
    cout << "1. Ejercicio 1." << endl;
    cout << "2. Ejercicio 2." << endl;
    cout << "3. Salir." << endl;
    cout << "Ingrese una opcion: ";
    cin >> opcion;
    cout<<"------------------------------------------------"<<endl;
    return opcion;
}


int Eluno(){
int SIZE; 
int a,b;

	cout<<"Ingrese el tamaño de la matriz: "<<endl;
	cin>>SIZE;
	cout<<endl<<endl;
	
	int Matrix[SIZE][SIZE];
	int Matrixb[SIZE-1][SIZE-1];

	for(int i=0;i < SIZE;i++){
	    for(int j=0;j < SIZE;j++){
		Matrix[i][j] = (rand() % 6 + 1);
		cout<<Matrix[i][j]<<" ";
	    }cout<<endl;
	}
	cout<<endl;

	cout<<"Ingrese la coordenada(Deben ser enteros positivos):"<<endl;
	cout<<"Nota: Las coordenadas deben ser de 1 en adelante.";
	cin>>a;
	cin>>b;

	if(a>=SIZE || a<1 || b>=SIZE || b<1  ){
		cout<<"Valor No Valido!!!"<<endl;
	}else{
		cout<<"Bien Hecho Joven!!  :D"<<endl;

		for(int i=a-1;i<SIZE;i++){
		    for(int j=0;j<SIZE;j++){
			Matrix[i][j] = Matrix[i+1][j];
			
		    }
		}

		for(int i=0;i<SIZE;i++){
                    for(int j=b-1;j<SIZE;j++){
                        Matrix[i][j] = Matrix[i][j+1];
                    }
                }
		
		for(int i=0;i<SIZE-1;i++){
		    for(int j=0;j<SIZE-1;j++){
			Matrixb[i][j] = Matrix[i][j];	
		    }
		}

		cout<<"Matriz por cofactor: "<<endl;

		for(int i=0;i < SIZE-1;i++){
           	    for(int j=0;j < SIZE-1;j++){
                	cout<<Matrixb[i][j]<<" ";
            	    }cout<<endl;
        	}
		cout<<endl;


	}




return 0;
}


int ElDos(){

return 0;
}

