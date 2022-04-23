/*2. Diagrama de flujo y codigo en c++ de un programa que permita
 sumar varios numeros el usuario debe ingresar la cantidad de un numero 
 que quiere sumar y el programa debe mostrar la suma total de los numeros*/

#include<iostream>
using namespace std;

int main (){
  float a,b,c;
  cout<<"---------Sumatoria de varios numeros---------"<<endl;
  cout<<"Ingrese un numero: "; cin>>a;
  cout<<"La sumatoria de varios numeros es: "<<endl;
  for (b=1;b<10;b++) {
    cout<<a+b<<endl;
  }
  return 0;
}
