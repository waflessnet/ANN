#include <iostream>
#include <math.h>

float entrada,salida;
using namespace std;

int main(){
  cin >> entrada;
  salida = 1/(1+exp(-1*entrada));
  cout <<salida<<endl;
  return 0;
}
