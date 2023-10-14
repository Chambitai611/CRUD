#include <iostream>
using namespace std;
struct Estudiante{ 
int codigo; 
string estudiante; 
int nota;

};

main() {
	/*
Estudiante estudiante;
cout<<"Ingrese Codigo:";
cin>>estudiante.codigo;
cin.ignore();
cout<<"Ingrese Nombre Completo:";
getline(cin,estudiante.nombre);
cout<<"Ingrese Nota:";
cin>>estudiante.nota;

cout<<"codigo:"<<estudiante.codigo<<endl;
cout<<"Nombre completo:"<<estudiante.nombre<<endl;
cout<<"Nota:"<<estudiante.nota<<endl;
*/

Estudiante estudiante;
 for (int i=0;i<4;i++){
cout<<"Ingrese Codigo:";
cin>>estudiante.codigo[i];
cin.ignore();
cout<<"Ingrese Nombre Completo:"; 
getline(cin, estudiante.nombre[i]); 
cout<<"Ingrese Nota:";
cin>>estudiante.nota[i];
}
for (int i=0;i<4;i++){
cout<<":___________________________"<<endl;
cout<<"Ingrese Codigo:";
cin>>estudiante.codigo[i];
cin.ignore();
 cout<<"Ingrese Nombre Completo:"; 
getline(cin, estudiante.nombre[i]); 
cout<<"Ingrese Nota:"; 
cin>>estudiante.nota[i]
;
}
for (int i=0;i<4;i++){
cout<<"___________________________________"<<endl;
cout<<"Codigo:"<<estudiante.codigo[i]<<endl;
cout<<"Nombre Completo: "<<estudiante.nombre[i]<<endl; 
cout<<"Nota:"<<estudiante.nota[i]<<endl;
}
}