#include<iostream>
using namespace std;
int main(){
  float lb_x,lb_c=0,lb_a=0,lb_n,lb_vb,lb_vive,lb_vdes,lb_vf;
  cout<<"================================================ \n==> Nombre del programa: Sumatoria de varios numeros \n==> Archivo : SumaN.cpp \n==>Autor: Leon Bryan \n==>Fecha de elaboración: 2022-05-05 \n==>Fecha ultima actualización: 2022-5-19 \n================================================="<<endl;
  cout<<"Ingrese la cantidad que desea sumar: ";
  cin>>lb_n;
  do{
    cout<<"Ingrese lb_x: ";
    cin>>lb_x;
    lb_c=lb_c+1;
    lb_a=lb_a+lb_x;
  }while(lb_c<lb_n);
  lb_vb=lb_a;
  lb_vive=lb_vb*0.12;
  lb_vdes=lb_vb*0.10;
  lb_vf=lb_vb+lb_vive-lb_vdes;
  cout<<"El valor final a pagar es: "<<lb_vf<<endl;
  return 0;
}
