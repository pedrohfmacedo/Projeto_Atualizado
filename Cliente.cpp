#include "Cliente.h"

Cadastro_cliente::Cadastro_cliente(string nome_completo,string cpf,string contato ,string cep , string rua, string bairro , int numero, string complemento){
	this->nome_completo = nome_completo;
	this->cpf = cpf;
	this->contato = contato;
	this->cep = cep;
	this->rua = rua;
	this->bairro = bairro;
	this->numero = numero;
	this->complemento = complemento;
	
}
void Cadastro_cliente::set_nome(string nome_completo){
	this->nome_completo = nome_completo;
}
void Cadastro_cliente::set_cpf(string cpf){
	this->cpf = cpf;
}
void Cadastro_cliente::set_contato(string contato){
	this->contato = contato;
}
void Cadastro_cliente::set_cep(string cep){
	this->cep = cep;
}
void Cadastro_cliente::set_rua(string){
	this->rua = rua;
}
void Cadastro_cliente::set_bairro(string bairro){
	this->bairro = bairro;
}
void Cadastro_cliente::set_numero(int numero){
	this->numero = numero;
}
void Cadastro_cliente::set_complemento(string complemento){
	this->complemento = complemento;
}
//Metodo para impressao dos dados
string Cadastro_cliente::get_nome(){
	return nome_completo;
}
string Cadastro_cliente::get_cpf(){                          
	return cpf;
	
}
string Cadastro_cliente::get_contato(){
	return contato;
}
string Cadastro_cliente::get_cep(){
	return cep;
}
string Cadastro_cliente::get_rua(){
	return rua;
}
string Cadastro_cliente::get_bairro(){
	return bairro;
}
int  Cadastro_cliente::get_numero(){
	return numero;
}
string Cadastro_cliente::get_complemento(){
	return complemento;
}
void Cadastro_cliente::get_cliente(){
	cout << "NOME COMPLETO : " << nome_completo <<endl;
	cout << "CPF : " << cpf <<endl;
	cout << "NUMERO PARA CONTATO : " << contato <<endl;
	cout <<"RUA : " << rua <<endl;
	cout <<"NUMERO DA CASA/APARTAMENTO : "<<numero<<endl;
	cout <<"CEP : "<<cep<<endl;
	cout <<"COMPLEMENTO: "<<complemento<<endl;
}
