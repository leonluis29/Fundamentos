#include<iostream>
using namespace std;
int main()
{
        int lb_c=0,lb_c1=0,lb_c2=0,lb_n;
        float lb_x,lb_a=0,lb_a1=0,lb_a2=0;
        cout<<"================================================ \n==> Nombre del programa: Cuenta Moneda \n==> Archivo : CuentaMoneda.cpp \n==>Autor: Leon Bryan \n==>Fecha de elaboración: 2022-05-05 \n==>Fecha ultima actualización: 2022-5-19 \n================================================="<<endl;
        cout<<"ingrese lb_n :";
        cin>>lb_n;
        do{

        cout<<"ingrese lb_x: ";
        cin>>lb_x;
        lb_c=lb_c+1;
        lb_a=lb_a+1;
        if(lb_x==0.10)
        {
                lb_c1=lb_c1+1;
                lb_a1=lb_a1+lb_x;
        }else{

                lb_c2=lb_c2+1;
                lb_a2=lb_a2+lb_x;
        }
        }while(lb_c<lb_n);
        return 0;
}      
