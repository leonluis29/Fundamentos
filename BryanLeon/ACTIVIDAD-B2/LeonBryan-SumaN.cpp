/*2. Diagrama de flujo y codigo en c++ de un programa que permite 
 ingresar dos valores y los compara para saber cual es el mayor
 en caso de que sean iguales, indique que son iguales*/
#include<iostream>
using namespace std;
int main(){
  float x,c=0,a=0,n,vb,vive,vdes,vf;
  cout<<"Ingrese la cantidad que desea sumar: ";
  cin>>n;
  do{
    cout<<"Ingrese x: ";
    cin>>x;
    c=c+1;
    a=a+x;
  }while(c<n);
  vb=a;
  vive=vb*0.12;
  vdes=vb*0.10;
  vf=vb+vive-vdes;
  cout<<"El valor final a pagar es: "<<vf<<endl;
  return 0;
}
