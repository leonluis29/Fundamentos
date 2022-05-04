

#include<iostream>
using namespace std;
int main(){
  float o,s;
  cout<<"Ingrese el valor de o: "; cin>>o;
  cout<<"Ingrese el valor de s: "; cin>>s;
  if(o==s){
    cout<<"El valor de o= "<<o<<" es igual a s= "<<s<<endl;
  }else{
    if(o<s){
    cout<<"el valor de o= "<<o<<" es menor a s="<<s<<endl;
    }else{
      cout<<"el valor de s="<<s<<" es menor a o="<<o<<endl;
    } 
  }
  return 0;
}
