#ifndef VENDEDOR_H
#define VENDEDOR_H

class Vendedor
{
	string nome_vendedor;
	string cpf;
	int chaveAcesso;
	
   vector<Vendedor> Vendedores;
   
public:
	//construtor
	Vendedor(string = " ", string = " ", int = 0);

	void set_nome(string);
	void set_cpf(string);
	void set_chaveAcesso(int);
	
	bool cadastrar_vendedor(Vendedor);
	bool verifica_login(int);
	string get_nome();
	string get_cpf();
	int get_chaveAcesso();
	void get_imprimavendedor();

};
#endif
/*UFCG - CCEI - ENGENHARIA ELETRICA 2020.2
TECNICAS DE PROGRAMACAO 
PROFESSOR: MARCUS SALERNO
GRUPO: David Emanuel Albuquerque dos Santos- Turma 02
José Vanilson de Brito Júnior - Turma 01
Lameque Dias de Oliveira - Turma 01
Pedro Henrique Fernandes Macêdo -  Turma 02
Felipe Faustino do Nascimento- Turma 02
Monitora:Ravânia Luciano Martildes
PROJETO: LOJA DE INSTRUMENTOS MUSIDOM 
DESCRIÇÃO: O programa deve realizar diversas funções entre eles, o cadastro de 
produto, de cliente, e vendedores, gerenciar o estoque da loja, realizar pedidos
 */
