	Proañojose-la¿  ¿                                                  //===Nombre del programa:la Edad
    //===Autor: Proaño Jose Luis 
¿  3 //===ARCHIVO: La Edad.cpp
¿  4 //===FECHA DE ELABORACION:01-05-2022
¿  5 //===FECHA ULTIMA DE ACTUALIZACION: 13-05-2022
¿  6
¿  7
¿  8 #include <iostream>
¿  9 #include <cstdlib>
¿ 10 #include <locale.h>
¿ 11 using namespace std;
¿ 12
¿ 13 void calcularEdad( int anioAct , int mesAct, int fechAct, int anioNac, int mesNac, int fechNac);
¿ 14
¿ 15 int main (){
¿ 16
¿ 17         setlocale(LC_ALL, "");
¿ 18   ¿ int anioAct;
¿ 19   ¿ int mesAct;
¿ 20   ¿ int fechAct;
¿ 21
¿ 22   ¿ int anioNac;
¿ 23   ¿ int mesNac;
¿ 24   ¿ int fechNac;
¿ 25
¿ 26         cout<<"\n\tEdad\n\n";
¿ 27   ¿ cout << "Ingrese Año Actual: ";   cin >> anioAct;
¿ 28   ¿ cout << "Ingrese Mes Actual: ";   cin >> mesAct;
¿ 29   ¿ cout << "Ingrese Fecha Actual: ";  cin >> fechAct;
¿ 30
¿ 31   ¿ cout << "\nIngrese Año Nacimiento: ";  cin >> anioNac;
¿ 32   ¿ cout << "Ingrese Mes de Nacimiento: ";  cin >> mesNac;
¿ 33   ¿ cout << "Ingrese Fecha de Nacimiento: ";  cin >> fechNac;
¿ 34
¿ 35   ¿ calcularEdad( anioAct , mesAct, fechAct, anioNac, mesNac, fechNac);
¿ 36
¿ 37   ¿ return 0;
¿ 38 }
¿ 39
¿ 40
¿ 41 void calcularEdad( int anioAct , int mesAct, int fechAct, int anioNac, int mesNac, int fechNac)
¿ 42 {
¿ 43   ¿ int respFech , respMes;
¿ 44
¿ 45   ¿ if ( fechAct < fechNac  )
¿ 46   ¿ {
¿ 47   ¿ ¿ ¿ fechAct = fechAct + 30;
¿ 48   ¿ ¿ ¿ mesAct = mesAct - 1;
¿ 49   ¿ ¿ ¿ respFech =  fechAct - fechNac;
¿ 50   ¿ }else
¿ 51   ¿ ¿ ¿ respFech =  fechAct - fechNac;
¿ 52
¿ 53   ¿ if( mesAct < mesNac )
¿ 54   ¿ {
¿ 55   ¿ ¿ ¿ mesAct = mesAct + 12;
¿ 56   ¿ ¿ ¿ anioAct = anioAct - 1 ;
¿ 57   ¿ ¿ ¿ respMes = mesAct - mesNac;
¿ 58   ¿ }else
¿ 59   ¿ ¿ ¿ respMes = mesAct - mesNac;
¿ 60
¿ 61   ¿ cout << "\nUd. tiene:\n";
¿ 62   ¿ cout << " Edad: " <<anioAct - anioNac << endl;
¿ 63 ¿ cout << " Mes: " << respMes << endl;
¿ 64   ¿ cout << " Dia: " << respFech << endl;
¿ 65 }
¿ 66   ¿
¿ 67   ¿
¿ 68   ¿ {
¿ 69
¿ 70
¿ 71   cout<<endl<<"//========================================="<<end;
¿ 72   cout << "//===> Nombre del programa: La Edad"<<endl;
¿ 73   cout << "//===> Archivo: LaEdad.cpp"<<endl;
¿ 74   cout << "//===> Autor: Proaño Jose Luis"<<endl;
¿ 75   cout << "//===> Fecha de elaboracion: 01-05-2022"<<endl;
¿ 76   cout << "//===> Fecha de actualizacion: 13-05-2022"<<endl;
¿ 77   cout << "//========================================="<<endl;
¿ 78
¿ 79
¿ 80   return 0;
¿ 81   ¿ }
¿ 82
