#ifndef CRESERVATORIOLINEARSELADO_H_
#define CRESERVATORIOLINEARSELADO_H_

#include "CGeometriaReservatorio.h"
///Criacao da classe CReservatorioLinearSelado.h
class CReservatorioLinearSelado : CGeometriaReservatorio
{
	///Declaracao metodos publicos
	public:
		
		///Construtor default
		CReservatorioLinearSelado(){};
	
        /**
		Calcula um ponto da funcao para a forma de reservatorio linear selado
		@parametro xd variavel do espaco adimensional
		@retorna valor de funcao de calculada para reservatorio linear selado
		*/	
		virtual double LinearSelado(double _xd);
	    
		///Destrutor default
		~CReservatorioLinearSelado(){};
};

#endif
