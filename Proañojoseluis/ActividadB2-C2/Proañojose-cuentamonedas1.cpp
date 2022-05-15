  //===NOMBRE DEL PROGRAMA: Cuenta monedas 
  //===AUTOR: PROAÑO JOSE LUIS
  //===ARCHIVO: Cuenta monedas.cpp                           
  //===FECHA DE ELABORACION:01-05-2022  
  //===FECHA ULTIMA DE ACTUALIZACION: 13-05-2022

#include<iostream>
using namespace std;
int main()
{
	int PJ_c=0,PJ_c1=0,PJ_c2=0,PJ_n;
	float PJ_x,PJ_a=0,PJ_a1=0,PJ_a2=0;
	cout<<"ingrese PJ_n : ";
	cin>>PJ_n;
	do{

	
cout<<"ingrese el valor de la moneda (0.10,0.25) : ";

	cin>>PJ_x;
	PJ_c=PJ_c+1;
	PJ_a=PJ_a+PJ_x;
	if(PJ_x==0.10)
	{
		PJ_c1=PJ_c1+1;
		PJ_a1=PJ_a1+PJ_x;

	
	}else{

		PJ_c2=PJ_c2+1;
		PJ_a2=PJ_a2+PJ_x;

	}

	}while(PJ_c<PJ_n);

	cout<<"El resultado fue:"<<endl;
	cout<<"Cantidad de monedas ingresadas :"<<PJ_c<<endl;
        cout<<"Cantidad total en dinero contado : "<<PJ_a<<endl;

	cout<<"Cantidad de monedas de 0.10 ingresadas :"<<PJ_c1<<endl;
	cout<<"Cantidad total en dinero de monedas de 0.10ctv : "<<PJ_a1<<endl;
	cout<<"Cantidad de monedas de 0.25ctv ingresadas :"<<PJ_c2<<endl;
	cout<<"Cantidad total en dinero de monedas de 0.25ctv :"<<PJ_a2<<endl;

  cout<<endl<<"//========================================="<<endl;
  cout<<"//===> Nombre del programa: Cuenta monedas"<<endl;
  cout<<"//===> Archivo: Cuenta monedas.cpp"<<endl;
  cout<<"//===> Autor: Proaño Jose Luis"<<endl;
  cout<<"//===> Fecha de elaboracion: 01-05-2022"<<endl;
  cout<<"//===> Fecha de actualizacion: 13-05-2022"<<endl;
  cout<<"//========================================="<<endl;
	
return 0;
	
	}
