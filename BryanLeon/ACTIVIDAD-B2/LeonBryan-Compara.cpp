/*1. Diagrama de flujo y codigo en c++ de un programa que permite
 ingresar dos valores y los compara para saber cual es el mayor en
 en caso de que sean iguales, indique que son iguales*/

#include<iostream>
using namespace std;
int main(){
  float x,y;
  cout<<"Ingrese el valor de x: "; cin>>x;
  cout<<"Ingrese el valor de y: "; cin>>y;
  if(x==y){
    cout<<"El valor de x= "<<x<<" es igual a y= "<<y<<endl;
  }else{
    if(x<y){
    cout<<"el valor de x= "<<x<<" es menor a y="<<y<<endl;
    }else{
      cout<<"el valor de y="<<y<<" es menor a x="<<x<<endl;
    } 
  }
  return 0;
}
