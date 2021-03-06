/*
 * Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e Computacao
 * EEL670 - Linguagens de Programacao - Turma 2020/2
 * Prof. Miguel Elias M. Campista
 * Autor: Luiz Carlos Aguiar Carrion & Maria Eduarda de Souza Mafra
 * Trabalho Final - Etapa 2
 * Decricao: Prototipo da struct Store
*/ 

#pragma once

#include <string>

using namespace std;

class Store {
	public:
		Store(string, bool = true);

		bool isSelected();
		void changeSelection(); 	
		string name;

	private:
		bool selected;
};
