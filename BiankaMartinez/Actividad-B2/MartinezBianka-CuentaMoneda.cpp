#include<iostream>
using namespace std;
int main()
{
        int d=0,d1=0,d2=0,m;
        float y,e=0,e1=0,e2=0;
        cout<<"ingrese m :";
        cin>>m;
        do{

        cout<<"ingrese y: ";
        cin>>y;
        d=d+1;
        e=e+1;
        if(y==0.10)
        {
                d1=d1+1;
                e1=e1+y;


        }else{

                d2=d2+1;
                e2=e2+y;

        }

        }while(d<m);
	cout<<"\m\tResultado\m\m"<<endl;
cout<<"Cantidad de monedas ingresadas: "<<d<<endl;	
cout<<"Cantidad total de dinero contado: "<<e<<endl;	cout<<"Cantidad total de monedas de $0.10 ingresadas: "<<d2<<endl;
	cout<<"Cantidad total en dinero de las monedas de $0.10: "<<e2<<endl;
	cout<<"Cantidad total de monedas de $0.25 ingresadas: "<<d1<<endl;
	cout<<"Cantidad total en dinero de las monedas de $0.25: "<<e1<<endl;	
return 0;
}