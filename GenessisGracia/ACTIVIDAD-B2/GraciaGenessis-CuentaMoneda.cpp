#include<iostream>
using namespace std;
int main()
{
        int b=0,b1=0,b2=0,n;
        float y,a=0,a1=0,a2=0;
        cout<<"ingrese n :";
        cin>>n;
        do{

        cout<<"ingrese y: ";
        cin>>y;
        b=b+1;
        a=a+1;
        if(y==0.10)
        {
                b1=b1+1;
                a1=a1+y;


        }else{

                b2=b2+1;
                a2=a2+y;

        }

        }while(b<n);
cout<<"\n\tResultado\n\n"<<endl;	
cout<<"Cantidad de monedas ingresadas: "<<b<<endl;	
cout<<"Cantidad total de dinero contado: "<<a<<endl;
	cout<<"Cantidad total de monedas de $0.10 ingresadas: "<<b2<<endl;
	cout<<"Cantidad total en dinero de las monedas de $0.10: "<<b2<<endl;
	cout<<"Cantidad total de monedas de $0.25 ingresadas: "<<b1<<endl;
	cout<<"Cantidad total en dinero de las monedas de $0.25: "<<a1<<endl;	
return 0;
}
