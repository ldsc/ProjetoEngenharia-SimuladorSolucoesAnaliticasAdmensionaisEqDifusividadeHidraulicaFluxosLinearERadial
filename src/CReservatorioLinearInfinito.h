#ifndef CRESERVATORIOLINEARINFINITO_H_
#define CRESERVATORIOLINEARINFINITO_H_

#include "CGeometriaReservatorio.h"

//////Criacao da classe CReservatorioLinearInfinito.h
class CReservatorioLinearInfinito : CGeometriaReservatorio
{
	///Declaracao metodos publicos
	public:
		
		///Construtor default
		CReservatorioLinearInfinito(){};
		
		/**
		  Calcula um ponto da funcao para a forma de reservatorio linear infinito
		  @parametro TD variavel do tempo adimensional
		  @retorna valor de funcao de calculada para reservatorio linear infinito
		*/
		virtual double LinearInfinito(double _TD);
		
		///Destrutor default
		~CReservatorioLinearInfinito(){};
	
};

#endif
