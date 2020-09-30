#include <iostream>

using namespace std;

class calcuPro
{
	public:
		calcuPro();
		float resultado;
		void suma(float,float,float);//declaramos metodos,Asignamos parametros
		void resta(float,float,float);
		void division(float,float,float);
		void multiplicacion(float,float,float);
		void imprimeResultado(float);
		void salir();		
		void clear(float);
};
