#include<iostream>
using namespace std;
int main(){
  float lb_x,lb_y;
  cout<<"================================================ \n==> Nombre del programa: Comparar 2 numeros \n==> Archivo : Compara.cpp \n==>Autor: Leon Brya==>Fecha de elaboración: 2022-05-05 \n==>Fecha ultima actualización: 2022-5-19 \n================================================="<<endl;
  cout<<"Ingrese el valor de lb_x: "; cin>>lb_x;
  cout<<"Ingrese el valor de lb_y: "; cin>>lb_y;
  if(lb_x==lb_y){
    cout<<"El valor de lb_x= "<<lb_x<<" es igual a lb_y= "<<lb_y<<endl;
  }else{
    if(lb_x<lb_y){
    cout<<"el valor de lb_x= "<<lb_x<<" es menor a lb_y="<<lb_y<<endl;
    }else{
      cout<<"el valor de lb_y="<<lb_y<<" es menor a lb_x="<<lb_x<<endl;
    } 
  }
  return 0;
}
