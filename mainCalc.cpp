
#include "classCal.h"


int main(){
	calcuPro c;
	float num1, num2;
	bool salir;
	char op;
		do{
		if(c.resultado==0){
		cout << "Operacion: ";
		cin>>num1>>op>>num2;
		switch(op){
			case '*': c.multiplicacion(num1,num2,c.resultado);break;
			case '+': c.suma(num1,num2,c.resultado);break;
			case '-': c.resta(num1,num2,c.resultado);break;
			case '/': c.division(num1,num2,c.resultado);break;
			case 'S': "";break;
			case 'C': c.clear(c.resultado);break;
		    }
		}
		else{
			cin>>op>>num2;
		switch(op){
			case '*': c.multiplicacion(num1,num2,c.resultado);break;
			case '+': c.suma(num1,num2,c.resultado);break;
			case '-': c.resta(num1,num2,c.resultado);break;
			case '/': c.division(num1,num2,c.resultado);break;
			case 'S': salir=true;break;
			case 'C': c.clear(c.resultado);break;
		    }	
	    }
	}while(salir==false);
	
}
