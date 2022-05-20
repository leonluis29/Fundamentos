

#include<iostream>
using namespace std;
int main(){
  float GG_o,GG_s;
  cout<<"Ingrese el valor de GG_o: "; cin>>GG_o;
  cout<<"Ingrese el valor de GG_s: "; cin>>GG_s;
  if(GG_o==GG_s){
    cout<<"El valor de GG_o= "<<GG_o<<" es igual a GG_s= "<<GG_s<<endl;
  }else{
    if(GG_o<GG_s){
    cout<<"el valor de GG_o= "<<GG_o<<" es menor a GG_s="<<GG_s<<endl;
    }else{
      cout<<"el valor de GG_s="<<GG_s<<" es menor a GG_o="<<GG_o<<endl;
    } 
  }
  return 0;
}
