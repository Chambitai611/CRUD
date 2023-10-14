#include <iostream>
using namespace std;
const char * nombre_archivo= "archivo.dat";
struct Estudiante{
	int codigo;
	char nombres[50];
	char apellidos[50];
	int telefono;
};
	void Leer (){
	void Crear();
	void Actualizar();
main(){
	Leer();
	//Crear();
	//Actualizar();
	system("pause");
}
void Leer (){
	system("cls");	
	FILE* archivo = fopen(nombre_archivo,"rb");
	if (!archivo){
		archivo = fopen(nombre_archivo,"w+b");
		
	}
	
	Estudiante estudiante;
	int id=0; // indice o posicion del registro(fila) dentro del archivo
	fread(&estudiante,sizeof(Estudiante),1,archivo);
	cout<<"____________________________________________________"<<endl;
	cout<<"ID"<<"|"<<"codigo"<<"|"<<"Nombre"<<"|"<<"Apellidos"<<"|"<<"Telefono"<<endl;
	do{
		cout<<id<<"|"<<estudiante.codigo<<"|"<<estudiante.nombres<<"|"<<estudiante.apellidos<<"|"<<estudiante.telefono<<endl;
		fread(&estudiante,sizeof(Estudiante),1,archivo);
		id+=1
	}while (feof(archivo)==0);
fclose(archivo==0);
fclose(archivo);
}
void Crear (){
	FILE* archivo = fopen(nombre_archivo,"a+b");
	char res; 
	Estudiante estudiante;
	do{
		fflush(stdin);
		cout<<"Ingrese codigo:";
		cin>>estudiante.codigo;
		cin.ignore();
		
		cout<<"Ingrese Nombres:";
		cin.getline(estudiante.nombres,50);
		cout<<"Ingrese Apellidos:";
		cin.getline(estudiante.apellidos,50);
		
		cout<<"Ingrese Telefono:";
		cin>>estudiante.telefono;
		
		
		fwrite(&estudiante,sizeof(Estudiante),1,archivo);
		cout<<"Desea Ingresar otro estudiante(s/n):";
		cin>>res;
		
		} while (res=='s' || res=='s');
	
					
	fclose(archivo);
	Leer();
}
void Actualizar (){
	FILE* archivo = fopen(nombre_archivo, "r+b");

	Estudiante estudiante;
	int id=0;
	cout<<"Ingrese el ID que desea Modificar:"
	cin>>id;
	fseek(archivo,id * sizeof(Estudiate),SEEK_SET);
	
		cout<<"Ingrese codigo:";
		cin>>estudiante.codigo;
		cin.ignore();
		
		cout<<"Ingrese Nombres:";
		cin.getline(estudiante.nombres,50);
		
		cout<<"Ingrese Apellidos:";
		cin.getline(estudiante.apellidos,50);
		
		cout<<"Ingrese Telefono:";
		cin>>estudiante.telefono;
		
		
		fwrite(&estudiante,sizeof(Estudiante),1,archivo);
		
		
		fclose(archivo);
		Leer();
}