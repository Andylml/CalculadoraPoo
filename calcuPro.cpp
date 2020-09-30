
#include "classCal.h"

calcuPro::calcuPro()
{
	resultado = 0;
}
void calcuPro::imprimeResultado(float res)
{
	cout<<"Resultado: "<<res<<endl;
}
void calcuPro::division(float num1,float num2,float res)
{
	if(num2==0){
		cout << "Error Math";
		imprimeResultado(res);
	}
	else{
		resultado = res = num1/num2;
	imprimeResultado(res);
	num1 = res;
	}
}
void calcuPro::multiplicacion(float num1,float num2,float res)
{
	resultado = res = num1*num2;
	imprimeResultado(res);
	num1 = res;
}
void calcuPro::resta(float num1,float num2,float res)
{
	resultado = res = num1-num2;
	imprimeResultado(res);
	num1 = res;
}
void calcuPro::suma(float num1,float num2,float res)
{
	resultado = res = num1+num2;
	imprimeResultado(res);
	num1 = res;
}
void calcuPro::clear(float res){
	resultado = res = 0;
}

