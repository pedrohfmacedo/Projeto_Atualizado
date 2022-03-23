#include "Cordas.h"

Cordas::Cordas(string nome, string cor, string codigo, float precoVenda, float precoFabrica, int quantidade, int qtdCordas)
	   :Produto(nome, cor, codigo, precoVenda, precoFabrica, quantidade){
	   this ->	qtdCordas = qtdCordas;
}

void Cordas::set_qtdCordas(int qtdCordas){
	this -> qtdCordas = qtdCordas;
}

int Cordas::get_qtdCordas(){
	return qtdCordas;
}

void Cordas::imprime_cordas(){
	imprime();
	cout<<"Quantidade de cordas: "<<get_qtdCordas()<<endl;
}
