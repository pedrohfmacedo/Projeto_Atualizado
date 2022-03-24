// Arquivo destinado as sobrecargas utilizadas no projeto.

#include "Cordas.h"
#include "Percussao.h"

#include <cstdlib>
#include <string>

// Sobrecarregando o operador de saída << para que possa gravar um objeto inteiro em um arquivo.
ofstream& operator << (ofstream& arquivo1, Cordas& c)
{
	arquivo1 << c.get_nome() << endl;
	arquivo1 << c.get_cor() << endl;
	arquivo1 << c.get_codigo() << endl;
	arquivo1 << c.get_precoFabrica() << endl;
	arquivo1 << c.get_precoVenda() << endl;
	arquivo1 << c.get_quantidade()<<endl;
	arquivo1 << c.get_qtdCordas();
	
	return arquivo1;
}


// Sobrecarregando o operador de saída << para que possa gravar um objeto inteiro em um arquivo.
ofstream& operator << (ofstream& arquivo2, Percussao& p)
{
	arquivo2 << p.get_nome() << endl;
	arquivo2 << p.get_cor() << endl;
	arquivo2 << p.get_codigo() << endl;
	arquivo2 << p.get_precoFabrica() << endl;
	arquivo2 << p.get_precoVenda() << endl;
	arquivo2 << p.get_quantidade() << endl;
	arquivo2 << p.get_tipo();
	
	return arquivo2;
}





// Sobrecarregando o operador de entrada >> para que possa ler um objeto inteiro de um arquivo.
ifstream& operator >> (ifstream& arquivo1, Cordas& c)
{
	string nome,codigo,cor;
	int quantidade, qtdCordas;
	float precoVenda, precoFabrica;


	getline(arquivo1, nome);
	c.set_nome(nome); 
	arquivo1 >> cor; 
	arquivo1.ignore();
	c.set_cor(cor);
	arquivo1 >> codigo; 
	arquivo1.ignore();
	c.set_codigo(codigo);
	arquivo1 >> precoFabrica; 
	arquivo1.ignore();
	c.set_precoFabrica(precoFabrica);
	arquivo1 >> precoVenda; 
	arquivo1.ignore();
	c.set_precoVenda(precoVenda);
	arquivo1 >> quantidade; 
	arquivo1.ignore();
	c.set_quantidade(quantidade);
	arquivo1 >> qtdCordas;
    arquivo1.ignore();
    c.set_qtdCordas(qtdCordas);
	
	
	return arquivo1;
}

// Sobrecarregando o operador de entrada >> para que possa ler um objeto inteiro de um arquivo.
ifstream& operator >> (ifstream& arquivo2, Percussao& p)
{
	string nome,codigo, cor, tipo;
	int quantidade;
	float precoVenda, precoFabrica;
	

	getline(arquivo2, nome);
	p.set_nome(nome); 
	arquivo2 >> cor; 
	arquivo2.ignore();
	p.set_cor(cor);
	arquivo2 >> codigo; 
	arquivo2.ignore();
	p.set_codigo(codigo);
	arquivo2 >> precoFabrica; 
	arquivo2.ignore();
	p.set_precoFabrica(precoFabrica);
	arquivo2 >> precoVenda; 
	arquivo2.ignore();
	p.set_precoVenda(precoVenda);
	arquivo2 >> quantidade; 
	arquivo2.ignore();
	p.set_quantidade(quantidade);
	arquivo2 >> tipo;
    arquivo2.ignore();
    p.set_tipo(tipo);
	
	
	return arquivo2;
}

