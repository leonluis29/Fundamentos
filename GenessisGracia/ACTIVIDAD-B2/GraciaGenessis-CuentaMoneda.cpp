#include<iostream>
using namespace std;
int main()
{
        int GG_b=0,GG_b1=0,GG_b2=0,GG_n;
        float GG_y,GG_a=0,GG_a1=0,GG_a2=0;
        cout<<"ingrese GG_n :";
        cin>>GG_n;
        do{

        cout<<"ingrese GG_y: ";
        cin>>GG_y;
        GG_b=GG_b+1;
        GG_a=GG_a+1;
        if(GG_y==0.10)
        {
                GG_b1=GG_b1+1;
                GG_a1=GG_a1+GG_y;


        }else{

                GG_b2=GG_b2+1;
                GG_a2=GG_a2+GG_y;

        }

        }while(GG_b<GG_n);
cout<<"\n\tResultado\n\n"<<endl;	
cout<<"Cantidad de monedas ingresadas: "<<GG_b<<endl;	
cout<<"Cantidad total de dinero contado: "<<GG_a<<endl;
	cout<<"Cantidad total de monedas de $0.10 ingresadas: "<<GG_b2<<endl;
	cout<<"Cantidad total en dinero de las monedas de $0.10: "<<GG_b2<<endl;
	cout<<"Cantidad total de monedas de $0.25 ingresadas: "<<GG_b1<<endl;
	cout<<"Cantidad total en dinero de las monedas de $0.25: "<<GG_a1<<endl;	
return 0;
}
