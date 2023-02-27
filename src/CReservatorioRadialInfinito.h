#ifndef CRESERVATORIORADIALINFINITO_H_
#define CRESERVATORIORADIALINFINITO_H_

#include "CGeometriaReservatorio.h"

///Criacao da classe CReservatorioRadialInfinito.h

class CReservatorioRadialInfinito : CGeometriaReservatorio
{
				
    ///Declaracao metodos publicos
	public:
	
	///Construtor default
	CReservatorioRadialInfinito(){}; 
	
	/**
    Calcula um ponto de Laplace para a forma de reservatorio radial infinito
	@parametro u variavel do tempo no campo de Laplace
    @parametro Rd raio externo adimensional
	@retorna valor de funcao de Laplace calculada no ponto (u, Rd)
    */
	virtual double RadialInfinito(double _u, double _Rd);
	
	///Destrutor default
	~CReservatorioRadialInfinito(){}; 
	
};

#endif
