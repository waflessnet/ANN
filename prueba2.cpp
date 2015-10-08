#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define NUM_ENTRADAS 2

float entrada[NUM_ENTRADAS],
      pesos[NUM_ENTRADAS],
      salida;
int i;
using namespace std;

int main(){
   srand48(time(NULL));
   for(i=0; i<NUM_ENTRADAS;i++){
     pesos[i] =drand48();
   }
   for(i=0; i<NUM_ENTRADAS;i++){
    cout <<"Entrada "<<i+1<<": ";
    cin >>entrada[i];
 
   }
   salida=0.0;
   for(i=0;i<NUM_ENTRADAS;i++){
     salida+=(entrada[i])*(pesos[i]);
   }
  salida =1/(1+exp(-1*salida)); //funcion sigmoide
  cout<<"Salida: " <<salida<<endl;
  cout<<"Pesos : "<<pesos[1]<<" "<<pesos[2]<<endl;
   return 0;


}


