//fuciones de Gracia Lizbeth
int GL_compara()
{
	int GL_aa, GL_bb ;
 	cout<<"Ingrese el primer numero a comparar: ";  cin>> GL_aa;  
 	cout<<"Ingrese el segundo numero a comparar: ";  cin>> GL_bb;
	if (GL_aa==GL_bb)
	{
		cout<<"Son iguales"<<endl;
	}
	else
	{
		if (GL_aa>GL_bb)
		{
		cout<<GL_aa<<" es mayor"<<endl;
		}
		else
		{
		cout<<GL_bb<<" es mayor"<<endl;
		}
	}					
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Compara"<<endl;
	cout<<"//==> Archivo : GraciaLizbeth-compara.cpp"<<endl;
	cout<<"//==>Autor: Gracia Lizbeth"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-04-29"<<endl;
	cout<<"//==>Fecha ultima actualizaci?n: 2022-05-13"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}
int GL_cuentamoneda()
{
	int GL_n,GL_c, GL_c1, GL_c2, GL_cl, GL_cz;
	float GL_x, GL_al, GL_a, GL_a1, GL_a2, GL_az;
	GL_c = 0;
	GL_c1 = 0;
	GL_c2 = 0;
	GL_a = 0;
	GL_a1 = 0;
	GL_a2 = 0;
	cout<<"\n\tCONTADOR DE MONEDAS\n\n"<<endl;
	cout<<"Cantidad de monedas a ingresar: ";  cin>>GL_n;
	do
	{
		cout<<"Ingrese el valor de la moneda (0.10 - 0.25): ";  cin>>GL_x;
		GL_c = GL_c+1;
		GL_a = GL_a+GL_x;
		if(GL_x==0.25)
			{
				GL_c1 = GL_c1+1;
				GL_a1 = GL_x+GL_a1;
			}
		else
			{
				GL_c2 = GL_c2+1;
				GL_a2 = GL_a2+GL_x;
			}
	}
	while(GL_c<GL_n);
	cout<<"\n\tRESULTADOS\n\n"<<endl;
	cout<<"Cantidad de monedas ingresadas: "<<GL_c<<endl;
	cout<<"Cantidad total de dinero contado: "<<GL_a<<endl;
	cout<<"Cantidad total de monedas de $0.10 ingresadas: "<<GL_c2<<endl;
	cout<<"Cantidad total en dinero de las monedas de $0.10: "<<GL_a2<<endl;
	cout<<"Cantidad total de monedas de $0.25 ingresadas: "<<GL_c1<<endl;
	cout<<"Cantidad total en dinero de las monedas de $0.25: "<<GL_a1<<endl;					
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Contador de monedas"<<endl;
	cout<<"//==> Archivo : GraciaLizbeth-cuentamoneda.cpp"<<endl;
	cout<<"//==>Autor: Gracia Lizbeth"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-04-29"<<endl;
	cout<<"//==>Fecha ultima actualización: 2022-05-13"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}
int GL_laadad()
{
	int GL_diaAct; 
	int GL_mesAct; 
	int GL_anoAct; 
	int GL_diaNac; 
	int GL_mesNac; 
	int GL_anoNac;			
	int GL_anoR, GL_mesR, GL_diaR;
		
	cout<<"\n\tEdad\n\n";
	cout << "Ingrese Año Actual: ";   cin >> GL_anoAct;
	cout << "Ingrese Mes Actual: ";   cin >> GL_mesAct;
	cout << "Ingrese Dia Actual: ";  cin >> GL_diaAct;
	cout << "\nIngrese Año Nacimiento: ";  cin >> GL_anoNac;
	cout << "Ingrese Mes de Nacimiento: ";  cin >> GL_mesNac;
	cout << "Ingrese Dia de Nacimiento: ";  cin >> GL_diaNac;			
	if (GL_anoAct > GL_anoNac)
	{
		if(GL_mesAct > GL_mesNac)	 
		{
			GL_anoR=GL_anoAct-GL_anoNac;	
			GL_mesR=GL_mesAct-GL_mesNac;					
		}
		else
		{
			GL_anoR=GL_anoAct-GL_anoNac-1;	
			GL_mesR=(GL_mesAct+12)-GL_mesNac;					
		}												
		if(GL_diaAct > GL_diaNac)
		{				
			GL_diaR=GL_diaAct-GL_diaNac;
		}
		else
		{
			GL_mesR=GL_mesR-1;
			GL_diaR=(GL_diaAct+30)-GL_diaNac;
		}	
		cout << "\nUd. tiene:\n";
		cout << " Edad: " <<GL_anoR<< endl;
		cout << " Mes: " <<GL_mesR << endl;
		cout << " Dia: " << GL_diaR << endl;								
	}
	else
	{
		 cout << "\n Calculo no es posible ";
	}
    cout<<"//==========Nombre del programa: la edad"<<endl;
    cout<<"//==========Archivo: GraciaLizbeth-laedad.cpp"<<endl;
    cout<<"//==========Autor: Gracia Lizbeth"<<endl;
    cout<<"//==========Fecha de elaboracion: 29-04-2022"<<endl;
    cout<<"//==========Fecha de actualizacion: 14-05-2022"<<endl;
	return 0;
}
int GL_PuntoVenta()
{
	float GL_xx, GL_cc, GL_at, GL_nn, GL_vb, GL_viva, GL_vdes, GL_vfi, GL_vft;
	GL_cc = 0;
	GL_at = 0;
	cout<<"\n\tPunto de Venta\n\n"<<endl;
	cout<<"Ingrese la cantidad de los productos que desea vender:  ";   cin >> GL_nn;			
	do
	{
		cout<<"Ingrese el valor del producto " <<GL_cc+1 <<": " ;   cin>> GL_xx;
		GL_cc = GL_cc+1;
		GL_at = GL_at+GL_xx;
	}
	while(GL_cc<GL_nn);			
	GL_vb = GL_at;
	GL_viva = GL_vb*0.12;
	GL_vdes = GL_vb*0.10;
	GL_vfi = GL_vb+GL_viva;
	GL_vft = GL_vfi-GL_vdes;
	cout<<"\n\tResultado\n\n"<<endl;
	cout<<"Valor con iva es: "<<GL_vfi<<endl;
	cout<<"Valor final es: "<<GL_vft<<endl;
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Punto de venta"<<endl;
	cout<<"//==> Archivo : GraciaLizbeth-puntodeventa.cpp"<<endl;
	cout<<"//==>Autor: Gracia Lizbeth"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-04-29"<<endl;
	cout<<"//==>Fecha ultima actualización: 2022-05-13"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}
int GL_Suma()
{
	int GL_ax, GL_bx, GL_cx;
	cout<<"\n\tSUMA DE 2 NÚMEROS"<<endl;
	cout<<"Ingrese el primer número a sumar: "; cin>>GL_ax;
	cout<<"Ingrese el segundo número a sumar: "; cin>>GL_bx;
	GL_cx = GL_ax+GL_bx;
	cout<<"\n\tResultado"<<endl;
	cout<<"El resultado de la suma entre "<<GL_ax<<" + "<<GL_bx<<" es igual a: "<<GL_cx<<endl;
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: suma de 2 numeros"<<endl;
	cout<<"//==> Archivo : GraciaLizbeth-suma.cpp"<<endl;
	cout<<"//==>Autor: Gracia Lizbeth"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-04-29"<<endl;
	cout<<"//==>Fecha ultima actualizaci?n: 2022-05-13"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}
int GL_Menu()
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
				GL_compara();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 2:
				system("cls");
				GL_cuentamoneda();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 3:
				system("cls");
				GL_laadad();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 4:
				system("cls");
				GL_PuntoVenta();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 5:
				system("cls");
				GL_Suma();
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
