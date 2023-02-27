#ifndef CRESERVATORIORADIALSELADO_H_
#define CRESERVATORIORADIALSELADO_H_

#include "CGeometriaReservatorio.h"
///Criacao da classe CReservatorioRadialSelado.h
class CReservatorioRadialSelado : CGeometriaReservatorio
{
    ///Declaracao metodos publicos
	public:
		
		///Construtor default
		CReservatorioRadialSelado(){};
		
		/**
		  Calcula um ponto de Laplace para a forma de reservatorio radial selado
		  @parametro u variavel do tempo no campo de Laplace
		  @parametro RD raio externo adimensional
		  @retorna valor de funcao de Laplace calculada no ponto (u, RD)
		*/
		virtual double RadialSelado(double _u, double _RD);
		
		///Destrutor default
		~CReservatorioRadialSelado(){};
		
	
};


#endif
