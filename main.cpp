#include <iostream>
/*Proyecto 2 programa para convertir un numero a letras por Ignacio Alvarado Chacón*/

using namespace std; //para usar nombres

int main() 
{
int numero;//declaro numero 
int unidades;//declaro unidades
int decenas;//declaro decenas
int centenas;//declaro centenas
int opcion=0;//opcion para salir
do
{

   cout << "Ingrese un número del 0 al 999: \n";//pido el numero 
   cin>>numero;//almanceno en variable numero
   cout <<"Ingrese 0 para salir o 1 para el resultado\n";//para salir del programa
   cin>>opcion; //leo para salir
      unidades=(numero%10);//divido entre 10 para las unidades
   decenas=(numero/10)%10;//divido entre 10 y luego busco el residuo
   centenas=(numero/100);//divido entre 100 para las decenas
   cout<<"El numero seria: "<<endl;
   cout<<"Unidades: "<<unidades<<"  Decenas: "<<decenas<<" Centenas: "<<centenas<<endl;
   //inicio con centenas
  
     //inicio con centenas
   if(centenas==0)
   {
     cout<<" ";
   }
   if(centenas==1)
   {
     cout<<"Ciento ";
   }
    if(centenas==2)
   {
     cout<<"Doscientos ";
   }
    if(centenas==3)
   {
     cout<<"Trescientos ";
   }
    if(centenas==4)
   {
     cout<<"Cuatrocientos ";
   }
    if(centenas==5)
   {
     cout<<"Quinientos ";
   }
    if(centenas==6)
   {
     cout<<"Seiscientos ";
   }
    if(centenas==7)
   {
     cout<<"Setecientos ";
   }
    if(centenas==8)
   {
     cout<<"Ochocientos ";
   }
    if(centenas==9)
   {
     cout<<"Novecientos ";
   }
   //termino las centenas e inicio decenas
    if(decenas==0)
   {
     cout<<"cero ";
   }
   if(decenas==1)
   {
     cout<<"diez ";
   }
    if(decenas==2)
   {
     cout<<"veinte ";
   }
    if(decenas==3)
   {
     cout<<"treinta ";
   }
    if(decenas==4)
   {
     cout<<"cuarenta ";
   }
    if(decenas==5)
   {
     cout<<"cincuenta ";
   }
    if(decenas==6)
   {
     cout<<"sesenta ";
   }
    if(decenas==7)
   {
     cout<<"setenta ";
   }
    if(decenas==8)
   {
     cout<<"ochenta ";
   }
    if(decenas==9)
   {
     cout<<"noventa ";
   }
   //termino decenas inicio unidades   
   if(unidades==0)
   {
     cout<<"."<<endl;
   }   
   if(unidades==1)
   {
     cout<<"y uno"<<endl;
   }
    if(unidades==2)
   {
     cout<<"y dos"<<endl;
   }
    if(unidades==3)
   {
     cout<<"y tres"<<endl;
   }
    if(unidades==4)
   {
     cout<<"y cuatro"<<endl;
   }
    if(unidades==5)
   {
     cout<<"y cinco"<<endl;
   }
    if(unidades==6)
   {
     cout<<"y seis"<<endl;
   }
    if(unidades==7)
   {
     cout<<"y siete"<<endl;
   }
    if(unidades==8)
   {
     cout<<"y ocho"<<endl;
   }
    if(unidades==9)
   {
     cout<<"y nueve"<<endl;
   }
}
while(opcion != 0);
cout<<"Gracias por usar nuestro Programa Ignacio\n";
return 0;
}