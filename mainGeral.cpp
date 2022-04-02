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
#include <fstream>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <vector>

using namespace std;
void menu_de_opcao();
void menu_bem_vindo();

#include "Produto.cpp"
#include "Cordas.cpp"
#include "Percussao.cpp"
#include "Estoque.cpp"
#include "Vendedor.cpp"
#include "Cliente.cpp"
#include "Vendas.cpp"

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	menu_bem_vindo();
	system("pause");
	system("cls");
	//criação da loja do objeto
	Estoque MUSIDOM;
	//criação do vendedor
	Vendedor novo("Josecleberson","111.225.555-72",3);
	Cliente novo_c(" "," "," "," "," "," ",0," ");
	Vendas controle;
	//variaveis dos produtos
	int opcao, qtd, cordas, seleciona;
	string color, code,name, type, codigo_selecionado;
	float valor_f, valor_v;
	
	//variaves do cliente
	int numero_c;
	string name_c, cpf_c, contato_c, rua_c, bairro_c, complemento_c, cep_c;
	
	int chave_v;
	int aux = 0;

do	
{	cout << "-------------------------------------" << endl;
	cout << "- SEJA BEM VINDO AO SISTEMA MUSIDOM -" << endl;
	cout << "-------------------------------------" << endl;
	cout << endl;
	cout << "-----------------LOGIN---------------"<<endl;
	cout << endl;
	
		while(aux!=1) {
		 cout << "Digite a chave de acesso: ";
         cin >> chave_v;
         
			 if(novo.get_chaveAcesso() == chave_v){
				 cout << "Usuário autorizado" << endl;
				 aux ++;
			}
			 else{
				 cout << "Vendedor não encontrado, tente novamente"<<endl; 
			}
		}
} while(aux != 1);

do
{
    cout<<endl;
	menu_de_opcao();
	cin >> opcao;
	
		if(opcao == 1)
		{
			cout << "Digite qual tipo de instrumento deseja cadastrar: "<<endl;
			cout << " 1) Cordas" << endl;
			cout << " 2) Percussao" << endl;
			cin >> seleciona;
			
				if(seleciona == 1){
					
				   	cout << "-----CADASTRO DE INSTRUMENTOS DE CORDAS-----" << endl << endl;
					cout << "Nome do instrumento: ";
					cin >> name;
			   	   	cout << "Cor: ";
					cin >> color;
					cout << "Quantidade de cordas do instrumento: ";
			   	   	cin >> cordas;
			   	   	cout << "Código: ";
			   	   	cin >> code;
			   	   	cout << "Valor do instrumento: ";
			   	   	cin >> valor_v;
			   	   	cout << "Valor da fábrica  " ;
			   	   	cin >> valor_f;
			   	   	cout << "Quantidade  " ;
			   	   	cin >> qtd;
			   	   	cout<<endl;
					Cordas cord(name, color, code, valor_v, valor_f, qtd, cordas);
					
					if(MUSIDOM.inserirCordas(cord)){
						cout << "INSTRUMENTO CADASTRADO COM SUCESSO!" << endl<<endl;
					 	MUSIDOM.salvarCordas();
			   	   	}
					else
					{
						cout << "INSTRUMENTO JÁ CADASTRADO" << endl<<endl;
                    }				  								
				}
				else if(seleciona == 2){
					cout << "-----CADASTRO DE INSTRUMENTOS DE PERCUSSAO-----" << endl << endl;
			   	   	cout << "Nome do instrumento: ";
			   	   	cin >> name;
			   	   	cout << "COR: ";
					cin >> color;
					cout << "Tipo: ";
					cin >> type;
					cout << "Codigo do produto: " ;
					cin >> code;
					cout << "Preço a ser vendido ";
					cin >> valor_v;
					cout << "Preço da Fábrica : ";
				   	cin >> valor_f;
					cout << "Quantidade " ;
				    cin >> qtd;
					cout<<endl;
					Percussao perc(name, color, code, valor_v, valor_f, qtd, type);
			
					if(MUSIDOM.inserirPercussao(perc)){
		    		   	   cout << "INSTRUMENTO CADASTRADO COM SUCESSO!" << endl<<endl;
                           MUSIDOM.salvarPercussao();			
					}
				}
				else
				{
					cout << "Opcção Inválida, tente novamente!" << endl<<endl;
				}
				
		}
		else if(opcao == 2)
		{
			cout << "Digite qual os instrumentos deseja visualizar o estoque: "<<endl;
			cout << " 1) Cordas" << endl;
			cout << " 2) Percussao" << endl;
			cout << " 3) Geral" << endl;
			cin >> seleciona;
			
				if(seleciona == 2){
					cout << "-------- PERCUSSAO -------- " << endl << endl;
					MUSIDOM.imprimePercussao();	
							  								
				}
				else if(seleciona == 1){
					cout << "-------- CORDAS -------- " << endl << endl;
					MUSIDOM.imprimeCordas();
				}
				else if(seleciona == 3){
					cout << "-------- TODOS OS INSTRUMENTOS -------- " << endl << endl;
					cout << "-------- PERCUSSAO -------- " << endl << endl;
					MUSIDOM.imprimePercussao();			  	
					cout << "-------- CORDAS -------- " << endl << endl;
					MUSIDOM.imprimeCordas();
				}
				else
				{
					cout << "Opcção Inválida, tente novamente" << endl << endl;
				}
				
		}
		else if(opcao == 3){
			cout << "Digite qual o tipo de instrumentos deseja pesquisar o estoque: "<<endl;
			cout << " 1) Cordas" << endl;
			cout << " 2) Percussao" << endl;
			cout << " 3) Geral" << endl;
			cin >> seleciona;
			
				if(seleciona == 2){
					cout << "-------- PERCUSSÃO -------- " << endl << endl;
					cout << "DIGITE O CÓDGIO DO PRODUTO PARA PESQUISAR: " ;
					cin >> codigo_selecionado;
		 			if (MUSIDOM.pesquisarPercussao(codigo_selecionado)){
    					cout << "PRODUTO DISPONÍVEL!" << endl << endl;
						cout << "PRODUTO NA POSIÇÃO "<< MUSIDOM.get_indicePercussao(codigo_selecionado);
				}
					else{
				   		cout<< "Produto não encontrado! "<<endl;
				}			  								
				}
				else if(seleciona == 1){
						cout << "-------- CORDAS -------- " << endl << endl;
						cout << "DIGITE O CÓDGIO DO PRODUTO PARA PESQUISAR: " ;
						cin >> codigo_selecionado;
		 			if (MUSIDOM.pesquisarCordas(codigo_selecionado)){
				  		cout << "PRODUTO DISONÍVEL" << endl<< endl;
						cout << "PRODUTO NA POSIÇÃO "<< MUSIDOM.get_indicePercussao(codigo_selecionado);
					}
					else{
						cout<< "Produto não encontrado! "<<endl;
                    }		
				}
				else
				{
					cout << "Opcção Inválida, tente novamente" << endl << endl;
				}
				
		}
		else if(opcao ==4 )
		{
			cout << "Digite qual a secção de instrumentos que você deseja excluir do estoque: "<<endl;
			cout << " 1) Cordas" << endl;
			cout << " 2) Percussao" << endl;
			cin >> seleciona;
			
			if(seleciona == 1){
				cout << "-------- CORDA -------- " << endl << endl;

				MUSIDOM.imprimeCordas();
				cout << "DIGITE O CÓDGIO DO PRODUTO PARA REMOÇÃO" << endl;
				cin >> codigo_selecionado;
				
				if (MUSIDOM.removerCordas(codigo_selecionado)){
					cout << "REMOVIDO!" << endl << endl;
				}
				else{
					cout<< "Produto não dispoível! "<<endl;
				}						  								
			}
			else if(seleciona == 2){
					cout << "-------- PERCUSSAO -------- " << endl << endl;
					MUSIDOM.imprimePercussao();
					cout << "DIGITE O CÓDGIO DO PRODUTO PARA REMOÇÃO" << endl;
					cin >> codigo_selecionado;
					
				if (MUSIDOM.removerPercussao(codigo_selecionado)){
					cout << "REMOVIDO!" << endl<< endl;
				}
				else{
					cout<< "Produto não dispoível! "<<endl;
				}		
			}
			else
				{
					cout << "Opcção Inválida, tente novamente" << endl << endl;
				}
		}
		else if(opcao == 5)
		{
			cout << "Digite qual a secção de instrumentos que você deseja atualizar a quantidade do estoque: "<<endl;
			cout << " 1) Cordas" << endl;
			cout << " 2) Percussao" << endl;
			cin >> seleciona;
			cout << endl;
		
			if(seleciona == 1){
				if(!MUSIDOM.verifica_Cordas()){
					cout << " 1) Adicionar" << endl;
					cout << " 2) Subtrair" << endl;
					cin >> opcao;
					cout << endl;
					
					if (opcao == 1){
					   	MUSIDOM.imprimeCordas();
						cout << "Selecione o código do produto que deseja aumentar a quantidade "<< endl;
						cin >> codigo_selecionado;
						cout << "Digite a quantidade: ";
						cin >> qtd;
						MUSIDOM.set_EntradaEstoqueCordas(codigo_selecionado, qtd);
						cout<<"QUANTIDADE ATUALIZADA "<<endl;
						cout << endl;
					}
					else if(opcao == 2){
						MUSIDOM.imprimeCordas();
						cout << "Selecione o código do produto que deseja subtrair a quantidade "<< endl;
						cin >> codigo_selecionado;
						cout << "Digite a quantidade: " << endl;
						cin >> qtd;
						cout << endl;
						if(MUSIDOM.set_SaidaEstoqueCordas(codigo_selecionado, qtd)){
							cout << "QUANTIDADE ATUALIZADA " << endl;
						}
						else{
						cout << "QUANTIDADE NÃO DISPONIVEL " << endl;
						}
					}				
					else {
						cout << " Opção inválida.";
					}
				}
				
				else{
					cout << "NENHUM PRODUTO DISPONÍVEL " << endl;
				}
			}
		
			else if (seleciona == 2){
				if(!MUSIDOM.verifica_Percussao()){
					cout << " 1) Adicionar" << endl;
					cout << " 2) Subtrair" << endl;
					cin >> opcao;
					cout << endl;
					
					if (opcao == 1){
					   	MUSIDOM.imprimePercussao();
						cout << "Selecione o código do produto que deseja aumentar a quantidade "<< endl;
						cin >> codigo_selecionado;
						cout << "Digite a quantidade: ";
						cin >> qtd;
						MUSIDOM.set_EntradaEstoquePercussao(codigo_selecionado, qtd);
						cout<<"QUANTIDADE ATUALIZADA "<<endl;
						cout << endl;
					}
					else if(opcao == 2){
						MUSIDOM.imprimePercussao();
						cout << "Selecione o código do produto que deseja subtrair a quantidade "<< endl;
						cin >> codigo_selecionado;
						cout << "Digite a quantidade: " << endl;
						cin >> qtd;
						cout << endl;
						if(MUSIDOM.set_SaidaEstoquePercussao(codigo_selecionado, qtd)){
							cout << "QUANTIDADE ATUALIZADA " << endl;
						}
						else{
						cout << "QUANTIDADE NÃO DISPONIVEL " << endl;
						}
					}				
					else {
						cout << " Opção inválida.";
					}
				}
				else{
					cout << "NENHUM PRODUTO DISPONÍVEL " << endl;
				}
			}
			else {
				cout << " Opção inválida.";
			}
		}

		else if (opcao == 6)
		{	
			cout << " 1) Cadastrar Cliente " << endl;
			cout << " 2) Realizar pedido!  " << endl;
			cin >> seleciona;
			if (seleciona == 1)
			{
				cout << "-----CADASTRO DE INSTRUMENTOS DE PERCUSSAO-----" << endl << endl;
			   	cout << "Nome cliente: ";
			   	cin.ignore();
		 	   	getline(cin,name_c);

			   	cout << "CPF : ";
		 	   	cin.ignore();
	   			getline(cin,cpf_c);

				cout << "Contato: ";
	   			getline(cin,contato_c);
	   			
				cout << "CEP: ";
				cin >> cep_c;
				
				cout << "Rua: " ;
		 	   	cin.ignore();
	   			getline(cin, rua_c);
	   			
				cout << "Bairro: ";
		 	   	cin.ignore();
	   			getline(cin,bairro_c);
	   			
				cout << "Numero : ";
			   	cin >> numero_c;
			   	
		     	cout << "Complemento: " ;
		 	   	cin.ignore();
	   			getline(cin,complemento_c); 
	   			
				cout <<endl;
				novo_c.set_nome(name_c);
				novo_c.set_cpf(cpf_c);
				novo_c.set_contato(contato_c);
				novo_c.set_cep(cep_c);
				novo_c.set_rua(rua_c);
				novo_c.set_bairro(bairro_c);
				novo_c.set_numero(numero_c);
				novo_c.set_complemento(complemento_c);

				if(novo_c.inserirCliente(novo_c)){
						cout << "CLIENTE CADASTRADO COM SUCESSO!" << endl<<endl;
			   	   	}
					else
					{
						cout << "CLIENTE JÁ CADASTRADO" << endl<<endl;
                    }				  								
			}
			else if(seleciona == 2)
			{
				cout << "-------- Clientes -------- " << endl << endl;
				if(novo_c.verifica_cliente())
				{
					cout << "NENHUM CLIENTE CADASTRADO" << endl;
				}
				else
				{
					novo_c.get_cliente();
					cout << "Digite o nome do cliente que ira realizar a compra " << endl;
					cin >> name_c;
					cout << "Digite qual  instrumento ira vender; " << endl;
					cout << " 1) Cordas" << endl;
			   		cout << " 2) Percussao" << endl;
			   		cin >> seleciona;
			   		
					if(seleciona == 1){
						
						MUSIDOM.imprimeCordas();	
						cout << "Digite o codigo do instrumento " <<endl;
						cin >> codigo_selecionado;
						cout << "Digite a quantidade de instrumentos " << endl;
						cin >> qtd;
						if(MUSIDOM.set_SaidaEstoqueCordas(codigo_selecionado, qtd))
						{
							Cordas Vendido = MUSIDOM.get_ListaCordas(codigo_selecionado);
							controle.inserirVendasCordas(Vendido);
							controle.registro_vendas_Cordas();
							cout << "VENDIDO " << endl;
						}
						else{
						cout << "PRODUTO NÃO DISPONIVEL!  " << endl;
						}
	
			   	   	}				  								
					
					else if(seleciona == 2){
						MUSIDOM.imprimePercussao();	
						cout << "Digite o codigo do instrumento " <<endl;
						cin >> codigo_selecionado;
						cout << "Digite a quantidade de instrumentos " << endl;
						cin >> qtd;
						if(MUSIDOM.set_SaidaEstoquePercussao(codigo_selecionado, qtd))
						{
							Percussao Vendido = MUSIDOM.get_ListaPercussao(codigo_selecionado);
							controle.inserirVendasPercussao(Vendido);
							controle.registro_vendas_Percussao();
							cout << "VENDIDO " << endl;
						}
						else{
						cout << "PRODUTO NÃO DISPONIVEL!  " << endl;
						}
	
					}
					else
					{
					cout << "Opcção Inválida, tente novamente!" << endl << endl;
					  }	
				}
			}
		}
		else if (opcao != 1 && opcao != 2 && opcao != 3 && opcao != 4 && opcao != 5 && opcao != 6&& opcao != 0){
			cout << " Opção inválida.";
		}
		
} while(opcao != 0);

	return 0;
}

void menu_de_opcao(){
	system("pause");
	system("cls");
	cout << "-------- MENU -------- " << endl;
	cout << " 1) Cadastrar Produto" << endl;
	cout << " 2) Visualizar Estoque" << endl;
	cout << " 3) Pesquisar Produto" << endl;
	cout << " 4) Remover Produto"<< endl;
	cout << " 5) Atualizar Qtd. de produtos no Estoque"<< endl;
	cout << " 6) Realizar um pedido" << endl;
	cout << " 0) Sair" << endl;

}

void menu_bem_vindo(){
   
    
    cout << "                                      _ _     _ _ _ _               _ _ _      _ _ _        " << endl;
    cout << "                           |        /     \\      |      / \\        |      \\   |          " << endl;
    cout << "                           |       |       |     |     /   \\       |       |  |_ _ _       " << endl;
    cout << "                           |       |       |     |    /-----\\      |       |  |            " << endl;
    cout << "                           |_ _ _   \\ _ _ /  \\ _ /   /       \\     |_ _ _ /   |_ _ _     " << endl;
    cout << endl;
	cout << "                   _ _ _   _ _ _ _   _ _                             _ _ _                _ _ _ _      _ _      _ _ _           " << endl;
    cout << "  |    /\\      /  |           |     |   |   |     |     /\\    /\\    |          /\\      /     |       /     \\   |           " << endl;
    cout << "  |   /  \\    /   |_ _ _      |     |_ _|   |     |    /  \\  /  \\   |_ _ _    /  \\    /      |      |       |  |_ _ _       " << endl;
	cout << "  |  /    \\  /          |     |     | \\     |     |   /    \\/    \\  |        /    \\  /       |      |       |        |     " << endl;
	cout << "  | /      \\/      _ _ _|     |     |  \\     \\ _ /   /            \\ |_ _ _  /      \\/        |       \\ _ _ /    _ _ _|    " << endl;
	cout << endl << endl;
	cout << "                                               _ _ _      _ _                _ _ _         " << endl;
	cout << "                          /\\    /\\    |     | |       |  /         /\\    |  |           " << endl;
	cout << "                         /  \\  /  \\   |     | |_ _ _  | |         /  \\   |  |_ _ _      " << endl;
	cout << "                        /    \\/    \\  |     |       | | |        /----\\  |        |     " << endl;
	cout << "                       /            \\  \\ _ /   _ _ _| |  \\_ _   /      \\ |   _ _ _|    " << endl;
	cout << endl << endl;
	cout << "                                          _ _ _      _ _ _      _ _                             " << endl;
	cout << "                     /\\    /\\    |     | |       |  |     \\   /     \\      /\\    /\\       " << endl;
	cout << "                    /  \\  /  \\   |     | |_ _ _  |  |      | |       |    /  \\  /  \\        " << endl;
	cout << "                   /    \\/    \\  |     |       | |  |      | |       |   /    \\/    \\       " << endl;
	cout << "                  /            \\  \\ _ /   _ _ _| |  |_ _ _/   \\ _ _ /   /            \\      " << endl;
	cout << endl << endl; 
	
}
