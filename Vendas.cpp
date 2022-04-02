# include "Vendas.h"
# include "Cordas.h"
# include "Percussao.h"
# include "Estoque.h"
# include "Vendas.h"

# include <iomanip>
# include <fstream>

Vendas::Vendas(){
	float f;
	
    ifstream arquivo;
    arquivo.open("faturamento.txt");
    arquivo.close();

}
Vendas::~Vendas(){
	{
	ofstream arquivo;
	arquivo.open("faturamento.txt", std::ofstream::out | std::ofstream::trunc);
	if (arquivo.is_open())
	{
		arquivo.close();
	}
	else cout << "Não foi possível abrir o arquivo.";
}
}

void Vendas::inserirVendasCordas(Cordas aux){
	Lista_Cordas.push_back(aux);
}

void Vendas::inserirVendasPercussao(Percussao aux){
	Lista_Percussao.push_back(aux);
}

void Vendas::registro_vendas_Cordas(){
		cout << fixed << setprecision(2);
		
		ofstream arquivo;
		arquivo.open ("Vendas.txt", std::ofstream::out | std::ofstream::app);
		if (arquivo.is_open())
		{
			arquivo << "=== Vendas ===" <<endl<<endl;
			for(unsigned i(0); i < Lista_Cordas.size(); i++)
			{
				arquivo << "Nome do Produto: " << Lista_Cordas[i].get_nome();
				arquivo << "Preço do Produto: R$" << Lista_Cordas[i].get_precoVenda();
				arquivo << "Códico de Barras: " << Lista_Cordas[i].get_codigo();
			}
			arquivo << endl;
			arquivo.close();
		}
		else cout << "Não foi possível abrir o arquivo.";
			
}

void Vendas::registro_vendas_Percussao(){
		cout << fixed << setprecision(2);
		
		ofstream arquivo;
		arquivo.open ("Vendas.txt", std::ofstream::out | std::ofstream::app);
		if (arquivo.is_open())
		{
			arquivo << "=== Vendas ===" <<endl<<endl;
			for(unsigned i(0); i < Lista_Percussao.size(); i++)
			{
				arquivo << "Nome do Produto: " << Lista_Percussao[i].get_nome();
				arquivo << "Preço do Produto: R$" << Lista_Percussao[i].get_precoVenda();
				arquivo << "Códico de Barras: " << Lista_Percussao[i].get_codigo() << endl;
			}
			arquivo << endl;
			arquivo.close();
		}
		else cout << "Não foi possível abrir o arquivo.";
			
}



