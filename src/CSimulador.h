#ifndef CSimulador_H_
#define CSimulador_H_

#include <vector>
#include <iostream>
#include <string>

#include "CInvNumStehfest.h"
#include "CGnuplot.h"

///Criacao da classe CSimulador.h
class CSimulador
{
    ///Declaracao metodos protegidos
	protected:
		
		CGeometriaReservatorio forma;
		CInvNumStehfest Stehfest;
    	Gnuplot plot, plot2, plot3, plot4, plot5;
		
		std::vector <double> TD, ReD;
    
    ///Declaracao metodos publicos
	public:
		
		///Construtor default
		CSimulador(){};
		
		///Funcoes auxiliares para plotar com retorno vazio
		void Solver();
		void Plot(std::vector <double> _WD, std::vector <double> _TD, std::string name, bool _setY);
		void Plot2(std::vector <double> _WD, std::vector <double> _TD, std::string name, bool _setY);
		void Plot3(std::vector <double> _WD, std::vector <double> _TD, std::string name, std::string type, std::string type2);
		void Plot4(std::vector <double> _WD, std::vector <double> _TD, std::string name, std::string type, std::string type2);
		void Plot5(std::vector <double> _WD, std::vector <double> _TD, std::string name, std::string type, std::string type2);		
		
		///Destrutor default
		~CSimulador(){};
	
};


#endif
