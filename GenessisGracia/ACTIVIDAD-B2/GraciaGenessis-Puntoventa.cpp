#include<iostream>
using namespace std;
int main(){
  float GG_p,GG_d=0,GG_e=0,GG_l,GG_ub,GG_vive,GG_vdes,GG_vf;
  cout<<"Ingrese la cantidad que desea sumar: ";
  cin>>GG_l;
  do{
    cout<<"Ingrese GG_p: ";
    cin>>GG_p;
    GG_d=GG_d+1;
    GG_e=GG_e+GG_p;
  }while(GG_d<GG_l);
  GG_ub=GG_e;
  GG_vive=GG_ub*0.12;
  GG_vdes=GG_ub*0.10;
  GG_vf=GG_ub+GG_vive-GG_vdes;
  cout<<"El valor final a pagar es: "<<GG_vf<<endl;
  return 0;
}
