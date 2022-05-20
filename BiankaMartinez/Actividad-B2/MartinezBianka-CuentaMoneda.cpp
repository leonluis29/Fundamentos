//================================================
//==> Nombre del programa: Cuenta Monedas
//==> Archivo : MartinezBianka-CuentaMoneda.cpp
//==>Autor: Martinez Endara Bianka 
//==>Fecha de elaboración: 2022-05-19
//==>Fecha ultima actualización: 2022-05-19
//=================================================

#include<iostream>
using namespace std;
int main()
{
        int BE_d=0,BE_d1=0,BE_d2=0,BE_m;
        float BE_y,BE_e=0,BE_e1=0,BE_e2=0;
        cout<<"ingrese BE_m :";
        cin>>BE_m;
        do{

        cout<<"ingrese BE_y: ";
        cin>>BE_y;
        BE_d=BE_d+1;
        BE_e=BE_e+1;
        if(BE_y==0.10)
        {
                BE_d1=BE_d1+1;
                BE_e1=BE_e1+BE_y;


        }else{

                BE_d2=BE_d2+1;
                BE_e2=BE_e2+BE_y;

        }

        }while(BE_d<BE_m);
	cout<<"\m\tResultado\m\m"<<endl;
cout<<"Cantidad de monedas ingresadas: "<<BE_d<<endl;	
cout<<"Cantidad total de dinero contado: "<<BE_e<<endl;	   cout<<"Cantidad total de monedas de $0.10 ingresadas: "<<BE_d2<<endl;
cout<<"Cantidad total en dinero de las monedas de $0.10: "<<BE_e2<<endl;
	cout<<"Cantidad total de monedas de $0.25 ingresadas: "<<d1<<endl;
	cout<<"Cantidad total en dinero de las monedas de $0.25: "<<e1<<endl;	
return 0;
}
