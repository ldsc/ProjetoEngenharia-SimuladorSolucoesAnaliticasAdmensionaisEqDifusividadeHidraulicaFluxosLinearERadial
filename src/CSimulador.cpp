#include "CSimulador.h"

using namespace std;

void CSimulador::Plot(vector <double> _WD, vector <double> _TD, std::string name, bool _setY)
{

	Gnuplot::Terminal("qt");
	
	if (_setY)
	plot.set_yrange(0, 10);
	
	plot.Grid();
	plot.set_xlabel("tD");
	plot.set_ylabel("pD");
	plot.Title("Pressao Adimensional x Tempo Adimensional");	
	plot.set_xlogscale();
	plot.Legend("inside left top box");
	plot.ShowOnScreen(); 
	plot.plot_xy(_TD, _WD, name);
	plot.savetops(name);
	cout << "Aperte ENTER para continuar" << endl;	
	cin.get();
	
	
}

void CSimulador::Plot2(vector <double> _WD, vector <double> _TD, std::string name, bool _setY)
{

	Gnuplot::Terminal("qt");
	
	if (_setY)
	plot2.set_yrange(0, 5);
	
	plot2.Grid();
	plot2.set_xlabel("tD");
	plot2.set_ylabel("pD");
	plot2.Title("Pressao Adimensional x Tempo Adimensional");	
	plot2.set_xlogscale();
	plot2.Legend("inside left top box");
	plot2.ShowOnScreen(); 
	plot2.plot_xy(_TD, _WD, name);
	plot2.savetops(name);
	cout << "Aperte ENTER para continuar" << endl;	
	cin.get();
	
	
}

void CSimulador::Plot3(vector <double> _WD, vector <double> _TD, std::string name, std::string type, std::string type2)
{

	Gnuplot::Terminal("qt");
	
	plot3.Grid();
	plot3.set_xlabel(type2);
	plot3.set_ylabel("pD");
	plot3.Title("Pressao Adimensional x "+type+" Adimensional");	
	plot3.Legend("inside left top box");
	plot3.ShowOnScreen(); 
	plot3.plot_xy(_TD, _WD, name);
	plot3.savetops(name);
	cout << "Aperte ENTER para continuar" << endl;	
	cin.get();
	
	
}

void CSimulador::Plot4(vector <double> _WD, vector <double> _TD, std::string name, std::string type, std::string type2)
{

	Gnuplot::Terminal("qt");
	
	plot4.Grid();
	plot4.set_xrange(0, 2);
	plot4.set_yrange(0, 1);
	plot4.set_xlabel(type2);
	plot4.set_ylabel("pD");
	plot4.Title("Pressao Adimensional x "+type+" Adimensional");	
	plot4.Legend("inside left top box");
	plot4.ShowOnScreen(); 
	plot4.plot_xy(_TD, _WD, name);
	plot4.savetops(name);
	cout << "Aperte ENTER para continuar" << endl;	
	cin.get();
	
	
}

void CSimulador::Plot5(vector <double> _WD, vector <double> _TD, std::string name, std::string type, std::string type2)
{

	Gnuplot::Terminal("qt");
	
	plot5.Grid();
	//plot5.set_xrange(0, 2);
	//plot5.set_yrange(0, 1);
	plot5.set_xlabel(type2);
	plot5.set_ylabel("pD");
	plot5.Title("Pressao Adimensional x "+type+" Adimensional");	
	plot5.Legend("inside left top box");
	plot5.ShowOnScreen(); 
	plot5.plot_xy(_TD, _WD, name);
	plot5.savetops(name);
	cout << "Aperte ENTER para continuar" << endl;	
	cin.get();
	
	
}

void CSimulador::Solver()
{
	
	vector <double> radialinfinito, radialselado2, radialselado3, radialselado4, radialselado5, radialselado6, radialselado7, radialselado8, radialselado9, radialselado10, radialManutencao2, radialManutencao3, radialManutencao4, radialManutencao5, radialManutencao6, radialManutencao7, radialManutencao8, radialManutencao9, radialManutencao10;
	vector <double> linearinfinito, linearmanutencao, linearselado;
	
	for (double i=0.01;i<=1000;i+=0.05)
		TD.push_back(i);
		
		
	for (double k=0; k < TD.size(); k++)
		radialinfinito.push_back(Stehfest.StehfestRadialInfinito(TD[k]));
		
	cout << "######################################################" << endl;
	cout << "#                                                    #" << endl;
	cout << "#           Plotando Radial infinito                 #" << endl;
	cout << "#                                                    #" << endl;
	cout << "######################################################" << endl;	
		
		
		Plot(radialinfinito, TD, "RadialInfinito", 1);	
				
		for (double k=0; k < TD.size(); k++)
		radialselado2.push_back(Stehfest.StehfestRadialSelado(TD[k], 2));

	cout << "######################################################" << endl;
	cout << "#                                                    #" << endl;
	cout << "#     Plotando Radial Selado para ReD = 2            #" << endl;
	cout << "#                                                    #" << endl;
	cout << "######################################################" << endl;

		
		Plot(radialselado2, TD, "RadialSelado - Red = 2", 0);
		
		for (double k=0; k < TD.size(); k++)
		radialselado3.push_back(Stehfest.StehfestRadialSelado(TD[k], 3));

	cout << "######################################################" << endl;
	cout << "#                                                    #" << endl;
	cout << "#     Plotando Radial Selado para ReD = 3            #" << endl;
	cout << "#                                                    #" << endl;
	cout << "######################################################" << endl;

		
		Plot(radialselado3, TD, "RadialSelado - Red = 3", 0);	
		for (double k=0; k < TD.size(); k++)
		radialselado4.push_back(Stehfest.StehfestRadialSelado(TD[k], 4));

	cout << "######################################################" << endl;
	cout << "#                                                    #" << endl;
	cout << "#     Plotando Radial Selado para ReD = 4            #" << endl;
	cout << "#                                                    #" << endl;
	cout << "######################################################" << endl;

		
		Plot(radialselado4, TD, "RadialSelado - Red = 4", 0);	
		for (double k=0; k < TD.size(); k++)
		radialselado5.push_back(Stehfest.StehfestRadialSelado(TD[k], 5));

	cout << "######################################################" << endl;
	cout << "#                                                    #" << endl;
	cout << "#     Plotando Radial Selado para ReD = 5            #" << endl;
	cout << "#                                                    #" << endl;
	cout << "######################################################" << endl;

		
		Plot(radialselado5, TD, "RadialSelado - Red = 5", 0);
		
		for (double k=0; k < TD.size(); k++)
		radialselado6.push_back(Stehfest.StehfestRadialSelado(TD[k], 6));

	cout << "######################################################" << endl;
	cout << "#                                                    #" << endl;
	cout << "#     Plotando Radial Selado para ReD = 6            #" << endl;
	cout << "#                                                    #" << endl;
	cout << "######################################################" << endl;

		
		Plot(radialselado6, TD, "RadialSelado - Red = 6", 0);	
		for (double k=0; k < TD.size(); k++)
		radialselado7.push_back(Stehfest.StehfestRadialSelado(TD[k], 7));

	cout << "######################################################" << endl;
	cout << "#                                                    #" << endl;
	cout << "#     Plotando Radial Selado para ReD = 7            #" << endl;
	cout << "#                                                    #" << endl;
	cout << "######################################################" << endl;

		
		Plot(radialselado7, TD, "RadialSelado - Red = 7", 0);		
	
	for (double k=0; k < TD.size(); k++)
		radialselado8.push_back(Stehfest.StehfestRadialSelado(TD[k], 8));

	cout << "######################################################" << endl;
	cout << "#                                                    #" << endl;
	cout << "#     Plotando Radial Selado para ReD = 8            #" << endl;
	cout << "#                                                    #" << endl;
	cout << "######################################################" << endl;

		
		Plot(radialselado8, TD, "RadialSelado - Red = 8", 0);	
		
	cout << "######################################################" << endl;
	cout << "#                                                    #" << endl;
	cout << "#         Criando novo terminal do gnuplot           #" << endl;
	cout << "#                                                    #" << endl;
	cout << "######################################################" << endl;			
	
		Plot2(radialinfinito, TD, "RadialInfinito", 1);
			
		for (double k=0; k < TD.size(); k++)
		radialManutencao2.push_back(Stehfest.StehfestRadialManutencao(TD[k], 2));
	
	cout << "######################################################" << endl;
	cout << "#                                                    #" << endl;
	cout << "#    Plotando Radial Manutencao para ReD = 2         #" << endl;
	cout << "#                                                    #" << endl;
	cout << "######################################################" << endl;
	
		Plot2(radialManutencao2, TD, "RadialManutencao - ReD = 2", 0);
			
		for (double k=0; k < TD.size(); k++)
		radialManutencao3.push_back(Stehfest.StehfestRadialManutencao(TD[k], 3));
	
	cout << "######################################################" << endl;
	cout << "#                                                    #" << endl;
	cout << "#    Plotando Radial Manutencao para ReD =  3        #" << endl;
	cout << "#                                                    #" << endl;
	cout << "######################################################" << endl;
	
	Plot2(radialManutencao3, TD, "RadialManutencao - ReD = 3", 0);
			
		for (double k=0; k < TD.size(); k++)
		radialManutencao4.push_back(Stehfest.StehfestRadialManutencao(TD[k], 4));
	
	cout << "######################################################" << endl;
	cout << "#                                                    #" << endl;
	cout << "#    Plotando Radial Manutencao para ReD =  4        #" << endl;
	cout << "#                                                    #" << endl;
	cout << "######################################################" << endl;
	
	Plot2(radialManutencao4, TD, "RadialManutencao - ReD = 4", 0);
			
		for (double k=0; k < TD.size(); k++)
		radialManutencao5.push_back(Stehfest.StehfestRadialManutencao(TD[k], 5));
	
	cout << "######################################################" << endl;
	cout << "#                                                    #" << endl;
	cout << "#    Plotando Radial Manutencao para ReD =  5        #" << endl;
	cout << "#                                                    #" << endl;
	cout << "######################################################" << endl;
	
	Plot2(radialManutencao5, TD, "RadialManutencao - ReD = 5", 0);
			
		for (double k=0; k < TD.size(); k++)
		radialManutencao6.push_back(Stehfest.StehfestRadialManutencao(TD[k], 6));
	
	cout << "######################################################" << endl;
	cout << "#                                                    #" << endl;
	cout << "#    Plotando Radial Manutencao para ReD =  6        #" << endl;
	cout << "#                                                    #" << endl;
	cout << "######################################################" << endl;
	
	Plot2(radialManutencao6, TD, "RadialManutencao - ReD = 6", 0);
			
		for (double k=0; k < TD.size(); k++)
		radialManutencao7.push_back(Stehfest.StehfestRadialManutencao(TD[k], 7));
	
	cout << "######################################################" << endl;
	cout << "#                                                    #" << endl;
	cout << "#    Plotando Radial Manutencao para ReD =  7        #" << endl;
	cout << "#                                                    #" << endl;
	cout << "######################################################" << endl;
	
	Plot2(radialManutencao7, TD, "RadialManutencao - ReD = 7", 0);
			
		for (double k=0; k < TD.size(); k++)
		radialManutencao8.push_back(Stehfest.StehfestRadialManutencao(TD[k], 8));
	
	cout << "######################################################" << endl;
	cout << "#                                                    #" << endl;
	cout << "#    Plotando Radial Manutencao para ReD =  8        #" << endl;
	cout << "#                                                    #" << endl;
	cout << "######################################################" << endl;
	
	Plot2(radialManutencao8, TD, "RadialManutencao - ReD = 8", 0);
			
	cout << "######################################################" << endl;
	cout << "#                                                    #" << endl;
	cout << "#         Criando novo terminal do gnuplot           #" << endl;
	cout << "#                                                    #" << endl;
	cout << "######################################################" << endl;
	
	for (double k=0; k < TD.size(); k++)
		linearinfinito.push_back(Stehfest.StehfestLinearInfinito(TD[k]));
		
	
	cout << "######################################################" << endl;
	cout << "#                                                    #" << endl;
	cout << "#            Plotando Linear Infinito                #" << endl;
	cout << "#                                                    #" << endl;
	cout << "######################################################" << endl;
	
	Plot3(linearinfinito, TD, "Linear Infinito", "Tempo", "tD");
	
	for (double k=0; k < TD.size(); k++)
		linearselado.push_back(Stehfest.StehfestLinearSelado(TD[k]));
		
		
	cout << "######################################################" << endl;
	cout << "#                                                    #" << endl;
	cout << "#             Plotando Linear Selado                 #" << endl;
	cout << "#                                                    #" << endl;
	cout << "######################################################" << endl;
	
	Plot4(linearselado, TD, "Linear Selado", "Espaco", "xD");
	
	for (double k=0; k < TD.size(); k++)
		linearmanutencao.push_back(Stehfest.StehfestLinearManutencao(TD[k]));
		
		
	cout << "######################################################" << endl;
	cout << "#                                                    #" << endl;
	cout << "#   Plotando Linear com Manutencao de Pressao        #" << endl;
	cout << "#                                                    #" << endl;
	cout << "######################################################" << endl;
	
	Plot5(linearmanutencao, TD, "Linear com Manutencao de Pressao", "Espaco", "xD");
	
	cout << "######################################################" << endl;
	cout << "#                                                    #" << endl;
	cout << "#Todos arquivos de saida estao salvos na pasta ./Src #" << endl;
	cout << "#                                                    #" << endl;
	cout << "# Pressione ENTER para destruir arquivos temporarios #" << endl;
	cout << "#             e encerrar programa...                 #" << endl;
	cout << "#                                                    #" << endl;
	cout << "######################################################" << endl;
	
	cin.get();
	
}
