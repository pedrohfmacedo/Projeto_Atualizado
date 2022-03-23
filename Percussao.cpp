#include "Percussao.h"

Percussao::Percussao(string nome, string cor, string codigo, float precoVenda, float precoFabrica, int quantidade, string tipo)
	   	  :Produto(nome, cor, codigo, precoVenda, precoFabrica, quantidade){  
	this -> tipo = tipo;
}

void Percussao::set_tipo(string tipo){
	this -> tipo = tipo;	
}	

string Percussao::get_tipo(){
	return tipo;
}

void Percussao::imprime_percussao(){
	imprime();
	cout<<"Tipo: "<<get_tipo()<<endl;
}

