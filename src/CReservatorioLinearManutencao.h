#ifndef CRESERVATORIOLINEARMANUTENCAO_H_
#define CRESERVATORIOLINEARMANUTENCAO_H_

#include "CGeometriaReservatorio.h"
///Criacao da classe CReservatorioLinearManutencao.h
class CReservatorioLinearManutencao : CGeometriaReservatorio
{
	///Declaracao metodos publicos
	public:
	    ///Construtor default
		CReservatorioLinearManutencao(){};
		
		/**
		  Calcula um ponto da funcao para a forma de reservatorio linear com manutencao
		  @parametro xd variavel do espaco adimensional
		  @retorna valor de funcao de calculada para reservatorio linear com manutencao
		*/
		double virtual LinearManutencao(double _xd);
		
		///Destrutor default
		~CReservatorioLinearManutencao(){};
		
};

#endif
