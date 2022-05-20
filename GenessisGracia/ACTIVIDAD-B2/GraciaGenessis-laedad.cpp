#include<iostream>
 using namespace std;
 int main(){ 
int GG_ab, GG_ma, GG_di, GG_om, GG_lk, GG_dr, GG_e, GG_m, GG_s; 
cout<<"ingrese la fecha actual y su fecha de nacimiento"; cin>>GG_ab>>GG_ma>>GG_di>>GG_om>>GG_lk>>GG_dr;
 if(GG_di>=GG_dr){ 
GG_s=GG_di-GG_dr; 
} 
else{
 GG_ma=GG_ma-1; 
GG_di=GG_di+30; 
GG_s=GG_di-GG_dr; 
} 
if(GG_ma>=GG_lk){ 
GG_m=GG_ma-GG_lk; 
} 
else{ GG_ab=GG_ab-1; 
GG_ma=GG_ma+12; 
GG_m=GG_ma-GG_lk; 
}
 GG_e=GG_ab-GG_om; 
cout<<"tienes "<<GG_e<<" años "<<endl; 
cout<<"Con "<<GG_m<<" meses"<<endl; 
cout<<"y dias"<<GG_s<<endl; 
return 0;
}
