#ifndef ESTOQUE_H
#define ESTOQUE_H

#include "Cordas.h"
#include "Percussao.h"

class Estoque
{   // Definindo vectors
	vector <Cordas> Lista_Cordas;
	vector <Percussao> Lista_Percurssao;
	// M�todo para ler produto
	void lerCordas();
	void lerPercurssao();

public:
    // M�todo para inserir produto
    bool inserirPercussao(Percussao); //
    bool inserirCordas(Cordas);

    // M�todo para remover produto
    bool removerPercussao(string); //
    bool removerCordas(string);

    // M�todos para pesquisar produto
    bool pesquisarPercussao(string) const; //
    bool pesquisarCordas(string) const;


    // M�todo para salvar produto
    bool salvarPercussao();					//
    bool salvarCordas();

	bool set_SaidaEstoquePercussao(string, int);
	bool set_EntradaEstoquePercussao(string, int);
	bool set_SaidaEstoqueCordas(string,  int);
	bool set_EntradaEstoqueCordas(string, int);

	// M�todo para imprimir produto
	void imprimePercussao() const; //
	void imprimeCordas() const;

	// M�todo para ordenar produto
    void ordenaPercussao(); //
    void ordenaCordas();

	int get_indicePercussao(string) const; //
	int get_indiceCordas(string) const;
	
	vector <Percussao> get_ListaPercussao() const;
	vector <Cordas> get_ListaCordas() const;

};
#endif
