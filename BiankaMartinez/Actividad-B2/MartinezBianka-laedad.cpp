#include<iostream> 
using namespace std; 
int main()
{ int ee, me, de, en, nm, dm, e, m, d; 
cout<<"ingrese la fecha actual y su fecha de nacimiento";
cin>>ee>>me>>de>>en>>nm>>dm; 
if(de>=dm){ 
d=de-dm; 
} 
else{ 
me=me-1; 
dm=dm+30; 
d=de-dm; 
}
 if(me>=nm){ 
m=me-nm; 
} 
else{ 
ee=ee-1;
 nm=nm+12; 
m=me-nm; 
} 
e=ee-en; 
cout<<"tienes "<<e<<" años "<<endl; 
cout<<"Con "<<m<<" meses"<<endl; 
cout<<"y dias"<<d<<endl; 
return 0; 
}
