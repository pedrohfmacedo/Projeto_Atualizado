#ifndef CLIENTE_H
#define CLIENTE_H

class Cadastro_cliente{
	//Dados da pessoa
	string nome_completo;
	string cpf;
	string contato;
	//Endereço da pessoa
	string cep;
	string rua;
	string bairro;
	int numero;
	string complemento;
public:
	//Construtor para inicializar a variavel
	Cadastro_cliente(string = " ",string = " ",string = " ",string = " ", string = " ", string = " ", int = 0, string  = " ");
	//Metodo para Cadastrar os dados
	void set_nome(string);
	void set_cpf(string);
	void set_contato(string);
	void set_cep(string);
	void set_rua(string);
	void set_bairro(string);
	void set_numero(int);
	void set_complemento(string);
	//Metodo para impressao dos dados
	string get_nome();
	string get_cpf();
	string get_contato();
	string get_cep();
	string get_rua();
	string get_bairro();
	int  get_numero();
	string get_complemento();
	void get_cliente();

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
