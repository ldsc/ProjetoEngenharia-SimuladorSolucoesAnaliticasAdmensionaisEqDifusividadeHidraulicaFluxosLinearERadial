#ifndef CRESERVATORIORADIALMANUTENCAO_H_
#define CRESERVATORIORADIALMANUTENCAO_H_

#include "CGeometriaReservatorio.h"

///Criacao da classe CReservatorioRadialManutencao.h
class CReservatorioRadialManutencao : CGeometriaReservatorio
{
    ///Declaracao metodos publicos
	public:
		
		///Construtor default
		CReservatorioRadialManutencao(){};
		
		/**
		  Calcula um ponto de Laplace para a forma de reservatorio radial com manutencao
		  @parametro u variavel do tempo no campo de Laplace
		  @parametro RD raio externo adimensional
		  @retorna valor de funcao de Laplace calculada no ponto (u, RD)
		*/
		virtual double RadialManutencao(double _u, double _RD);	
			
		///Destrutor default
		~CReservatorioRadialManutencao(){};
			
};

#endif
