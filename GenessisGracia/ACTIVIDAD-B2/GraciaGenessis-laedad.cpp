#include<iostream>
 using namespace std;
 int main(){ 
int ab, ma, di, om, lk, dr, e, m, s; 
cout<<"ingrese la fecha actual y su fecha de nacimiento"; cin>>ab>>ma>>di>>om>>lk>>dr;
 if(di>=dr){ 
s=di-dr; 
} 
else{
 ma=ma-1; 
di=di+30; 
s=di-dr; 
} 
if(ma>=lk){ 
m=ma-lk; 
} 
else{ ab=ab-1; 
ma=ma+12; 
m=ma-lk; 
}
 e=ab-om; 
cout<<"tienes "<<e<<" años "<<endl; 
cout<<"Con "<<m<<" meses"<<endl; 
cout<<"y dias"<<s<<endl; 
return 0;
}
