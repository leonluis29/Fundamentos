//fuciones de Penafiel Girabel
int PG_compara()
{
	int PG_aa, PG_bb ;
 	cout<<"Ingrese el primer numero a comparar: ";  cin>> PG_aa;  
 	cout<<"Ingrese el segundo numero a comparar: ";  cin>> PG_bb;
	if (PG_aa==PG_bb)
	{
		cout<<"Son iguales"<<endl;
	}
	else
	{
		if (PG_aa>PG_bb)
		{
		cout<<PG_aa<<" es mayor"<<endl;
		}
		else
		{
		cout<<PG_bb<<" es mayor"<<endl;
		}
	}					
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Compara"<<endl;
	cout<<"//==> Archivo : PenafielGirabel-compara.cpp"<<endl;
	cout<<"//==>Autor: Penafiel Girabel"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-04-29"<<endl;
	cout<<"//==>Fecha ultima actualizaci?n: 2022-05-13"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}
int PG_cuentamoneda()
{
	int PG_n,PG_c, PG_c1, PG_c2, PG_cl, PG_cz;
	float PG_x, PG_al, PG_a, PG_a1, PG_a2, PG_az;
	PG_c = 0;
	PG_c1 = 0;
	PG_c2 = 0;
	PG_a = 0;
	PG_a1 = 0;
	PG_a2 = 0;
	cout<<"\n\tCONTADOR DE MONEDAS\n\n"<<endl;
	cout<<"Cantidad de monedas a ingresar: ";  cin>>PG_n;
	do
	{
		cout<<"Ingrese el valor de la moneda (0.10 - 0.25): ";  cin>>PG_x;
		PG_c = PG_c+1;
		PG_a = PG_a+PG_x;
		if(PG_x==0.25)
			{
				PG_c1 = PG_c1+1;
				PG_a1 = PG_x+PG_a1;
			}
		else
			{
				PG_c2 = PG_c2+1;
				PG_a2 = PG_a2+PG_x;
			}
	}
	while(PG_c<PG_n);
	cout<<"\n\tRESULTADOS\n\n"<<endl;
	cout<<"Cantidad de monedas ingresadas: "<<PG_c<<endl;
	cout<<"Cantidad total de dinero contado: "<<PG_a<<endl;
	cout<<"Cantidad total de monedas de $0.10 ingresadas: "<<PG_c2<<endl;
	cout<<"Cantidad total en dinero de las monedas de $0.10: "<<PG_a2<<endl;
	cout<<"Cantidad total de monedas de $0.25 ingresadas: "<<PG_c1<<endl;
	cout<<"Cantidad total en dinero de las monedas de $0.25: "<<PG_a1<<endl;					
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Contador de monedas"<<endl;
	cout<<"//==> Archivo : PenafielGirabel-cuentamoneda.cpp"<<endl;
	cout<<"//==>Autor: Penafiel Girabel"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-04-29"<<endl;
	cout<<"//==>Fecha ultima actualización: 2022-05-13"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}
int PG_laadad()
{
	int PG_diaAct; 
	int PG_mesAct; 
	int PG_anoAct; 
	int PG_diaNac; 
	int PG_mesNac; 
	int PG_anoNac;			
	int PG_anoR, PG_mesR, PG_diaR;
		
	cout<<"\n\tEdad\n\n";
	cout << "Ingrese Año Actual: ";   cin >> PG_anoAct;
	cout << "Ingrese Mes Actual: ";   cin >> PG_mesAct;
	cout << "Ingrese Dia Actual: ";  cin >> PG_diaAct;
	cout << "\nIngrese Año Nacimiento: ";  cin >> PG_anoNac;
	cout << "Ingrese Mes de Nacimiento: ";  cin >> PG_mesNac;
	cout << "Ingrese Dia de Nacimiento: ";  cin >> PG_diaNac;			
	if (PG_anoAct > PG_anoNac)
	{
		if(PG_mesAct > PG_mesNac)	 
		{
			PG_anoR=PG_anoAct-PG_anoNac;	
			PG_mesR=PG_mesAct-PG_mesNac;					
		}
		else
		{
			PG_anoR=PG_anoAct-PG_anoNac-1;	
			PG_mesR=(PG_mesAct+12)-PG_mesNac;					
		}												
		if(PG_diaAct > PG_diaNac)
		{				
			PG_diaR=PG_diaAct-PG_diaNac;
		}
		else
		{
			PG_mesR=PG_mesR-1;
			PG_diaR=(PG_diaAct+30)-PG_diaNac;
		}	
		cout << "\nUd. tiene:\n";
		cout << " Edad: " <<PG_anoR<< endl;
		cout << " Mes: " <<PG_mesR << endl;
		cout << " Dia: " << PG_diaR << endl;								
	}
	else
	{
		 cout << "\n Calculo no es posible ";
	}
    cout<<"//==========Nombre del programa: la edad"<<endl;
    cout<<"//==========Archivo: PenafielGirabel-laedad.cpp"<<endl;
    cout<<"//==========Autor: Penafiel Girabel"<<endl;
    cout<<"//==========Fecha de elaboracion: 29-04-2022"<<endl;
    cout<<"//==========Fecha de actualizacion: 14-05-2022"<<endl;
	return 0;
}
int PG_PuntoVenta()
{
	float PG_xx, PG_cc, PG_at, PG_nn, PG_vb, PG_viva, PG_vdes, PG_vfi, PG_vft;
	PG_cc = 0;
	PG_at = 0;
	cout<<"\n\tPunto de Venta\n\n"<<endl;
	cout<<"Ingrese la cantidad de los productos que desea vender:  ";   cin >> PG_nn;			
	do
	{
		cout<<"Ingrese el valor del producto " <<PG_cc+1 <<": " ;   cin>> PG_xx;
		PG_cc = PG_cc+1;
		PG_at = PG_at+PG_xx;
	}
	while(PG_cc<PG_nn);			
	PG_vb = PG_at;
	PG_viva = PG_vb*0.12;
	PG_vdes = PG_vb*0.10;
	PG_vfi = PG_vb+PG_viva;
	PG_vft = PG_vfi-PG_vdes;
	cout<<"\n\tResultado\n\n"<<endl;
	cout<<"Valor con iva es: "<<PG_vfi<<endl;
	cout<<"Valor final es: "<<PG_vft<<endl;
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Punto de venta"<<endl;
	cout<<"//==> Archivo : PenafielGirabel-puntodeventa.cpp"<<endl;
	cout<<"//==>Autor: Proaño Jose"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-04-29"<<endl;
	cout<<"//==>Fecha ultima actualización: 2022-05-13"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}
int PG_Suma()
{
	int PG_ax, PG_bx, PG_cx;
	cout<<"\n\tSUMA DE 2 NÚMEROS"<<endl;
	cout<<"Ingrese el primer número a sumar: "; cin>>PG_ax;
	cout<<"Ingrese el segundo número a sumar: "; cin>>PG_bx;
	PG_cx = PG_ax+PG_bx;
	cout<<"\n\tResultado"<<endl;
	cout<<"El resultado de la suma entre "<<PG_ax<<" + "<<PG_bx<<" es igual a: "<<PG_cx<<endl;
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: suma de 2 numeros"<<endl;
	cout<<"//==> Archivo : PenafielGirabel-suma.cpp"<<endl;
	cout<<"//==>Autor: Penafiel Girabel"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-04-29"<<endl;
	cout<<"//==>Fecha ultima actualizaci?n: 2022-05-13"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}
int PG_Menu()
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
				PG_compara();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 2:
				system("cls");
				PG_cuentamoneda();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 3:
				system("cls");
				PG_laadad();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 4:
				system("cls");
				PG_PuntoVenta();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 5:
				system("cls");
				PG_Suma();
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
