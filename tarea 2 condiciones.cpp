#include <iostream>

using namespace std;
main (){
	/*numero es positivo>0 o negativo <0
	
	int num=0;
	cout<<"Ingrese el numero:";
	cin>>num;
	if (num>0){
		//entra aca cuando la condicion es verdadera
		cout<<"Positivo"<<endl;
	}
	else { //<=0 
	   		if (num==0){ //0
		//entra aca cuando la condicion es verdadera
		cout<<"neutro"<<endl;
	}else {//<0
		cout<<"negativo"<<endl;
	}	
	system("pause");		
}
	
	
	
	//numero es positivo o negativo
	string pais="";
	cout<<"ingrese pais";
	cin>>pais;
	if(pais=="guatemala"){
		cout<<"yo soy de "<<pais<<"mi pais"<<endl;
	}else{
		cout<<pais<<endl;
	}
	system("pause");

	
	
		int num=0;
	cout<<"Ingrese el numero:";
	cin>>num;
	//dividir un numero entre dos su residuo es cero entonces es par caso contrario impar
	if((num%2)==0){
		cout<<"par"<<endl;
	}else {
		cout<<"impar"<<endl;
	}
	system("pause");
		
		
		
		//and (y) &&
		//or )(o) ||
		
		
		char lapiz, lapicero,cuaderno;
		cout<<"Trae lapiz (s/n):";
		cin>>lapiz;
		cout<<"Trae lapicero (s/n):";
		cin>>lapicero;
		cout<<"Trae cuaderno (s/n):";
		cin>>cuaderno;
		//puede entrar a mi clase si usted trae un lapiz y un lapicero
		//and (y) = el valor es verdadero si ambas son verdaderas
		//puede entrar a mi clase si usted trae un lapiz o un lapicero
		//or (o) = el valor es verdaero si por lo menos una es verdadera
		if ((lapiz=='s' || lapicero=='s') && cuaderno =='s'){
			cout<<"igresa"<<endl;
		}else{
			cout<<"lo siento no puede ingresar"<<endl;
		}
		
		
		*/
		

		int codigo = 0;
		cout << "Ingrese codigo de area:";
		cin >> codigo;

		switch(codigo)
		{
   	 	case 501: 
			cout<< "Belice"<<endl;
  	 	 break;
  	  	case 502: 
			cout<< "Guatemala"<<endl;
  	 	 break;
  	 	 case 503: 
			cout<< "El salvador"<<endl;
  	 	 break;
  	 	 case 504: 
			cout<< "Honduras"<<endl;
  	 	 break;
  	 	 case 505: 
			cout<< "Nicaragua"<<endl;
  	 	 break;
  	 	 case 506: 
			cout<< "Costa rica"<<endl;
  	 	 break;
  	 	 case 507: 
			cout<< "Panama"<<endl;
  	 	 break;
   	 	default: cout<< "Este codigo no es de centroamerica"<<endl;
}
}