//================================================
//==> Nombre del programa: Suma de varios número
//==> Archivo : MartinezBianka-SumaN.cpp
//==>Autor: Martinez Endara Bianka
//==>Fecha de elaboración: 2022-05-19
//==>Fecha ultima actualización: 2022-05-19
//=================================================

#include<iostream>
using namespace std;
int main(){
  float BE_y,BE_d=0,BE_e=0,BE_m,BE_vc,BE_vive,BE_vdes,BE_vg;
  cout<<"Ingrese la cantidad que desea sumar: ";
  cin>>BE_m;
  do{
    cout<<"Ingrese BE_y: ";
    cin>>BE_y;
    BE_d=BE_d+1;
    BE_e=BE_e+BE_y;
  }while(BE_d<BE_m);
  BE_vc=BE_e;
  BE_vive=BE_vc*0.12;
  BE_vdes=BE_vc*0.10;
  BE_vg=BE_vc+BE_vive-BE_vdes;
  cout<<"El valor final a pagar es: "<<BE_vg<<endl;
  return 0;
}
