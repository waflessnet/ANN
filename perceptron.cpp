#include <iostream>
#include <stdlib.h>
using namespace std;
#define EPOCA 200 // numero de i del entrenamiento
#define K 0.2f // taza de aprendizaje

float TrainNetwork(float x0,float x1,float target);
float RunNetwork(float x0,float x1); // entrega las salidas
float sigmoide(float s);
void pesos_init(void); // inicia los pesos 

float Pesos[2];
float bias = 1.0f;

int main(){
  int = 0;
  pesos_init(); // inicializamos
   
   while( i < EPOCA){
     i++;
     cout << "Salida" << endl;
     cout << "1,1 = " << TrainNetwork( 1,1,1) << endl;
     cout << "1,0 = " << TrainNetwork( 1,0,0) << endl;
     cout << "0,1 = " << TrainNetwork( 0,1,0) << endl;
     cout << "0,0 = " << TrainNetwork( 0,0,0) << endl;
     cout << "\n";
     cout << "Pesos[0] = " << Pesos[0] <<endl;
     cout << "Pesos[1] = " << Pesos[1] <<endl;
     cout << "nbias =" << bias << endl;
     cout << "nn " << " epoca = "<<i<<endl;
 
   }
}

 float TrainNetwork(float x0, float x1, float target){
   float net = 0;
   float out = 0;
   float delta[2];
   float Error;
   net = Pesos[0]*x0 + Pesos[1]*x1 - bias;
   net = sigmoide(net);
  
   Error = target-net;
   bias -=K*Error;

   delta[0]=K*Error*x0;
   delta[1]=K*Error*x1;
   
   Pesos[0]+= delta[0];
   Pesos[1]+= delta[1];
    
   
   out = net;
   return out;
  
}
  /** function sigmoide ***/
    float sigmoide(float s){
       return (1/(1+exp(-1*s));
    }

  /*** function inicializar pesos ***/

  void pesos_init(void){
    for(int i =0; i <2; i++){
      Pesos[i] = (float)rand()/RAND_MAX;
    }
  }

} 
