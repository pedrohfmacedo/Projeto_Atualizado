#include "Cliente.h"

Cliente::Cliente(string nome_completo, string cpf, string contato, string cep, string rua, string bairro , int numero, string complemento){
	this->nome_completo = nome_completo;
	this->cpf = cpf;
	this->contato = contato;
	this->cep = cep;
	this->rua = rua;
	this->bairro = bairro;
	this->numero = numero;
	this->complemento = complemento;
	
}
void Cliente::set_nome(string nome_completo){
	this->nome_completo = nome_completo;
}
void Cliente::set_cpf(string cpf){
	this->cpf = cpf;
}
void Cliente::set_contato(string contato){
	this->contato = contato;
}
void Cliente::set_cep(string cep){
	this->cep = cep;
}
void Cliente::set_rua(string rua){
	this->rua = rua;
}
void Cliente::set_bairro(string bairro){
	this->bairro = bairro;
}
void Cliente::set_numero(int numero){
	this->numero = numero;
}
void Cliente::set_complemento(string complemento){
	this->complemento = complemento;
}
//Metodo para impressao dos dados
string Cliente::get_nome(){
	return nome_completo;
}
string Cliente::get_cpf(){                          
	return cpf;
}
string Cliente::get_contato(){
	return contato;
}
string Cliente::get_cep(){
	return cep;
}
string Cliente::get_rua(){
	return rua;
}
string Cliente::get_bairro(){
	return bairro;
}
int  Cliente::get_numero(){
	return numero;
}
string Cliente::get_complemento(){
	return complemento;
}
bool Cliente::inserirCliente(Cliente paux)
{
	for (int i = 0;i < Clientes.size(); i++){
		if(Clientes[i].get_nome() == paux.get_nome()){
			return false;
		}
	}
	Clientes.push_back(paux);
	return true;
}
bool Cliente::verifica_cliente()
{
	return Clientes.empty();
}
void Cliente::get_cliente(){
	cout << "NOME COMPLETO : " << get_nome() << endl;
	cout << "CPF : " << get_cpf () << endl;
	cout << "NUMERO PARA CONTATO : " << get_contato() << endl;
	cout <<"RUA : " << get_rua() << endl;
	cout <<"NUMERO DA CASA/APARTAMENTO : "<< get_numero()<< endl;
	cout <<"CEP : "<<  get_cep() << endl;
	cout <<"COMPLEMENTO: "<< get_complemento() << endl;
}
