#include<iostream>
using namespace std;
int main()
{
        float lb_x,lb_c=0,lb_a=0,lb_n,lb_vb,lb_viva,lb_vdesc,lb_vf;
        cout<<"================================================ \n==> Nombre del programa: Punto de Venta \n==> Archivo : PuntoVenta.cpp \n==>Autor: Leon Bryan \n==>Fecha de elaboración: 2022-05-05 \n==>Fecha ultima actualización: 2022-5-19 \n================================================="<<endl;
        cout<<"ingrese lb_n :";
        cin>>lb_n;
        do{

        cout<<"ingrese lb_x: ";
        cin>>lb_x;

        lb_c=lb_c+1;
        lb_a=lb_a+lb_x;


        }while(lb_c<lb_n);

        lb_vb=lb_a;
        lb_viva=lb_vb*0.12;
        lb_vdesc=lb_vb*0.10;
        lb_vf=lb_vb+lb_viva-lb_vdesc;
        cout<<"valor final a pagar es :";
        cout<<lb_vf<<endl;

       return 0;

}

