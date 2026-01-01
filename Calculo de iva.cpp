/*Escribe un programa que lea de la entrada estándar el precio de un producto y muestre 
en la salida estándar el precio del producto al
 aplicarle el IVA 16%.*/
 
  #include<iostream>
 
 using namespace std;
 
 int main(){
 	
 	float producto, iva; // recurda simpre declarar variables con , ya que el ; es pa acabar la sentencia
 	cout<<"Ingresa el precio del prodicto: "; cin>>producto;
 	
 	iva = producto * 0.16 + producto;
 	
 	cout<<"El producto con iva es: "<<iva<<endl;
 	
 	
 	return 0;
 }
 
