#include<iostream>
using namespace std;
int main(){
  float y,d=0,e=0,m,vc,vive,vdes,vg;
  cout<<"Ingrese la cantidad que desea sumar: ";
  cin>>m;
  do{
    cout<<"Ingrese y: ";
    cin>>y;
    d=d+1;
    e=e+y;
  }while(d<m);
  vc=e;
  vive=vc*0.12;
  vdes=vc*0.10;
  vg=vc+vive-vdes;
  cout<<"El valor final a pagar es: "<<vg<<endl;
  return 0;
}
