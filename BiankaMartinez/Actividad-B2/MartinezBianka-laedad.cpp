#include<iostream> 
using namespace std; 
int main()
{ int ee, me, de, en, nm, dm, e, m, e; 
cout<<"ingrese la fecha actual y su fecha de nacimiento";
cin>>ee>>me>>de>>en>>nm>>dm; 
if(de>=dm){ 
d=de-dm; 
} 
else{ 
me=me-1; 
de=de+30; 
d=de-dm; 
}
 if(me>=nm){ 
n=me-nm; 
} 
else{ 
ee=ee-1;
 me=me+12; 
n=me-nm; 
} 
e=ee-en; 
cout<<"tienes "<<e<<" años "<<endl; 
cout<<"Con "<<n<<" meses"<<endl; 
cout<<"y dias"<<d<<endl; 
return 0; 
}
