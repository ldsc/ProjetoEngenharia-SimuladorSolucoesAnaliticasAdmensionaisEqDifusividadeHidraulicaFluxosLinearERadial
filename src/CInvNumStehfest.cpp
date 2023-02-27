#define _USE_MATH_DEFINES // define constantes matematicas (exemplo Pi = 3.141516...)
#include <cmath> ////inclui biblioteca matematica padrao com funcoes bessel para c++17 ou superior

#include "CInvNumStehfest.h"
#include <iostream> //Biblioteca std usada somente pra dar cout e encontrar bugs vai ser apagada na versão final
#include <algorithm> // usar min(a, b)

using namespace std;

double CInvNumStehfest::Factorial(int _i)
{
	double acumulador = 1;
	if (_i==0 || _i==1)
		return acumulador;
	else 
	{
		for (double j = 1; j <= _i; j++)
			acumulador *=j;
	return acumulador;
	}
}

double CInvNumStehfest::StehfestRadialInfinito(double _TD)
{

nn2 = L/2.0;
nn21= nn2+1.0;

for (double n=1 ; n<=L;n++)
{
	z=0.0;
	for (int k = floor( ( n + 1.0 ) / 2.0 ); k <= min(n,nn2); k++)
		 z = z + ((pow(k, nn2))*Factorial(2*k))/(Factorial(nn2-k)*Factorial(k)*Factorial(k-1)*Factorial(n-k)*Factorial(2*k - n));
		 
    v.push_back(pow((-1.0),(n+nn2))*z);

}
sum = 0.0;
ln2_on_t = log(2.0) / _TD;

for (double n = 1.0; n <= L; n++)
   {
    p = n * ln2_on_t;
    sum = sum + v[n-1.0]*radialinfinito.RadialInfinito(p, Rd);
   }
	ilt = sum * ln2_on_t;
	return ilt;	
}

double CInvNumStehfest::StehfestRadialSelado (double _TD, double _RD)
{

nn2 = L/2.0;
nn21= nn2+1.0;

for (double n=1 ; n<=L;n++)
{
	z=0.0;
	for (int k = floor( ( n + 1.0 ) / 2.0 ); k <= min(n,nn2); k++)
		 z = z + ((pow(k, nn2))*Factorial(2*k))/(Factorial(nn2-k)*Factorial(k)*Factorial(k-1)*Factorial(n-k)*Factorial(2*k - n));
		 
    v.push_back(pow((-1.0),(n+nn2))*z);

}
sum = 0.0;
ln2_on_t = log(2.0) / _TD;

for (double n = 1.0; n <= L; n++)
   {
    p = n * ln2_on_t;
    sum = sum + v[n-1.0]*radialselado.RadialSelado(p, _RD);
   }
	ilt = sum * ln2_on_t;
	return ilt;	
}

double CInvNumStehfest::StehfestRadialManutencao (double _TD, double _RD)
{

nn2 = L/2.0;
nn21= nn2+1.0;

for (double n=1 ; n<=L;n++)
{
	z=0.0;
	for (int k = floor( ( n + 1.0 ) / 2.0 ); k <= min(n,nn2); k++)
		 z = z + ((pow(k, nn2))*Factorial(2*k))/(Factorial(nn2-k)*Factorial(k)*Factorial(k-1)*Factorial(n-k)*Factorial(2*k - n));
		 
    v.push_back(pow((-1.0),(n+nn2))*z);

}
sum = 0.0;
ln2_on_t = log(2.0) / _TD;

for (double n = 1.0; n <= L; n++)
   {
    p = n * ln2_on_t;
    sum = sum + v[n-1.0]*radialmanutencao.RadialManutencao(p, _RD);
   }
	ilt = sum * ln2_on_t;
	return ilt;	
}

double CInvNumStehfest::StehfestLinearInfinito (double _TD)
{

	ilt = linearinfinito.LinearInfinito(_TD);
	return ilt;	
	
}

double CInvNumStehfest::StehfestLinearSelado(double _xd)
{

	ilt = linearselado.LinearSelado(_xd);
	return ilt;	
}

double CInvNumStehfest::StehfestLinearManutencao(double _xd)
{

	ilt = linearmanutencao.LinearManutencao(_xd);
	return ilt;	
}
