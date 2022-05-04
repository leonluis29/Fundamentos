#include<iostream>
using namespace std;
int main(){
  float p,d=0,e=0,l,ub,vive,vdes,vf;
  cout<<"Ingrese la cantidad que desea sumar: ";
  cin>>l;
  do{
    cout<<"Ingrese p: ";
    cin>>p;
    d=d+1;
    e=e+p;
  }while(d<l);
  ub=e;
  vive=ub*0.12;
  vdes=ub*0.10;
  vf=ub+vive-vdes;
  cout<<"El valor final a pagar es: "<<vf<<endl;
  return 0;
}
