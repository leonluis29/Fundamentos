//================================================
//==> Nombre del programa : La edad
//==> Archivo : MartinezBianka-laedad.cpp
//==>Autor: Martinez Endara Bianka
//==>Fecha de elaboración: 2022-05-19
//==>Fecha ultima actualización: 2022-05-19
//=================================================

#include<iostream> 
using namespace std; 
int main()
{ int BE_ee, BE_me, BE_de, BE_en, BE_nm, BE_dm, BE_e, BE_m, BE_d; 
cout<<"ingrese la fecha actual y su fecha de nacimiento";
cin>>BE_ee>>BE_me>>BE_de>>BE_en>>BE_nm>>BE_dm; 
if(BE_de>=BE_dm){ 
BE_d=BE_de-BE_dm; 
} 
else{ 
BE_me=BE_me-1; 
BE_dm=BE_dm+30; 
BE_d=BE_de-BE_dm; 
}
 if(BE_me>=BE_nm){ 
BE_m=BE_me-BE_nm; 
} 
else{ 
BE_ee=BE_ee-1;
BE_nm=BE_nm+12; 
BE_m=BE_me-BE_nm; 
} 
BE_e=BE_ee-BE_en; 
cout<<"tienes "<<BE_e<<" años "<<endl; 
cout<<"Con "<<BE_m<<" meses"<<endl; 
cout<<"y dias"<<BE_d<<endl; 
return 0; 
}
