//===NOMBRE DEL PROGRAMA: COMPARA
//===AUTOR: PROAÑO JOSE LUIS 
//===ARCHIVO: COMPARA.cpp
//===FECHA DE ELABORACION:01-05-2022
//===FECHA ULTIMA DE ACTUALIZACION: 13-05-2022
#include<iostream>
using namespace std;
int main(){
  float PJ_x,PJ_y;
  cout<<"Ingrese el valor de PJ_x: "; cin>>PJ_x;
  cout<<"Ingrese el valor de PJ_y: "; cin>>PJ_y;
  if(PJ_x==PJ_y){
    cout<<"El valor de PJ_x= "<<PJ_x<<" es igual a PJ_y= "<<PJ_y<<endl;
  }else{
    if(PJ_x<PJ_y){
    cout<<"el valor de PJ_x= "<<PJ_x<<" es menor a PJ_y="<<PJ_y<<endl;
    }else{
    
     
      cout<<"el valor de PJ_y="<<PJ_y<<" es menor a PJ_x="<<PJ_x<<endl;
    } 
      cout<<endl<<"//========================================="<<endl;
      cout<<"//===> Nombre del programa: Compara"<<endl;
      cout<<"//===> Archivo: Compara.cpp"<<endl;
      cout<<"//===> Autor: Proaño Jose Luis"<<endl;
      cout<<"//===> Fecha de elaboracion: 01-05-2022"<<endl;
      cout<<"//===> Fecha de actualizacion: 13-05-2022"<<endl;
      cout<<"//========================================="<<endl;
 
    
  }
  return 0;
}
