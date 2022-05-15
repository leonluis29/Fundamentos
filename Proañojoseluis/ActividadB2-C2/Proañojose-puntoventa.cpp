//===NOMBRE DEL PROGRAMA: Punto de venta                           
//===AUTOR: PROAÑO JOSE LUIS                            
//===ARCHIVO: Puntodeventa.cpp                           
//===FECHA DE ELABORACION:01-05-2022          
//===FECHA ULTIMA DE ACTUALIZACION: 13-05-2022


#include<iostream>
using namespace std;
int main()
{
	float PJ_x,PJ_c=0,PJ_a=0,PJ_n,PJ_vb,PJ_viva,PJ_vdesc,PJ_vf;
	cout<<"ingrese cantidad de productos PJ_n :";
	cin>>PJ_n;
	do{
	
	cout<<"ingrese costo del producto PJ_x: ";
	cin>>PJ_x;

	PJ_c=PJ_c+1;
	PJ_a=PJ_a+PJ_x;


	}while(PJ_c<PJ_n);

	PJ_vb=PJ_a;
	PJ_viva=PJ_vb*0.12;
	PJ_vdesc=PJ_vb*0.10;
	PJ_vf=PJ_vb+PJ_viva-PJ_vdesc;


	cout<<"valor total es  :";
        cout<<PJ_vb<<endl;
	cout<<"valor del iva es  :";
        cout<<PJ_viva<<endl;

	cout<<"valor del descuento  es :";
        cout<<PJ_vdesc<<endl;

	cout<<"total de productos son  :";
        cout<<PJ_n<<endl;
	cout<<"valor final a pagar es :";
	cout<<PJ_vf<<endl;

cout<<endl<<"//========================================="<<endl;
cout<<"//===> Nombre del programa: Punto de venta"<<endl;
cout<<"//===> Archivo: Puntodeventa.cpp"<<endl;
cout<<"//===> Autor: Proaño Jose Luis"<<endl;
cout<<"//===> Fecha de elaboracion: 01-05-2022"<<endl;        
cout<<"//===> Fecha de actualizacion: 13-05-2022"<<endl;  
cout<<"//========================================="<<endl;


       return 0;
       
}
