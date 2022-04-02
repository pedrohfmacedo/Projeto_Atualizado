#include "Estoque.h"
#include <vector>

Estoque::Estoque(){
	ifstream arquivo; // arquivo de leitura
	arquivo.open("Percussao.txt"); // abre arquivo

	string nome_aux, cor_aux, codigo_aux, tipo_aux;
	float precoVenda_aux, precoFabrica_aux;
	int quantidade_aux;
	
	if(arquivo.is_open())
	{
		while(!arquivo.eof())  // enquanto não for fim de arquivo...
		{

			getline(arquivo, nome_aux);

			if (arquivo.eof()){
				break;

			getline(arquivo, tipo_aux);
			getline(arquivo, cor_aux);
			getline(arquivo, codigo_aux);			
			arquivo >> precoVenda_aux;
			arquivo >> precoFabrica_aux;
			arquivo >> quantidade_aux;
			
			Percussao aux(nome_aux, cor_aux, codigo_aux, precoVenda_aux, precoFabrica_aux, quantidade_aux, tipo_aux); //cria um objeto de percussao com os dados lidos no arquivo
			Lista_Percussao.push_back(aux);  //insere o objeto percussao na lista
			arquivo.ignore();
			}
		}
		arquivo.close(); //fecha o 
		ifstream arquivo; // arquivo de leitura
		
		arquivo.open("Cordas.txt"); // abre arquivo

		string nome_aux, cor_aux, codigo_aux;
		float precoVenda_aux, precoFabrica_aux;
		int quantidade_aux, quantidadecordas_aux;
	
		if(arquivo.is_open())
		{
			while(!arquivo.eof())  // enquanto não for fim de arquivo...
			{

				getline(arquivo, nome_aux);

				if (arquivo.eof()){
					break;
					
   				getline(arquivo, cor_aux);
				getline(arquivo, codigo_aux);
				arquivo >> precoVenda_aux;
				arquivo >> precoFabrica_aux;
				arquivo >> quantidade_aux;

				Cordas aux(nome_aux, cor_aux, codigo_aux, precoVenda_aux, precoFabrica_aux, quantidade_aux, quantidadecordas_aux); //cria um objeto de percussao com os dados lidos no arquivo
			   	Lista_Cordas.push_back(aux);  //insere o objeto percussao na lista
				arquivo.ignore();
				}
			}
			arquivo.close(); //fecha o arquivo

		}
    }
	else{
		cout << "Não foi possível abrir o arquivo" << endl;
	}	
}
bool Estoque::inserirPercussao(Percussao paux)
{
	for (int i = 0;i < Lista_Percussao.size(); i++){
		if(Lista_Percussao[i].get_codigo() == paux.get_codigo()){
			return false;
		}
	}
	Lista_Percussao.push_back(paux);
	return true;
}

bool Estoque::inserirCordas(Cordas caux){
	for (int i = 0;i < Lista_Cordas.size(); i++){
		if(Lista_Cordas[i].get_codigo() == caux.get_codigo()){
			return false;
		}
	}
	Lista_Cordas.push_back(caux);
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
			contador++;
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
			contador++;
		}
	}
	return false;
}

bool Estoque::pesquisarPercussao(string codigo) {
	unsigned contador(0);
	for(unsigned i(0); i < Lista_Percussao.size(); i++)
	{
		if(Lista_Percussao[i].get_codigo() == codigo)
		{
			Lista_Percussao[i].imprime();
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

bool Estoque::pesquisarCordas(string codigo) {
	unsigned contador(0);
	for(unsigned i(0); i < Lista_Cordas.size(); i++)
	{
		if(Lista_Cordas[i].get_codigo() == codigo)
		{
			Lista_Cordas[i].imprime();
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

void Estoque::salvarPercussao(){
	
	ofstream arquivo; //arquivo de escrita
	arquivo.open("Percussao.txt"); // abre arquivo

	if (arquivo.is_open())
	{
		for (int i = 0; i < Lista_Percussao.size(); i++)
		{
			arquivo << Lista_Percussao[i].get_nome() << endl;
			arquivo << Lista_Percussao[i].get_tipo() << endl;
			arquivo << Lista_Percussao[i].get_cor() << endl;
			arquivo << Lista_Percussao[i].get_codigo() << endl;
			arquivo << Lista_Percussao[i].get_precoVenda() << endl;
			arquivo << Lista_Percussao[i].get_precoFabrica() << endl;
			arquivo << Lista_Percussao[i].get_quantidade() << endl;
		}
		arquivo.close(); //fecha arquivo
	}
	else
	{
		cout << "Não foi possível gravar no arquivo" << endl;
	}	
}

void Estoque::salvarCordas(){
	ofstream arquivo; //arquivo de escrita
	arquivo.open("Cordas.txt"); // abre arquivo

	if (arquivo.is_open())
	{
		for (int i = 0; i < Lista_Cordas.size(); i++)
		{
			arquivo << Lista_Cordas[i].get_nome() << endl;
			arquivo << Lista_Cordas[i].get_cor() << endl;
			arquivo << Lista_Cordas[i].get_codigo() << endl;
			arquivo << Lista_Cordas[i].get_precoVenda() << endl;
			arquivo << Lista_Cordas[i].get_precoFabrica() << endl;
			arquivo << Lista_Cordas[i].get_quantidade() << endl;
			
		}
		arquivo.close(); //fecha arquivo
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

int Estoque::get_indicePercussao(string codigo) const
{
	for(unsigned i(0); i < Lista_Percussao.size(); i++)
	{
		if(Lista_Percussao[i].get_codigo() == codigo)
		{
			return i;
		}
	}
	
	return -1;
}

int Estoque::get_indiceCordas(string codigo) const
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
//
bool Estoque::set_SaidaEstoquePercussao(string codigo, int quantidade){
	if(pesquisarPercussao(codigo))
	{
		int indice = get_indicePercussao(codigo);
		
		if(Lista_Percussao[indice].get_quantidade() == quantidade)
		{
			removerPercussao(codigo);
			return true;
			
		}
		else if(Lista_Percussao[indice].get_quantidade() > quantidade){
			Lista_Percussao[indice].set_quantidade(Lista_Percussao[indice].get_quantidade()- quantidade);
			return true;

		}
		else if(Lista_Percussao[indice].get_quantidade() < quantidade){
			return false;

		}
		else{
		return false;
		}

	}
}

bool Estoque::set_EntradaEstoquePercussao(string codigo, int quantidade)
	{
	if(pesquisarPercussao(codigo))
	{
		int indice = get_indicePercussao(codigo);
		Lista_Percussao[indice].set_quantidade(Lista_Percussao[indice].get_quantidade()+ quantidade);
		return true;
	}
	
	return false;
}

bool Estoque::set_EntradaEstoqueCordas(string codigo, int quantidade)
	{
	if(pesquisarCordas(codigo))
	{
		int indice = get_indiceCordas(codigo);
		Lista_Cordas[indice].set_quantidade(Lista_Cordas[indice].get_quantidade()+ quantidade);
		return true;
	}
	
	return false;
}

bool Estoque::set_SaidaEstoqueCordas(string codigo, int quantidade)
{
		if(pesquisarCordas(codigo))
	{
		int indice = get_indiceCordas(codigo);
		
		if(Lista_Cordas[indice].get_quantidade() == quantidade)
		{
			removerCordas(codigo);
			return true;
			
		}
		else if(Lista_Cordas[indice].get_quantidade() > quantidade){
			Lista_Cordas[indice].set_quantidade(Lista_Cordas[indice].get_quantidade()- quantidade);
			return true;

		}
		else if(Lista_Cordas[indice].get_quantidade() < quantidade){
			return false;

		}
		else{
			return false;
		}

	}
}

void Estoque::imprimePercussao()
{
	cout << "Lista de instrumentos de Percussão" << endl << endl;
		for (int i = 0; i < Lista_Percussao.size(); i++)
		{
			Lista_Percussao[i].imprime_percussao();
			cout << endl;
		}
}

void Estoque::imprimeCordas() 
{
	cout << "Lista de instrumentos de Cordas" << endl << endl;
		for (int i = 0; i < Lista_Cordas.size(); i++)
		{
			Lista_Cordas[i].imprime_cordas();
			cout << endl;
		}
}
bool Estoque::verifica_Percussao()
{
	return Lista_Percussao.empty();
}

bool Estoque::verifica_Cordas()
{
	return Lista_Cordas.empty();
}

Percussao Estoque::get_ListaPercussao(string codigo)
{
	for (int i = 0; i < Lista_Percussao.size(); i++)
	{
		if(Lista_Percussao[i].get_codigo() == codigo)
		{
			return Lista_Percussao[i];
		}	
	}
}
Cordas Estoque::get_ListaCordas(string codigo)
{
	for (int i = 0; i < Lista_Cordas.size(); i++)
	{
		if(Lista_Cordas[i].get_codigo()== codigo)
		{
			return Lista_Cordas[i];
		}	
	}
}

Estoque::~Estoque(){
	salvarPercussao();
	salvarCordas();
}
