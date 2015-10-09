#include <iostream>
using std::cout;
using std::endl;

int main(){
 int x[6] = {1,2,3,4,5,6};
 int *px;
 
 px = x;
 
cout << endl << *px;
px+=2;
cout << endl << *px;
px-=2;
cout << endl << *px;
px++;
cout << endl << *px;
cout << endl;
return 0;
}
