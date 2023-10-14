#include <iostream> 

using namespace std; //donde se encuentran todas las librerias estandar
main(){
	/*
	//variables: es un espacio de memoria reservado para almacenar un valor que corresponde a un tipo de dato.
	//cout<<"Hola mundo..."<<nombre<<endl;
	//tipo nombre de la variable.
	//c++ case - sensitive: Distincion entre Mayusculas y minusculas.
	//Estilo de nombres para variables: Camel case 
	//para las clases metodos y funciones LowerCamelCase y para las variables Snake case
	//restriccion el nombre de una variable no puede: iniciar con numero, no puede tener caracteres especiales,no espacios en blanco
	
	string nombreCompleto="armando cardona"; // LowerCamelCase
	string NombreCompleto="armando cardona 2"; // UpperCamelCase
	string nombre_completo="armando cardona 3"; // UpperCamelCase
	cout<<nombreCompleto<<endl;
	cout<<NombreCompleto<<endl;
	cout<<nombre_completo<<endl;
	system("pause");
	
	
	//variables Numericas
	//Numeros enteros
	//como declarar una variable: se define por el tipo y nombre de la variable - valor - ;
	short entero_corto=32767; // 2 Bytes (-32,768 a 32,767)
	int entero=2147483647; // 4 bytes -2,147,483,648 a 2,147,483,647
	long long entero_largo=2147483648; // 8 bytes
	unsigned long long int i_entero_largo=18446744073709551615; // 10 bytes
	cout<<"short:" <<entero_corto<<endl;
	cout<<"int: " <<entero<<endl;
	cout<<"long: "<<entero_largo<<endl;
	cout<<"long int: "<<i_entero_largo<<endl;

	unsigned int int_sin_signo= -2;
	cout<<"int sin signo: "<<int_sin_signo<<endl;
		//numeros reales de punto flotante 
		long double  numero_decimal = 100.235; //10 bytes 
		cout<<"float: "<<numero_decimal<<endl;
		//numeros reales de punto flotante
		char cr='T'; 
		char asc =61;
		cout<<"char:"<<cr<<endl;
		cout<<"ascii: "<<asc<<endl;
		//Logicos 1 de 0, True o False
		bool logico =true;
	
		char cadena [4] = "texto";
		string cadena_texto="hola soy armando";
	
		*/
		 
	
		char saludo[4];
		saludo[0]='H';
		saludo[1]='O';
		saludo[2]='L';
		saludo[3]='A';
		cout<<"array:"<<saludo<<endl;
		cout<<"array:"<<saludo[0]<<saludo[1]<<saludo[2]<<saludo[3]<<endl;
			
		int codigo [3];
		codigo[0]=1288;
		codigo[1]=3800;
		codigo[2]=12451289;
		cout<<"codigos: "<<codigo[0]<<","<<codigo[1]<<","<<codigo[2]<<endl;
		
		string paises[36];
		paises [0]="Guatemala";
		paises [1]="El Salvador";
		paises [2]="Honduras";
		cout<<"paises: "<<paises[0]<<","<<paises[1]<<","<<paises[2]<<endl;
		
	}
			
			
	
