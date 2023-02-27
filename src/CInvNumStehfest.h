#ifndef CInvNumStehfest_H_
#define CInvNumStehfest_H_

#include <vector>

#include "CReservatorioRadialInfinito.h"
#include "CReservatorioRadialSelado.h"
#include "CReservatorioRadialManutencao.h"
#include "CReservatorioLinearInfinito.h"
#include "CReservatorioLinearSelado.h"
#include "CReservatorioLinearManutencao.h" 

///Criacao da classe CInvNumStehfest.h
class CInvNumStehfest
{
	///Declaracao metodos protegidos
	protected:
		
		///Variaveis auxiliares do metodo de inversao numerica de Stehfest
		double nn2, nn21, z, ln2_on_t, sum, p, ilt, L, Rd;
		std::vector <double> v;
		
		///Declaracoes dos objetos das classes
		CReservatorioRadialInfinito radialinfinito;
		CReservatorioRadialSelado radialselado;
		CReservatorioRadialManutencao radialmanutencao;
		CReservatorioLinearInfinito linearinfinito;
		CReservatorioLinearSelado linearselado;
		CReservatorioLinearManutencao linearmanutencao;
	
	///Declaracao metodos publicos	
	public:
		
		///Construtor
		CInvNumStehfest(double _RD = 1, double _L = 12) : L(_L), Rd(_RD){};
		
		/**
		  Calcula fatorial
		  @parametro i inteiro a ser fatorado
		  @retorna o inteiro da variavel i fatorado
		*/
		double Factorial(int _i);
		
		/**
		  Calcula a inversao numerica de Stehfest para a forma de reservatorio radial infinito
		  @parametro TD variavel do tempo adimensional no campo real
		  @retorna a inversao numerica do algoritmo de Stehfest no campo real
		*/
		double StehfestRadialInfinito(double _TD);
		
		/**
		  Calcula a inversao numerica de Stehfest para a forma de reservatorio radial selado
		  @parametro TD variavel do tempo adimensional no campo real
		  @parametro RD variavel do raio externo adimensional
		  @retorna a inversao numerica do algoritmo de Stehfest no campo real
		*/
		double StehfestRadialSelado (double _TD, double _RD);
		
		/**
		  Calcula a inversao numerica de Stehfest para a forma de reservatorio radial com manutencao
		  @parametro TD variavel do tempo adimensional no campo real
		  @parametro RD variavel do raio externo adimensional
		  @retorna a inversao numerica do algoritmo de Stehfest no campo real
		*/
		double StehfestRadialManutencao (double _TD, double _RD);
		
		/**
		  Calcula a forma de reservatorio linear infinito
		  @parametro xd variavel do tempo adimensional
		  @retorna valor para o reservatorio linear infinito
		*/
		double StehfestLinearInfinito (double _xd);
		
		/**
		  Calcula a forma de reservatorio linear selado
		  @parametro xd variavel da posicao (espaco) adimensional
		  @retorna valor para o reservatorio linear selado
		*/
		double StehfestLinearSelado (double _xd);
		
		/**
		  Calcula a forma de reservatorio linear com manutencao
		  @parametro xd variavel da posicao (espaco) adimensional
		  @retorna valor para o reservatorio linear com manutencao
		*/
		double StehfestLinearManutencao (double _xd);
		
		///Destrutor default
		~CInvNumStehfest(){};
};

#endif
