#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

#ifdef __WIN64
   #define limpia_pantalla system("cls");
#endif
#ifdef __linux
   #define limpia_pantalla system("clear");
#endif


struct nodo{
   int info;
   int ind;
   struct nodo *sgt;
};
int buscar(int pos,nodo *nod);
int buscarValor(int pos,nodo *nod);

int main(){
  struct nodo *cabe;
  struct nodo *nuevo;
  struct nodo *aux;
  cabe = NULL;
  int dato;
  int cant,i=1,cont;
  int indice=0;int resultado;int fin =0;int opcion;

  cout << "Ingresar cantidad de nodos: ";
  cin >> cant;
   while(i<=cant){
      nuevo = (struct nodo*)malloc(sizeof(struct nodo));
      nuevo->sgt = cabe;
      nuevo->info = rand() %100 +1;
      nuevo->ind  = i;
      cabe=nuevo;
      i++;
   }
  aux = nuevo;
  while(fin == 0){
     //system("cls");
     cout << " *** Menu *** "<<endl;
     cout << " \t1) Buscar por indice " <<endl;
     cout << " \t2) Buscar por valor " <<endl;
     cout << " \t3) Mostrar nodos "<<endl;
     cout << " \t4) Salir " << endl;
     cin >> opcion;
      switch(opcion){
         case 1:
  		 cout <<" Buscar indice: ";
 		 cin  >> indice;
		 resultado= buscar(indice,aux);
 		 limpia_pantalla;
  		 cout << "El valor que tiene el indice es:"<<resultado;
         break;
  	 case 2:
		cout << "Buscar valor: " ;
   	        cin >> indice;
		resultado = buscarValor(indice,aux);
		limpia_pantalla;
   		cout << "El valor esta en el indice :" <<resultado<<endl;
		cout << "\t \t \t";
	

         break;
         case 3:
		 
		 while(nuevo !=NULL){
     			cout << " Dato : "<< nuevo->info <<endl;
	     		nuevo=nuevo->sgt;
	 	 }
			
     	 break;
         case 4:
		  fin=1;
   	 break;
          
     }
     
  }
 return 0;
}

 int buscarValor(int pos,nodo *nod){
   int i0=0;
    while( nod != NULL){
          if(nod->info == pos){
                //cout <<"El indice donde esta el valor es  :" <<nod->ind<<endl;
		return nod->ind;
          }
       nod = nod->sgt;
       i0++;
   }
 return 0;

 }
 int buscar(int pos,nodo *nod){
    int i0=0;
   

    //cout <<"indice ->" <<pos <<endl;
    while( nod != NULL){
	  //cout << "iterador :" <<i0 <<endl;
          if(i0 == (pos-1)){
                //cout <<"Indice en el struct :" <<nod->ind<<endl;
		return nod->info;
          }
       nod = nod->sgt;
       i0++;
   }
 return 0;
}
