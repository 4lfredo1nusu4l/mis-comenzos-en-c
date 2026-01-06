/*Ejercicio 10: Escriba un programa que calcule las soluciones de una ecuación de segundo 
grado de la forma ax^2 + bx + c = 0, teniendo en cuenta que:*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	float a, b, c, solmas, solmen;
	cout<<"ESte programa calcula las ecuaciones de la forma ax^2 + bx + c"
	cout<<"Ingresa el termino a: "; cin>>a;
	cout<<"Ingresa el termino b: "; cin>>b;
	cout<<"Ingresa el termino c: "; cin>>c;

	solmas = (-b + sqrt((b * b) - (4 * a * c))) / (2 * a);
    solmen = (-b - sqrt((b * b) - (4 * a * c))) / (2 * a);
    
	cout<<"El resultado positivo es: "<<solmas<<endl;
	cout<<"El resultado negativo es: "<<solmen;
	
	//Hagame unas cuadraticas con este metodo :)
	return 0;
}
	
	
	
	
