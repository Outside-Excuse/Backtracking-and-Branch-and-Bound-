//Alejandro Hidalgo Badillo A01423412
//Actividad 1punto3 Implementacion de la tecnica de programacion backtracking y ramificacion y poda
// 31 de Agosto del 2021

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include<algorithm>
using namespace std;

vector <string> Laberinto;


bool isSafe(int** arr, int x, int y, int M, int N){
	//isSafe solo es una funcion para determinar si se puede llevar la buscqueda de la solucion mas optima 
	//tiene una complejidad de On
    if(x<M && y<N && arr[x][y]==1 ){
        //cout<<ciclo 3<<endl;
        return true;
    }
    return false;
}
bool ratinMaze(int** arr, int x, int y, int M, int N, int** solArr){
		//en la solucion al problema con backtracking implementamos recursion y por ende tiene una complejidad logaritmica
    //cout<<"inicio"<<endl;
    if(x==M-1 && y==N-1){
        solArr[x][y]=1;
        return true;
        //cout<<"ciclo 1"<<endl;
    }

    if(isSafe(arr,x,y,M,N)){
        solArr[x][y]=1;
        //cout<<"ciclo 2"<<endl;
        if (ratinMaze(arr,x+1,y,N,M,solArr)){
            return true;
        }
        if (ratinMaze(arr,x,y+1,N,M,solArr)){
            return true;
        }
        solArr[x][y]=0;
        return false;
    }
    return false;
}



int main(){
		//la complejidad del main es O n por n debido a que tiene for anidados y por ende es n cuadratica
    int M,N,cont=0,cont2 = 0;
    // M = filas 
    // N = columnas
     //se origina el laberinto vacio
    string nombreArchivo = "Entrada.txt";
    ifstream Archivo(nombreArchivo.c_str());
    string linea, line;
		cin>>M;
		cin>>N;
    // Obtener linea de archivo, y almacenar contenido en linea
    while (getline(cin, linea)) {
        // Lo vamos imprimiendo
        //cout << linea << endl
        //Almacenamos los valores de M y N

        //Almacenamos los valores de las filas
      
            //cout << "Una linea: ";
            linea.erase(std::remove_if(linea.begin(), linea.end(), ::isspace), linea.end());
            Laberinto.push_back(linea);
            //for (int a = 0; a<M;a++){
                //Maze[cont2][a] = linea[a]-'0';
                //cout<<Maze[cont2][a];
            //}
            //cout<<endl;
            //cout<<"laberinto: " << Laberinto[cont2]<<endl;
            //cont2++;
    }
		//for(int i = 0;i<Laberinto.size();i++){
			//cout<<Laberinto[i]<<endl;
		//}
    //cout<<"intento fuerte: "<<endl;
    int** Maze= new int*[M];
    for (int i = 0;i<M;i++){
        Maze[i]= new int[N];
    }

    for (int i = 0;i<M;i++){
        for(int l = 0; l<N;l++){
            Maze[i][l]=Laberinto[i][l]-'0';
            //cout<<Maze[i][l];
        }
        //cout<<endl;
    }

     int** solArr= new int*[M];
    for (int i = 0;i<M;i++){
        solArr[i]= new int[N];
        for (int j = 0;j<N;j++){
            solArr[i][j]= 0;
        }
    }

        for (int i = 0;i<M;i++){
            for (int j = 0;j<N;j++){
            //cout<<solArr[i][j];
        }
        cout<<endl;
    }
//cout<<"a ver qpd"<<endl;

    if(ratinMaze(Maze,0,0,M,N,solArr)){
        for (int i = 0;i<M;i++){
            for (int j = 0;j<N;j++){
                cout<<solArr[i][j]<<" ";
        }
        cout<<endl;
     }
    }

   

    //guardamos las lineas del laberinto en un vector y las desplegamos para ver que sean correctas 
    //cout<<"Vector del laberinto"<<endl;
    //for (int i = 0; i<M;i++){
        //cout<<rows[i]<<endl;
    //}
   

   //falto el codigo de arbol de poda por que me marcaba muchos errores y decidi quitarlo para mostrar la funcionalidad del backtracking
    

  
    



}

