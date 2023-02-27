#define _USE_MATH_DEFINES // define constantes matematicas (exemplo Pi = 3.141516...)
#include <cmath> ////inclui biblioteca matematica padrao com funcoes bessel para c++17 ou superior

#include "CReservatorioRadialSelado.h"

using namespace std;

double CReservatorioRadialSelado::RadialSelado(double _u, double _ReD)
{
	
	pd =  (((cyl_bessel_i(1, _ReD*sqrt(_u))*cyl_bessel_k(0, sqrt(_u)))+(cyl_bessel_k(1, _ReD*sqrt(_u))*cyl_bessel_i(0, sqrt(_u))))/((pow(_u, (3.0/2.0)))*((cyl_bessel_i(1, _ReD*sqrt(_u))*cyl_bessel_k(1, sqrt(_u)))-(cyl_bessel_i(1, sqrt(_u))*cyl_bessel_k(1, _ReD*sqrt(_u))))));
	
	return pd;
}
