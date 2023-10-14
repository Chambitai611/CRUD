#include <iostream>
using namespace std;
// 80 Lineas de codigo en 10 Lugares distintos = 800 Lineas de codigo
// de las cuales 80 son iguales
// crean una funcion o un metodo = y lo mananda a Llamar 10 veces =80 lineas de codigo y 10 a funciones
/*int suma (int num1, int num2){
	 int resultado = 0;
	resultado = num1+num2;
	return resultado;
	
	}
	int resta (int num1, int num2){
	 int resultado = 0;
	resultado = num1-num2;
	return resultado;
	*/
	
	//Metodo y envio de paramentros por valor 
	/*void suma (int num1,int num2){
	int resultado = 0;
	num1+=1; // 11
	num2+=1; // 21
	resultado = num1+num2; // 32 cout<<resultado<<endl;
}
main() {
	int a=10, b = 20; 
	suma (a,b);
	cout<<"a: "<<a<<endl;
	//cout<<"b: "<<b<<endl;
	*/
	/*
main(){
	
	cout<<suma(10,20)<<endl;
	cout<<resta(10,20)<<endl;
	system("pause");
	}
	*/
	int suma(int num1,int num2, int num3); 
	void suma (int &num1, int &num2);
main() {
int a=10, b = 20;
suma (a,b);
cout<<"a: "<<a<<endl;
cout<<"b: "<<b<<endl;
system("pause");
	
	
}
