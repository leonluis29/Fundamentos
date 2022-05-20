//================================================
//==> Nombre del programa: Punto de venta
//==> Archivo : MartinezBianka-PuntoVenta.cpp
//==>Autor: Martinez Endara Bianka
//==>Fecha de elaboración: 2022-05-19
//==>Fecha ultima actualización: 2022-05-19
//=================================================

#include<iostream>
using namespace std;
int main()
{
        float BE_y,BE_d=0,BE_e=0,BE_m,BE_vc,BE_viva,BE_vdesc,BE_vg;
        cout<<"ingrese BE_m :";
        cin>>BE_m;
        do{

        cout<<"ingrese BE_y: ";
        cin>>BE_y;

        BE_d=BE_d+1;
        BE_e=BE_e+BE_y;


        }while(BE_d<BE_m);

        BE_vc=BE_e;
        BE_viva=BE_vc*0.12;
        BE_vdesc=BE_vc*0.10;
        BE_vg=BE_vc+BE_viva-BE_vdesc;
        cout<<"valor final a pagar es :";
        cout<<BE_vg<<endl;

       return 0;

}
