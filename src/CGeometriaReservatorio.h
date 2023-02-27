#ifndef CGeometriaReservatorio_H_
#define CGeometriaReservatorio_H_

///Criacao da classe CGeometriaReservatorio.h
class CGeometriaReservatorio
{
	///Declaracao metodos protegidos
	protected:
		
	///Pressao Adimensional, Raio externo admensional	
		double pd, RD; 
			
	///Declaracao metodos publicos
	public:
		
		///Construtor default
		CGeometriaReservatorio(){};

		/**
		  Calcula um ponto de Laplace para determinada forma de reservatorio.
		  @parametro u variavel do tempo no campo de Laplace
		  @parametro RD raio externo adimensional
		  @retorna valor de funcao de Laplace calculada no ponto (u, RD)
		*/
		virtual double Forma(double _u, double _RD); 
		
		///Destrutor default	
		~CGeometriaReservatorio(){};
		
};

#endif
