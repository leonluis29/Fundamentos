 //===NOMBRE DEL PROGRAMA: Suma de Varios Numeros                            
 //===AUTOR: PROAÑO JOSE LUIS                                        
 //===ARCHIVO: SumadevN.cpp                                      
 //===FECHA DE ELABORACION:01-05-2022
 ////===FECHA ULTIMA DE ACTUALIZACION: 13-05-2022                    



#include<iostream>
using namespace std;
int main(){
  float PJ_x,PJ_c=0,PJ_a=0,PJ_n,PJ_vb,PJ_vive,PJ_vdes,PJ_vf;
  cout<<"Ingrese cuantos numeros desea sumar: ";
  cin>>PJ_n;
  do{
    cout<<"Ingrese los numeros  PJ_x: ";
    cin>>PJ_x;
    PJ_c=PJ_c+1;
    PJ_a=PJ_a+PJ_x;
  }while(PJ_c<PJ_n);
  PJ_vb=PJ_a;
  PJ_vive=PJ_vb;
  PJ_vdes=PJ_vb;
  PJ_vf=PJ_vb+PJ_vive-PJ_vdes;
  cout<<"El la suma de los numeros ingresados es: "<<PJ_vf<<endl;

cout<<endl<<"//========================================="<<endl;
cout<<"//===> Nombre del programa: Suma de Varios Numeros"<<endl;        
cout<<"//===> Archivo: SumadevN.cpp"<<endl;            
cout<<"//===> Autor: Proaño Jose Luis"<<endl;         
cout<<"//===> Fecha de elaboracion: 01-05-2022"<<endl;
cout<<"//===> Fecha de actualizacion: 13-05-2022"<<endl;
cout<<"//========================================="<<endl;



  return 0;
}
