#define _USE_MATH_DEFINES // define constantes matematicas (exemplo Pi = 3.141516...)
#include <cmath> ////inclui biblioteca matematica padrao com funcoes bessel para c++17 ou superior

#include "CReservatorioLinearSelado.h"

double CReservatorioLinearSelado::LinearSelado(double _xd)
{
	
	pd = _xd - ((_xd*_xd)/2.0);
	
	return pd;
}	
