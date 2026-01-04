/*Ejercicio 8: Escriba un programa que lea de la 
entrada estándar los dos catetos de un triángulo rectángulo
 y escriba en la salida estándar su hipotenusa.*/
 
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	float cata, catb, cali, hip;
	
	cout<<"Ingresa el cateto a: "; cin>>cata;
	cout<<"Ingresa el cateto b: "; cin>>catb;
	
	cali = cata * cata + catb * catb; // aqui es mejor optimizar colo multiplicando sin usar pow
	hip = (sqrt(cali));
	
	cout<<"El resultado es: "<<cali<<endl;
	cout<<"La hipotenusa es: "<<hip;	
	
	
	return 0;
}
