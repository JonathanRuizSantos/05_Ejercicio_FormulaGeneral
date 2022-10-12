#include <iostream>
#include <cmath>
/* Escribe un programa que resuelva la formula general, el programa debe permitir que el usuario ingrese los datos y
 debera aplicar todo lo que se ha enseñado hasta este momento en este curso */
 
// ------------------------------------------VARIABLES GLOBALES
double a,b,c;

//  ---------------------------------------- DECLARACION DE LAS FUNCIONES
void pideDatos();
void ecGeneral(double,double,double);
double raizCuadrada(double,double,double);
// ---------------------------------------- FUNCION PRINCIPAL
using namespace std;
int main(int argc, char** argv) {
	cout<<"SOLUCION DE LA FORMULA GENERAL"<<endl;
	cout<<"Forma: ax^2 + bx + c = 0"<<endl<<endl;
	
	pideDatos();
	cout<<endl;
	ecGeneral(a,b,c);
	
	return 0;
}
// -------------------------------------- IMPLEMENTACION DE LAS FUNCIONES
void pideDatos(){
	cout<<"Ingresa a: ";
	cin>>a;
	cout<<"Ingresa b: ";
	cin>>b;
	cout<<"Ingresa c: ";
	cin>>c;
}
void ecGeneral(double a,double b,double c){
	double x1,x2;
	
	x1 = (-b+raizCuadrada(a,b,c))/(2*a);
	x2 = (-b-raizCuadrada(a,b,c))/(2*a);
	
	cout<<"X1 = "<<x1<<endl;
	cout<<"X2 = "<<x2<<endl;
}
double raizCuadrada(double a, double b, double c){
	double resultado = sqrt(pow(b,2)-(4*(a*c)));
	return resultado;
}