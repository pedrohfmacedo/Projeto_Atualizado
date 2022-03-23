#ifndef ESTOQUE_H
#define ESTOQUE_H

#include "Cordas.h"
#include "Percussao.h"

class Estoque
{   // Definindo vectors
	vector <Cordas> Lista_Cordas;
	vector <Percussao> Lista_Percurssao;
	// Método para ler produto
	void lerCordas();
	void lerPercurssao();

public:
    // Método para inserir produto
    bool inserirPercussao(Percussao); //
    bool inserirCordas(Cordas);

    // Método para remover produto
    bool removerPercussao(string); //
    bool removerCordas(string);

    // Métodos para pesquisar produto
    bool pesquisarPercussao(string) const; //
    bool pesquisarCordas(string) const;


    // Método para salvar produto
    bool salvarPercussao();					//
    bool salvarCordas();

	bool set_SaidaEstoquePercussao(string, int);
	bool set_EntradaEstoquePercussao(string, int);
	bool set_SaidaEstoqueCordas(string,  int);
	bool set_EntradaEstoqueCordas(string, int);

	// Método para imprimir produto
	void imprimePercussao() const; //
	void imprimeCordas() const;

	// Método para ordenar produto
    void ordenaPercussao(); //
    void ordenaCordas();

	int get_indicePercussao(string) const; //
	int get_indiceCordas(string) const;
	
	vector <Percussao> get_ListaPercussao() const;
	vector <Cordas> get_ListaCordas() const;

};
#endif
