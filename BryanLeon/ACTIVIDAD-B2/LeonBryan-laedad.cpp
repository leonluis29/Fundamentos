/*4. Diagrama de flujo y codigo en c++, de un programa que calcula la edad
 de una persona, el programa debe permitir ingresar la fecha actual, la fecha
 de nacimiento y mostrar cuantos años, meses y días tiene la persona*/
#include<iostream>
using namespace std;
int main(){
  int ee,ma,de,an,mn,dn,a,md,d,da,m;
  cout<<"Ingrese su nombre: ";
  cin>>ee;
  cout<<"Ingrese su edad: ";
  cin>>ma;
  cout<<"Ingrese la fecha de nacimiento: ";
  cin>>de;
  cout<<"Ingrese la fecha actual: ";
  cin>>an;
  if(de>=dn)
  {
    d=de-dn;
  }else
  {
    dn=dn+30;
    ma=ma-1;
    d=da-dn;
  }
  if(ma>=mn)
  {
    m=ma-mn;
  }else
  {
    mn=mn+12;
    ee=ee-1;
    m=ma-mn;
  }
  cout<<"La persona se llama: "<<ee<<endl;
  cout<<"Tiene "<<ma<<" años"<<endl;
  cout<<"Tiene "<<de<<" dias"<<ma<<" años"<<endl;
  return 0;
}
