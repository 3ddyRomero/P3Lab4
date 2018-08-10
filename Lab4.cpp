#include <iostream>
#include <stdlib.h>

using namespace std;

int menu();
int Eluno();
int ElDos();

int crearmatrix();
void imprimirMatrix(int**);

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
int a,b,pa,pb,x,y;
int sa=0, sb=0, suma=0;

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
	//cout<<"Nota: Las coordenadas deben ser de 1 en adelante.";
	cin>>a;
	cin>>b;

	if(a>=SIZE || a<0 || b>=SIZE || b<0  ){
		cout<<"Valor No Valido!!!"<<endl;
	}else{
		cout<<"Bien Hecho Joven!!  :D"<<endl;

		for(int i=a;i<SIZE;i++){
		    for(int j=0;j<SIZE;j++){
			Matrix[i][j] = Matrix[i+1][j];
			
		    }
		}

		for(int i=0;i<SIZE;i++){
                    for(int j=b;j<SIZE;j++){
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
		int SIZEB = SIZE-1;
		if (Matrixb[SIZEB][SIZEB] >=  Matrixb[2][2]){
		    for(int i=0;i<SIZEB;i++){
			    pa=1;
			    pb=1;
			for(int j=0;j<SIZEB;j++){
			    x = j+i;
			    if(x >= SIZEB)
				x = x-SIZEB;
			    	pa = pa*Matrixb[j][x];
				pb = pb*Matrixb[SIZEB-(j+1)][x];
			}
			sa = sa+pa;
			sb = sb+pb;
			suma = sa-sb;
			
			if(suma > 0){
				cout<<"Determinante: "<<"+"<<suma<<endl;
			}else{
				cout<<"Determinante: "<<suma<<endl;
			}
		    }
		}else{
		    cout<<"Listo."<<endl;
		}
	}




return 0;
}


int** createMatrix(){
int size = 8;
     int** retValue=new int*[size];
     for(int i=0;i<size;i++){
         retValue[i] = new int[size];
     }
     //inicializar la matriz en 0
     for(int i=0;i<size;i++)
      for(int j=0;j<size;j++)
         retValue[i][j]=0;

     return retValue;
}

void imprimirMatrix(int** matrix){
int size=8;
    for (int i=0; i<size;i++){
       for(int j=0;j<size;j++){
           //if(matrix[i][j] < 10)
             cout<<" "<<matrix[i][j];
           //else
             //cout<<" "<<matrix[i][j];
       }cout<<endl;
    }
}



int ElDos(){
 int** matrix = createMatrix();
 imprimirMatrix(matrix);
 int size = 8;	
 int reversi[size][size];
	
	for(int i=0;i<size;i++){ 
 	    for(int j=0;j<size;j++){
		
	    }
	}



return 0;
}

