#include<iostream>
using namespace std;
int main(){
  int lb_ee,lb_ma,lb_de,lb_an,lb_mn,lb_dn,lb_a,lb_md,lb_d,lb_da,lb_m;
  cout<<"================================================ \n==> Nombre del programa: La edad \n==> Archivo : laedad.cpp \n==>Autor: Leon Bryan \n==>Fecha de elaboración: 2022-05-05 \n==>Fecha ultima actualización: 2022-5-19 \n================================================="<<endl;
  cout<<"Ingrese su nombre: ";
  cin>>lb_ee;
  cout<<"Ingrese su elb_dad: ";
  cin>>lb_ma;
  cout<<"Ingrese la fecha lb_de nacimiento: ";
  cin>>lb_de;
  cout<<"Ingrese la fecha actual: ";
  cin>>lb_an;
  if(lb_de>=lb_dn)
  {
    lb_d=lb_de-lb_dn;
  }else
  {
    lb_dn=lb_dn+30;
    lb_ma=lb_ma-1;
    lb_da=lb_da-lb_dn;
  }
  if(lb_ma>=lb_mn)
  {
    lb_m=lb_ma-lb_mn;
  }else
  {
    lb_mn=lb_mn+12;
    lb_ee=lb_ee-1;
    lb_m=lb_ma-lb_mn;
  }
  cout<<"La persona se llalb_ma: "<<lb_ee<<endl;
  cout<<"Tiene "<<lb_ma<<" años"<<endl;
  cout<<"Tiene "<<lb_de<<" dias"<<lb_ma<<" años"<<endl;
  return 0;
}
