#define _USE_MATH_DEFINES // define constantes matematicas (exemplo Pi = 3.141516...)
#include <cmath> ////inclui biblioteca matematica padrao com funcoes bessel para c++17 ou superior

#include "CReservatorioLinearManutencao.h"

double CReservatorioLinearManutencao::LinearManutencao(double _xd)
{
	
	pd = _xd;
	
	return pd;
}
