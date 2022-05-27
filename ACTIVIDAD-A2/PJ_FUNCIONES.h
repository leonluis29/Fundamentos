//fuciones de Proaño Jose
int PJ_compara()
{
	int PJ_aa, PJ_bb ;
 	cout<<"Ingrese el primer numero a comparar: ";  cin>> PJ_aa;  
 	cout<<"Ingrese el segundo numero a comparar: ";  cin>> PJ_bb;
	if (PJ_aa==PJ_bb)
	{
		cout<<"Son iguales"<<endl;
	}
	else
	{
		if (PJ_aa>PJ_bb)
		{
		cout<<PJ_aa<<" es mayor"<<endl;
		}
		else
		{
		cout<<PJ_bb<<" es mayor"<<endl;
		}
	}					
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Compara"<<endl;
	cout<<"//==> Archivo : Proañojose-compara.cpp"<<endl;
	cout<<"//==>Autor: Proaño Jose"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-04-29"<<endl;
	cout<<"//==>Fecha ultima actualizaci?n: 2022-05-13"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}
int PJ_cuentamoneda()
{
	int PJ_n,PJ_c, PJ_c1, PJ_c2, PJ_cl, PJ_cz;
	float PJ_x, PJ_al, PJ_a, PJ_a1, PJ_a2, PJ_az;
	PJ_c = 0;
	PJ_c1 = 0;
	PJ_c2 = 0;
	PJ_a = 0;
	PJ_a1 = 0;
	PJ_a2 = 0;
	cout<<"\n\tCONTADOR DE MONEDAS\n\n"<<endl;
	cout<<"Cantidad de monedas a ingresar: ";  cin>>PJ_n;
	do
	{
		cout<<"Ingrese el valor de la moneda (0.10 - 0.25): ";  cin>>PJ_x;
		PJ_c = PJ_c+1;
		PJ_a = PJ_a+PJ_x;
		if(PJ_x==0.25)
			{
				PJ_c1 = PJ_c1+1;
				PJ_a1 = PJ_x+PJ_a1;
			}
		else
			{
				PJ_c2 = PJ_c2+1;
				PJ_a2 = PJ_a2+PJ_x;
			}
	}
	while(PJ_c<PJ_n);
	cout<<"\n\tRESULTADOS\n\n"<<endl;
	cout<<"Cantidad de monedas ingresadas: "<<PJ_c<<endl;
	cout<<"Cantidad total de dinero contado: "<<PJ_a<<endl;
	cout<<"Cantidad total de monedas de $0.10 ingresadas: "<<PJ_c2<<endl;
	cout<<"Cantidad total en dinero de las monedas de $0.10: "<<PJ_a2<<endl;
	cout<<"Cantidad total de monedas de $0.25 ingresadas: "<<PJ_c1<<endl;
	cout<<"Cantidad total en dinero de las monedas de $0.25: "<<PJ_a1<<endl;					
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Contador de monedas"<<endl;
	cout<<"//==> Archivo : Proañojose-cuentamoneda.cpp"<<endl;
	cout<<"//==>Autor: PROAÑO JOSE"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-04-29"<<endl;
	cout<<"//==>Fecha ultima actualización: 2022-05-13"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}
int PJ_laadad()
{
	int PJ_diaAct; 
	int PJ_mesAct; 
	int PJ_anoAct; 
	int PJ_diaNac; 
	int PJ_mesNac; 
	int PJ_anoNac;			
	int PJ_anoR, PJ_mesR, PJ_diaR;
		
	cout<<"\n\tEdad\n\n";
	cout << "Ingrese Año Actual: ";   cin >> PJ_anoAct;
	cout << "Ingrese Mes Actual: ";   cin >> PJ_mesAct;
	cout << "Ingrese Dia Actual: ";  cin >> PJ_diaAct;
	cout << "\nIngrese Año Nacimiento: ";  cin >> PJ_anoNac;
	cout << "Ingrese Mes de Nacimiento: ";  cin >> PJ_mesNac;
	cout << "Ingrese Dia de Nacimiento: ";  cin >> PJ_diaNac;			
	if (PJ_anoAct > PJ_anoNac)
	{
		if(PJ_mesAct > PJ_mesNac)	 
		{
			PJ_anoR=PJ_anoAct-PJ_anoNac;	
			PJ_mesR=PJ_mesAct-PJ_mesNac;					
		}
		else
		{
			PJ_anoR=PJ_anoAct-PJ_anoNac-1;	
			PJ_mesR=(PJ_mesAct+12)-PJ_mesNac;					
		}												
		if(PJ_diaAct > PJ_diaNac)
		{				
			PJ_diaR=PJ_diaAct-PJ_diaNac;
		}
		else
		{
			PJ_mesR=PJ_mesR-1;
			PJ_diaR=(PJ_diaAct+30)-PJ_diaNac;
		}	
		cout << "\nUd. tiene:\n";
		cout << " Edad: " <<PJ_anoR<< endl;
		cout << " Mes: " <<PJ_mesR << endl;
		cout << " Dia: " << PJ_diaR << endl;								
	}
	else
	{
		 cout << "\n Calculo no es posible ";
	}
    cout<<"//==========Nombre del programa: la edad"<<endl;
    cout<<"//==========Archivo: Proañojose-laedad.cpp"<<endl;
    cout<<"//==========Autor: PROAÑO JOSE"<<endl;
    cout<<"//==========Fecha de elaboracion: 29-04-2022"<<endl;
    cout<<"//==========Fecha de actualizacion: 14-05-2022"<<endl;
	return 0;
}
int PJ_PuntoVenta()
{
	float PJ_xx, PJ_cc, PJ_at, PJ_nn, PJ_vb, PJ_viva, PJ_vdes, PJ_vfi, PJ_vft;
	PJ_cc = 0;
	PJ_at = 0;
	cout<<"\n\tPunto de Venta\n\n"<<endl;
	cout<<"Ingrese la cantidad de los productos que desea vender:  ";   cin >> PJ_nn;			
	do
	{
		cout<<"Ingrese el valor del producto " <<PJ_cc+1 <<": " ;   cin>> PJ_xx;
		PJ_cc = PJ_cc+1;
		PJ_at = PJ_at+PJ_xx;
	}
	while(PJ_cc<PJ_nn);			
	PJ_vb = PJ_at;
	PJ_viva = PJ_vb*0.12;
	PJ_vdes = PJ_vb*0.10;
	PJ_vfi = PJ_vb+PJ_viva;
	PJ_vft = PJ_vfi-PJ_vdes;
	cout<<"\n\tResultado\n\n"<<endl;
	cout<<"Valor con iva es: "<<PJ_vfi<<endl;
	cout<<"Valor final es: "<<PJ_vft<<endl;
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Punto de venta"<<endl;
	cout<<"//==> Archivo : Proañojose-puntodeventa.cpp"<<endl;
	cout<<"//==>Autor: Proaño Jose"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-04-29"<<endl;
	cout<<"//==>Fecha ultima actualización: 2022-05-13"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}
int PJ_Suma()
{
	int PJ_ax, PJ_bx, PJ_cx;
	cout<<"\n\tSUMA DE 2 NÚMEROS"<<endl;
	cout<<"Ingrese el primer número a sumar: "; cin>>PJ_ax;
	cout<<"Ingrese el segundo número a sumar: "; cin>>PJ_bx;
	PJ_cx = PJ_ax+PJ_bx;
	cout<<"\n\tResultado"<<endl;
	cout<<"El resultado de la suma entre "<<PJ_ax<<" + "<<PJ_bx<<" es igual a: "<<PJ_cx<<endl;
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: suma de 2 numeros"<<endl;
	cout<<"//==> Archivo : Proañojose-suma.cpp"<<endl;
	cout<<"//==>Autor: PROAÑO JOSE"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-04-29"<<endl;
	cout<<"//==>Fecha ultima actualizaci?n: 2022-05-13"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}
int PJ_Menu()
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
				PJ_compara();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 2:
				system("cls");
				PJ_cuentamoneda();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 3:
				system("cls");
				PJ_laadad();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 4:
				system("cls");
				PJ_PuntoVenta();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 5:
				system("cls");
				PJ_Suma();
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
