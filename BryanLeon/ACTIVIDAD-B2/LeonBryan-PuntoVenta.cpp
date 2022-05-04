/*3. Diagrama de flujo y codigo en c++, de un programa que permita
 ingresar el precio de varios productos y calculo el iva a cobrar
 el descuento y el valor final a pagar, el programa mostrara un valor
 bruto, valor del iva, valor del descuento y el valor final a pagar*/
#include<iostream>
using namespace std;
int main()
{
        float x,c=0,a=0,n,vb,viva,vdesc,vf;
        cout<<"ingrese n :";
        cin>>n;
        do{

        cout<<"ingrese x: ";
        cin>>x;

        c=c+1;
        a=a+x;


        }while(c<n);

        vb=a;
        viva=vb*0.12;
        vdesc=vb*0.10;
        vf=vb+viva-vdesc;
        cout<<"valor final a pagar es :";
        cout<<vf<<endl;

       return 0;

}

