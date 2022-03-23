#include "Vendedor.h"

Cadastro_vendedor::Cadastro_vendedor(string nome_vendedor, string cpf, int chaveAcesso){
	this->nome_vendedor=nome_vendedor;
	this->cpf=cpf;
	this->chaveAcesso=chaveAcesso;
}	
void Cadastro_vendedor:: set_nome(string){
	this->nome_vendedor = nome_vendedor;
}
void Cadastro_vendedor::set_cpf(string){
	this->cpf=cpf;
}
void Cadastro_vendedor::set_chaveAcesso(int){
	this->chaveAcesso=chaveAcesso;
}
//Metodo para impressao dos dados
string Cadastro_vendedor::get_nome(){
	return nome_vendedor;	
}
string Cadastro_vendedor::get_cpf(){
	return cpf;
}
int Cadastro_vendedor::get_chaveAcesso(){
	return chaveAcesso;
}
void Cadastro_vendedor::get_imprimavendedor(){
	cout << "VENDEDOR : " << get_nome() <<endl;
	cout << "CPF : " << get_cpf() <<endl;
	cout << "Nº VENDEDOR : " << get_chaveAcesso() <<endl;
}
