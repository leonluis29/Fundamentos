//fuciones de Leon Bryan
int BL_compara()
{
	int BL_aa, BL_bb ;
 	cout<<"Ingrese el primer numero a comparar: ";  cin>> BL_aa;  
 	cout<<"Ingrese el segundo numero a comparar: ";  cin>> BL_bb;
	if (BL_aa==BL_bb)
	{
		cout<<"Son iguales"<<endl;
	}
	else
	{
		if (BL_aa>BL_bb)
		{
		cout<<BL_aa<<" es mayor"<<endl;
		}
		else
		{
		cout<<BL_bb<<" es mayor"<<endl;
		}
	}					
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Compara"<<endl;
	cout<<"//==> Archivo : LeonBryan-compara.cpp"<<endl;
	cout<<"//==>Autor: Bryan Leon"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-04-29"<<endl;
	cout<<"//==>Fecha ultima actualizaci?n: 2022-05-13"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}
int BL_cuentamoneda()
{
	int BL_n,BL_c, BL_c1, BL_c2, BL_cl, BL_cz;
	float BL_x, BL_al, BL_a, BL_a1, BL_a2, BL_az;
	BL_c = 0;
	BL_c1 = 0;
	BL_c2 = 0;
	BL_a = 0;
	BL_a1 = 0;
	BL_a2 = 0;
	cout<<"\n\tCONTADOR DE MONEDAS\n\n"<<endl;
	cout<<"Cantidad de monedas a ingresar: ";  cin>>BL_n;
	do
	{
		cout<<"Ingrese el valor de la moneda (0.10 - 0.25): ";  cin>>BL_x;
		BL_c = BL_c+1;
		BL_a = BL_a+BL_x;
		if(BL_x==0.25)
			{
				BL_c1 = BL_c1+1;
				BL_a1 = BL_x+BL_a1;
			}
		else
			{
				BL_c2 = BL_c2+1;
				BL_a2 = BL_a2+BL_x;
			}
	}
	while(BL_c<BL_n);
	cout<<"\n\tRESULTADOS\n\n"<<endl;
	cout<<"Cantidad de monedas ingresadas: "<<BL_c<<endl;
	cout<<"Cantidad total de dinero contado: "<<BL_a<<endl;
	cout<<"Cantidad total de monedas de $0.10 ingresadas: "<<BL_c2<<endl;
	cout<<"Cantidad total en dinero de las monedas de $0.10: "<<BL_a2<<endl;
	cout<<"Cantidad total de monedas de $0.25 ingresadas: "<<BL_c1<<endl;
	cout<<"Cantidad total en dinero de las monedas de $0.25: "<<BL_a1<<endl;					
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Contador de monedas"<<endl;
	cout<<"//==> Archivo : LeonBryan-cuentamoneda.cpp"<<endl;
	cout<<"//==>Autor: Leon Bryan"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-04-29"<<endl;
	cout<<"//==>Fecha ultima actualización: 2022-05-13"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}
int BL_laadad()
{
	int BL_diaAct; 
	int BL_mesAct; 
	int BL_anoAct; 
	int BL_diaNac; 
	int BL_mesNac; 
	int BL_anoNac;			
	int BL_anoR, BL_mesR, BL_diaR;
		
	cout<<"\n\tEdad\n\n";
	cout << "Ingrese Año Actual: ";   cin >> BL_anoAct;
	cout << "Ingrese Mes Actual: ";   cin >> BL_mesAct;
	cout << "Ingrese Dia Actual: ";  cin >> BL_diaAct;
	cout << "\nIngrese Año Nacimiento: ";  cin >> BL_anoNac;
	cout << "Ingrese Mes de Nacimiento: ";  cin >> BL_mesNac;
	cout << "Ingrese Dia de Nacimiento: ";  cin >> BL_diaNac;			
	if (BL_anoAct > BL_anoNac)
	{
		if(BL_mesAct > BL_mesNac)	 
		{
			BL_anoR=BL_anoAct-BL_anoNac;	
			BL_mesR=BL_mesAct-BL_mesNac;					
		}
		else
		{
			BL_anoR=BL_anoAct-BL_anoNac-1;	
			BL_mesR=(BL_mesAct+12)-BL_mesNac;					
		}												
		if(BL_diaAct > BL_diaNac)
		{				
			BL_diaR=BL_diaAct-BL_diaNac;
		}
		else
		{
			BL_mesR=BL_mesR-1;
			BL_diaR=(BL_diaAct+30)-BL_diaNac;
		}	
		cout << "\nUd. tiene:\n";
		cout << " Edad: " <<BL_anoR<< endl;
		cout << " Mes: " <<BL_mesR << endl;
		cout << " Dia: " << BL_diaR << endl;								
	}
	else
	{
		 cout << "\n Calculo no es posible ";
	}
    cout<<"//==========Nombre del programa: la edad"<<endl;
    cout<<"//==========Archivo: LeonBryan-laedad.cpp"<<endl;
    cout<<"//==========Autor: Leon Bryan"<<endl;
    cout<<"//==========Fecha de elaboracion: 29-04-2022"<<endl;
    cout<<"//==========Fecha de actualizacion: 14-05-2022"<<endl;
	return 0;
}
int BL_PuntoVenta()
{
	float BL_xx, BL_cc, BL_at, BL_nn, BL_vb, BL_viva, BL_vdes, BL_vfi, BL_vft;
	BL_cc = 0;
	BL_at = 0;
	cout<<"\n\tPunto de Venta\n\n"<<endl;
	cout<<"Ingrese la cantidad de los productos que desea vender:  ";   cin >> BL_nn;			
	do
	{
		cout<<"Ingrese el valor del producto " <<BL_cc+1 <<": " ;   cin>> BL_xx;
		BL_cc = BL_cc+1;
		BL_at = BL_at+BL_xx;
	}
	while(BL_cc<BL_nn);			
	BL_vb = BL_at;
	BL_viva = BL_vb*0.12;
	BL_vdes = BL_vb*0.10;
	BL_vfi = BL_vb+BL_viva;
	BL_vft = BL_vfi-BL_vdes;
	cout<<"\n\tResultado\n\n"<<endl;
	cout<<"Valor con iva es: "<<BL_vfi<<endl;
	cout<<"Valor final es: "<<BL_vft<<endl;
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Punto de venta"<<endl;
	cout<<"//==> Archivo : LeonBryan-puntodeventa.cpp"<<endl;
	cout<<"//==>Autor: Proaño Jose"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-04-29"<<endl;
	cout<<"//==>Fecha ultima actualización: 2022-05-13"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}
int BL_Suma()
{
	int BL_ax, BL_bx, BL_cx;
	cout<<"\n\tSUMA DE 2 NÚMEROS"<<endl;
	cout<<"Ingrese el primer número a sumar: "; cin>>BL_ax;
	cout<<"Ingrese el segundo número a sumar: "; cin>>BL_bx;
	BL_cx = BL_ax+BL_bx;
	cout<<"\n\tResultado"<<endl;
	cout<<"El resultado de la suma entre "<<BL_ax<<" + "<<BL_bx<<" es igual a: "<<BL_cx<<endl;
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: suma de 2 numeros"<<endl;
	cout<<"//==> Archivo : LeonBryan-suma.cpp"<<endl;
	cout<<"//==>Autor: Leon Bryan"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-04-29"<<endl;
	cout<<"//==>Fecha ultima actualizaci?n: 2022-05-13"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}
int BL_Menu()
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
				BL_compara();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 2:
				system("cls");
				BL_cuentamoneda();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 3:
				system("cls");
				BL_laadad();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 4:
				system("cls");
				BL_PuntoVenta();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 5:
				system("cls");
				BL_Suma();
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
