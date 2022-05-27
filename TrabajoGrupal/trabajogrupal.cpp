#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <stdlib.h>
using namespace std;
#include "PJ_FUNCIONES.h"
#include "BL_FUNCIONES.h"
#include "PG_FUNCIONES.h"
#include "GL_FUNCIONES.h"
#include "MB_FUNCIONES.h"
int main()
{
	setlocale(LC_ALL, "");
	int op, flag;
	do
	{
		system("cls");
		menu:
	    cout<<"\n\n\t\t\t\t----------BIENVENIDOS-----------"<<endl;
		cout<<"\t\t\t----------Fundamento de Programacion-----------"<<endl;
		cout<<"\t\t\t----------------Menú de opciones----------------"<<endl;
		cout<<"\t\t\t------------------------------------------------"<<endl;
		cout<<"1. Todos los trabajos de Proaño Jose Luis "<<endl;
		cout<<"2. Todos los trabajos de Bryan Leon"<<endl;
		cout<<"3. Todos los trabajos de Peñafiel Girabel"<<endl;
		cout<<"4. Todos los trabajos de Gracia Lizbeth "<<endl;
		cout<<"5. Todos los trabajos de Bianka Martinez"<<endl;
		cout<<"0. Salir"<<endl;
		cout<<"INGRESE UNA OPCIÓN: "; cin>>op;
		switch(op)
		{
			case 1:
                          PJ_Menu();
			break;
			case 2:
			  BL_Menu();
			break;
			case 3:
			  PG_Menu();
			break;
			case 4:
			  GL_Menu();	
			break;
			case 5:
		        MB_Menu();
				break;
			case 0:
				if(op!=0 && op>0){
				   cout << "\nOpcion no permitida !\n" <<  "Press Enter to continue\n";	    // pause the program until user input
				  }		  
				if(op==0){
					cout<<"Quieres salir completamente del sistema (presiona ENTER) : "<<endl;

				}
				   flag=cin.ignore().get();
				   cout<<flag<<endl;
			break;
		}
	}
	while(op != 0);
	
	return(0);
}
