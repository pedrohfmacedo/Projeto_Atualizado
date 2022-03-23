#include "Estoque.h"
#include "Sobrecargas.h"

Estoque::Estoque(){
	lerCordas();
	lerPercurssao();
}
bool Estoque::inserirPercussao(Percussao p.aux){
	for (int i = 0;i < Lista_Percurssao.size; i++){
		if(Lista_percurssao[i].get_codigo() == p.aux.get_codigo()){
			return false;
		}
	}
	Lista_Percurssao.size(p.aux);
	return true;
}

bool Estoque::inserirCordas(Cordas c.aux){
	for (int i = 0;i < Lista_Cordas.size; i++){
		if(Lista_Cordas[i].get_codigo() == c.aux.get_codigo()){
			return false;
		}
	}
	Lista_Cordas.size(c.aux);
	return true;
}

bool Estoque::removerPercussao(string codigo){
	unsigned contador(0);
	for(unsigned i(0);i<Lista_Percussao.size();i++){
		if(Lista_Percussao[i].get_codigo() == codigo){
			Lista_Percussao.erase(Lista_Percussao.begin() + i);
			return true;
		}
		else{
			contador++
		}
	}
	return false;
}

bool Estoque::removerCordas(string codigo){
	unsigned contador(0);
	for(unsigned i(0);i<Lista_Cordas.size();i++){
		if(Lista_Cordas[i].get_codigo() == codigo){
			Lista_Cordas.erase(Lista_Cordas.begin() + i);
			return true;
		}
		else{
			contador++
		}
	}
	return false;
}

bool Estoque::pesquisarPercussao(string codigo) const{
	unsigned contador(0);
	for(unsigned i(0); i < Lista_Percussao.size(); i++)
	{
		if(lista_Percussao[i].get_codigo() == codigo)
		{
			lista_percussao[i].imprime();
			return true;
		}
		else{
			contador++;
		}
	}	
	if(contador == Lista_Percussao.size()){
		return false;
	}
	return false;
	
}

bool Estoque::pesquisarCordas(string codigo) const{
	unsigned contador(0);
	for(unsigned i(0); i < Lista_Cordas.size(); i++)
	{
		if(lista_Cordas[i].get_codigo() == codigo)
		{
			lista_Cordas[i].imprime();
			return true;
		}
		else{
			contador++;
		}
	}	
	if(contador == Lista_Cordas.size()){
		return false;
	}
	return false;
	
}

bool Estoque::salvarPercussao(){
	ofstream arquivo; //arquivo de escrita
	arquivo.open("Percussao.txt"); // abre arquivo

	if (arquivo.is_open())
	{
		for (int i = 0; i < Percussao.size(); i++)
		{
			arquivo << Percussao[i].get_nome() << endl;
			arquivo << Percussao[i].get_precoVenda() << endl;
			arquivo << Percussao[i].get_precoFabrica() << endl;
			arquivo << Percussao[i].get_quantidade() << endl;
			arquivo << Percussao[i].get_cor() << endl;
			arquivo << Percussao[i].get_codigo() << endl;
			arquivo.close(); //fecha arquivo
		}
	}
	else
	{
		cout << "Não foi possível gravar no arquivo" << endl;
	}	
}

bool Estoque::salvarCordas(){
	ofstream arquivo; //arquivo de escrita
	arquivo.open("Cordas.txt"); // abre arquivo

	if (arquivo.is_open())
	{
		for (int i = 0; i < Cordas.size(); i++)
		{
			arquivo << Cordas[i].get_nome() << endl;
			arquivo << Cordas[i].get_precoVenda() << endl;
			arquivo << Cordas[i].get_precoFabrica() << endl;
			arquivo << Cordas[i].get_quantidade() << endl;
			arquivo << Cordas[i].get_cor() << endl;
			arquivo << Percussao[i].get_codigo() << endl;
			arquivo.close(); //fecha arquivo
		}
	}
	else
	{
		cout << "Não foi possível gravar no arquivo" << endl;
	}	
}


void Estoque::ordenaPercussao(){
	
	int aux;
	
	for(unsigned i = 0; i< Lista_Percussao.size()-1;i++){
		
		aux = i;
		
		for(unsigned index = i + 1; index < Lista_Percussao.size();index++){
			if(Lista_Percussao[index].get_nome().compare(Lista_Percussao[aux].get_nome())<0){
				aux = index;
			}
		}
	
	Percussao Lista_Percussao_aux;
	Lista_Percussao_aux = Lista_Percussao[i];
	Lista_Percussao[i] = Lista_Percussao[aux];
	Lista_Percussao[aux] = Lista_Percussao_aux;
	}
}

void Estoque::ordenaCordas(){
	
	int aux;
	
	for(unsigned i = 0; i< Lista_Cordas.size()-1;i++){
		
		aux = i;
		
		for(unsigned index = i + 1; index < Lista_Cordas.size();index++){
			if(Lista_Cordas[index].get_nome().compare(Lista_Cordas[aux].get_nome())<0){
				aux = index;
			}
		}
	
	Cordas Lista_Cordas_aux;
	Lista_Cordas_aux = Lista_Cordas[i];
	Lista_Cordas[i] = Lista_Cordas[aux];
	Lista_Cordas[aux] = Lista_Cordas_aux;
	}
}

int Estoque::get_indicePercussao(string codigo)
{
	for(unsigned i(0); i < Lista_Percussao.size(); i++)
	{
		if(Lista_Perucssao[i].get_codigo() == codigo)
		{
			return i;
		}
	}
	
	return -1;
}

int Estoque::get_indiceCordas(string codigo)
{
	for(unsigned i(0); i < Lista_Cordas.size(); i++)
	{
		if(Lista_Cordas[i].get_codigo() ==codigo)
		{
			return i;
		}
	}
	
	return -1;
}

bool Estoque::set_SaidaEstoquePercussao(string codigo, int quantidade){
	if(pesquisarPercussao(codigo))
	{
		int indice = get_indicePercussao(codigo);
		cout << quantidade << endl;
		Lista_Perucssao[i].set_quantidade(Lista_Perucssao[i]get_quantidade()- quantidade);
		return true;
	}
	
	return false;
}

bool Estoque::set_EntradaEstoquePercussao(string codigo, int quantidade)
	{
	if(pesquisarPercussao(codigo))
	{
		int indice = get_indicePercussao(codigo);
		cout << quantidade << endl;
		Lista_Perucssao[i].set_quantidade(Lista_Perucssao[i]get_quantidade()+ quantidade);
		return true;
	}
	
	return false;
}

bool Estoque::set_EntradaEstoqueCordas(string codigo, int quantidade)
	{
	if(pesquisarCordas(codigo))
	{
		int indice = get_indiceCordas(codigo);
		cout << quantidade << endl;
		Lista_Cordas[i].set_quantidade(Lista_Cordas[i]get_quantidade()+ quantidade);
		return true;
	}
	
	return false;
}

bool Estoque::set_SaidaEstoqueCordas(string codigo, int quantidade)
	{
	if(pesquisarCordas(codigo))
	{
		int indice = get_indiceCordas(codigo);
		cout << quantidade << endl;
		Lista_Cordas[i].set_quantidade(Lista_Cordas[i]get_quantidade()- quantidade);
		return true;
	}
	
	return false;
}



vector <Percussao>Estoque:: get_ListaPercussao() const{
	return Lista_Percurssao;
}

vector <Cordas>Estoque:: get_ListaCordas() const{
	return Lista_Cordas;
}

void Estoque::imprimePercussao() const
{
	cout << Lista_Percurssao() << endl;
	for(unsigned i(0); i < Lista_Percurssao.size(); i++)
	{
		cout << "===== "<< i+1 << "Â° Livro =====" << endl;
		Lista_Percurssao[i].imprime();
		cout << endl;
	}
}

void Estoque::imprimeCordas() const
{
	cout << Lista_Cordas() << endl;
	for(unsigned i(0); i < Lista_Cordas.size(); i++)
	{
		cout << "===== "<< i+1 << "Â° Livro =====" << endl;
		Lista_Cordas[i].imprime();
		cout << endl;
	}
}


Estoque::~Estoque(){
	salvarPercussao();
	salvarCordas();
}
