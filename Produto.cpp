#include "Produto.h"


Produto::Produto (string nome, string cor, string codigo, float precoVenda, float precoFabrica, int quantidade){
	this->nome = nome;
	this->cor = cor;
	this->codigo = codigo;
	this->precoVenda = precoVenda;
	this->precoFabrica = precoFabrica;
	this->quantidade = quantidade;
}

Produto::~Produto(){
	
}

void Produto::set_nome(string nome){
	this->nome = nome;	
}

string Produto::get_nome() const{
	return nome;
}

void Produto::set_cor(string cor){
	this->cor = cor;
}

string Produto::get_cor() const{
	return cor;
}

void Produto::set_codigo(string codigo){
	this->codigo = codigo;
}

string Produto::get_codigo() const{
	return codigo;
}

void Produto::set_precoVenda(float precoVenda){
	this->precoVenda = precoVenda;
}

float Produto::get_precoVenda() const{
	return precoVenda;
}

void Produto::set_precoFabrica(float precoFabrica){
	this->precoFabrica = precoFabrica;
}

float Produto::get_precoFabrica() const{
	return precoFabrica;
}

int Produto::get_quantidade() const{
	return quantidade;
}

void Produto::set_quantidade(int quantidade){
	this->quantidade = quantidade;
}

void Produto::imprime(){
	cout<<"Nome do Produto: "<<fixed<<setprecision(2)<<get_nome()<<endl
		<<"Cor: "<<get_cor()<<endl
		<<"Código: "<<get_codigo()<<endl
		<<"Preço de Venda: R$ "<<get_precoVenda()<<endl
		<<"Preço de Fábrica: R$ "<<get_precoFabrica()<<endl
		<<"Quantidade: "<<get_quantidade()<<endl;
}

