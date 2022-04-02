#include "Vendedor.h"

Vendedor::Vendedor(string nome_vendedor, string cpf, int chaveAcesso){
	this->nome_vendedor = nome_vendedor;
	this->cpf=cpf;
	this->chaveAcesso=chaveAcesso;
}	
void Vendedor:: set_nome(string){
	this->nome_vendedor = nome_vendedor;
}
void Vendedor::set_cpf(string){
	this->cpf=cpf;
}
void Vendedor::set_chaveAcesso(int){
	this->chaveAcesso=chaveAcesso;
}
//Metodo para impressao dos dados
string Vendedor::get_nome(){
	return nome_vendedor;	
}
string Vendedor::get_cpf(){
	return cpf;
}
int Vendedor::get_chaveAcesso(){
	return chaveAcesso;
}
bool Vendedor::cadastrar_vendedor(Vendedor aux)
{
	for (int i = 0; i < Vendedores.size(); i++)
	{
		if(Vendedores[i].get_chaveAcesso() == aux.get_chaveAcesso() )
		{
			return false;
		}
	}
	Vendedores.push_back(aux);
	return true;
}
bool Vendedor::verifica_login(int chave_acesso)
{	for (int i = 0; i < Vendedores.size(); i++)
	{
		if(Vendedores[i].get_chaveAcesso() == chave_acesso)
		{
			return true;
		}
		else {
			return false;
		}
	}
	
}
void Vendedor::get_imprimavendedor(){
	cout << "VENDEDOR : " << get_nome() <<endl;
	cout << "CPF : " << get_cpf() <<endl;
	cout << "Nº VENDEDOR : " << get_chaveAcesso() <<endl;
}
