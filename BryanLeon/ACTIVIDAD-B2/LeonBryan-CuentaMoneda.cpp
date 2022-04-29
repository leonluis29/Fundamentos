/*5. Diagrama de flujo y código en c++ de un programa que cuente monedas
 el programa permitirá ingresar varias monedas de 3 denominaciones diferentes 
 (10ctv,25ctv,50ctv) y presentara cuantas monedas de cada denominación 
 ingresaron, cuanto es la cantidad en dinero de cada denominacion; asi como
 la cantidad de dinero total que se ingresaron*/
#include<iostream>
using namespace std;
int main()
{
        int c=0,c1=0,c2=0,n;
        float x,a=0,a1=0,a2=0;
        cout<<"ingrese n :";
        cin>>n;
        do{

        cout<<"ingrese x: ";
        cin>>x;
        c=c+1;
        a=a+1;
        if(x==0.10)
        {
                c1=c1+1;
                a1=a1+x;


        }else{

                c2=c2+1;
                a2=a2+x;

        }

        }while(c<n);
        return 0;
}      
