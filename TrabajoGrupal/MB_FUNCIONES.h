//fuciones de Martinez Bianka
int MB_compara()
{
	int MB_aa, MB_bb ;
 	cout<<"Ingrese el primer numero a comparar: ";  cin>> MB_aa;  
 	cout<<"Ingrese el segundo numero a comparar: ";  cin>> MB_bb;
	if (MB_aa==MB_bb)
	{
		cout<<"Son iguales"<<endl;
	}
	else
	{
		if (MB_aa>MB_bb)
		{
		cout<<MB_aa<<" es mayor"<<endl;
		}
		else
		{
		cout<<MB_bb<<" es mayor"<<endl;
		}
	}					
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Compara"<<endl;
	cout<<"//==> Archivo : MartinezBianka-compara.cpp"<<endl;
	cout<<"//==>Autor: Martinez Bianka"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-04-29"<<endl;
	cout<<"//==>Fecha ultima actualizaci?n: 2022-05-13"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}
int MB_cuentamoneda()
{
	int MB_n,MB_c, MB_c1, MB_c2, MB_cl, MB_cz;
	float MB_x, MB_al, MB_a, MB_a1, MB_a2, MB_az;
	MB_c = 0;
	MB_c1 = 0;
	MB_c2 = 0;
	MB_a = 0;
	MB_a1 = 0;
	MB_a2 = 0;
	cout<<"\n\tCONTADOR DE MONEDAS\n\n"<<endl;
	cout<<"Cantidad de monedas a ingresar: ";  cin>>MB_n;
	do
	{
		cout<<"Ingrese el valor de la moneda (0.10 - 0.25): ";  cin>>MB_x;
		MB_c = MB_c+1;
		MB_a = MB_a+MB_x;
		if(MB_x==0.25)
			{
				MB_c1 = MB_c1+1;
				MB_a1 = MB_x+MB_a1;
			}
		else
			{
				MB_c2 = MB_c2+1;
				MB_a2 = MB_a2+MB_x;
			}
	}
	while(MB_c<MB_n);
	cout<<"\n\tRESULTADOS\n\n"<<endl;
	cout<<"Cantidad de monedas ingresadas: "<<MB_c<<endl;
	cout<<"Cantidad total de dinero contado: "<<MB_a<<endl;
	cout<<"Cantidad total de monedas de $0.10 ingresadas: "<<MB_c2<<endl;
	cout<<"Cantidad total en dinero de las monedas de $0.10: "<<MB_a2<<endl;
	cout<<"Cantidad total de monedas de $0.25 ingresadas: "<<MB_c1<<endl;
	cout<<"Cantidad total en dinero de las monedas de $0.25: "<<MB_a1<<endl;					
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Contador de monedas"<<endl;
	cout<<"//==> Archivo : MartinezBianka-cuentamoneda.cpp"<<endl;
	cout<<"//==>Autor: Martinez Bianka"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-04-29"<<endl;
	cout<<"//==>Fecha ultima actualización: 2022-05-13"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}
int MB_laadad()
{
	int MB_diaAct; 
	int MB_mesAct; 
	int MB_anoAct; 
	int MB_diaNac; 
	int MB_mesNac; 
	int MB_anoNac;			
	int MB_anoR, MB_mesR, MB_diaR;
		
	cout<<"\n\tEdad\n\n";
	cout << "Ingrese Año Actual: ";   cin >> MB_anoAct;
	cout << "Ingrese Mes Actual: ";   cin >> MB_mesAct;
	cout << "Ingrese Dia Actual: ";  cin >> MB_diaAct;
	cout << "\nIngrese Año Nacimiento: ";  cin >> MB_anoNac;
	cout << "Ingrese Mes de Nacimiento: ";  cin >> MB_mesNac;
	cout << "Ingrese Dia de Nacimiento: ";  cin >> MB_diaNac;			
	if (MB_anoAct > MB_anoNac)
	{
		if(MB_mesAct > MB_mesNac)	 
		{
			MB_anoR=MB_anoAct-MB_anoNac;	
			MB_mesR=MB_mesAct-MB_mesNac;					
		}
		else
		{
			MB_anoR=MB_anoAct-MB_anoNac-1;	
			MB_mesR=(MB_mesAct+12)-MB_mesNac;					
		}												
		if(MB_diaAct > MB_diaNac)
		{				
			MB_diaR=MB_diaAct-MB_diaNac;
		}
		else
		{
			MB_mesR=MB_mesR-1;
			MB_diaR=(MB_diaAct+30)-MB_diaNac;
		}	
		cout << "\nUd. tiene:\n";
		cout << " Edad: " <<MB_anoR<< endl;
		cout << " Mes: " <<MB_mesR << endl;
		cout << " Dia: " << MB_diaR << endl;								
	}
	else
	{
		 cout << "\n Calculo no es posible ";
	}
    cout<<"//==========Nombre del programa: la edad"<<endl;
    cout<<"//==========Archivo: MartinezBianka-laedad.cpp"<<endl;
    cout<<"//==========Autor: Martinez Bianka"<<endl;
    cout<<"//==========Fecha de elaboracion: 29-04-2022"<<endl;
    cout<<"//==========Fecha de actualizacion: 14-05-2022"<<endl;
	return 0;
}
int MB_PuntoVenta()
{
	float MB_xx, MB_cc, MB_at, MB_nn, MB_vb, MB_viva, MB_vdes, MB_vfi, MB_vft;
	MB_cc = 0;
	MB_at = 0;
	cout<<"\n\tPunto de Venta\n\n"<<endl;
	cout<<"Ingrese la cantidad de los productos que desea vender:  ";   cin >> MB_nn;			
	do
	{
		cout<<"Ingrese el valor del producto " <<MB_cc+1 <<": " ;   cin>> MB_xx;
		MB_cc = MB_cc+1;
		MB_at = MB_at+MB_xx;
	}
	while(MB_cc<MB_nn);			
	MB_vb = MB_at;
	MB_viva = MB_vb*0.12;
	MB_vdes = MB_vb*0.10;
	MB_vfi = MB_vb+MB_viva;
	MB_vft = MB_vfi-MB_vdes;
	cout<<"\n\tResultado\n\n"<<endl;
	cout<<"Valor con iva es: "<<MB_vfi<<endl;
	cout<<"Valor final es: "<<MB_vft<<endl;
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Punto de venta"<<endl;
	cout<<"//==> Archivo : MartinezBianka-puntodeventa.cpp"<<endl;
	cout<<"//==>Autor: Martinez Bianka"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-04-29"<<endl;
	cout<<"//==>Fecha ultima actualización: 2022-05-13"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}
int MB_Suma()
{
	int MB_ax, MB_bx, MB_cx;
	cout<<"\n\tSUMA DE 2 NÚMEROS"<<endl;
	cout<<"Ingrese el primer número a sumar: "; cin>>MB_ax;
	cout<<"Ingrese el segundo número a sumar: "; cin>>MB_bx;
	MB_cx = MB_ax+MB_bx;
	cout<<"\n\tResultado"<<endl;
	cout<<"El resultado de la suma entre "<<MB_ax<<" + "<<MB_bx<<" es igual a: "<<MB_cx<<endl;
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: suma de 2 numeros"<<endl;
	cout<<"//==> Archivo : MartinezBianka-suma.cpp"<<endl;
	cout<<"//==>Autor: Martinez Bianka"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-04-29"<<endl;
	cout<<"//==>Fecha ultima actualizaci?n: 2022-05-13"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}
int MB_Menu()
{
	int opcion, flag;
	do
	{
		system("cls");
		menu:
		cout<<"\n\n\t\t\t\t----------BIENVENIDOS-----------"<<endl;
		cout<<"\t\t\t----------Fundamento de Programacion-----------"<<endl;
		cout<<"\t\t\t----------------Submenú de opciones----------------"<<endl;
		cout<<"\t\t\t------------------------------------------------"<<endl;
		cout<<"1. comparar numero"<<endl;
		cout<<"2. Cuenta monedas"<<endl;
		cout<<"3. Calcular la edad"<<endl;
		cout<<"4. Punto de venta"<<endl;
		cout<<"5. Suma de dos numeros"<<endl;
		cout<<"0. Para salir al menu principal"<<endl;
		cout<<"INGRESE UNA OPCIÓN: "; cin>>opcion;
		switch (opcion)
		{
			
			case 1:
				system("cls");
				MB_compara();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 2:
				system("cls");
				MB_cuentamoneda();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 3:
				system("cls");
				MB_laadad();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 4:
				system("cls");
				MB_PuntoVenta();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 5:
				system("cls");
				MB_Suma();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			if(opcion!=0 && opcion>0)
			{
				cout << "\nopcion no permitida !\n" <<  "Press Enter to continue\n";	    // pause the program until user input
			}		  
			if(opcion==0)
			{
				cout<<"Quieres salir completamente del sistema (presiona ENTER) : "<<endl;

			}
				flag=cin.ignore().get();
				cout<<flag<<endl;
		}
	}
	while(opcion != 0);
	return(0);
}	
