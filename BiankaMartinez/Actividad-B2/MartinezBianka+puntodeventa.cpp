#include<iostream>
using namespace std;
int main()
{
        float y,d=0,e=0,m,vc,viva,vdesc,vg;
        cout<<"ingrese m :";
        cin>>m;
        do{

        cout<<"ingrese y: ";
        cin>>y;

        d=d+1;
        e=e+y;


        }while(d<m);

        vc=e;
        viva=vc*0.12;
        vdesc=vc*0.10;
        vg=vc+viva-vdesc;
        cout<<"valor final a pagar es :";
        cout<<vg<<endl;

       return 0;

}
