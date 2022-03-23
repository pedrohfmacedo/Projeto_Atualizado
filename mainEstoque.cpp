#include <iostream>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <vector>

using namespace std;


#include "Produto.cpp"
#include "Cordas.cpp"
#include "Percussao.cpp"
#include "Sobrecargas.h";
#include "Estoque.cpp"

int main(){
	int opcao, qtd;
	string color, code,name, type, seleciona;
	float valor_f, valor_v;
	
do {	
	cout<<"Digite a opçao desejeda: ";
	cin>>opcao;
	cout << "1) CADASTRAR PRODUTO PERCUSSAO" << endl
	 << "2) CADASTRAR PRODUTO CORDAS " << endl
	 << "3) REMOVER PRODUTOS PERCUSSAO " << endl
	 << "4) REMOVER PRODUTOS CORDAS" << endl
	 << "5) MOSTRAR PRODUTOS PERCUSSAO" << endl
	 << "6) MOSTRAR PRODUTOS CORDAS" << endl
	 << "7) PESQUISAR PRODUTO PERCUSSAO" << endl
	 << "8) PESQUISAR PRODUTO CORDAS" << endl
	 << "9) ORGANIZAR SESSAO DE PERCUSSAO" << endl
	 << "10) ORGANIZAR SESSAO DE CORDAS" <<endl
	 << "11) ACRESCENTAR QUANTIDADE (PERCUSSAO) " <<endl;
	 << "12) ACRESCENTAR QUANTIDADE (CORDAS): " <<endl;
	 << "13) TIRAR QUANTIDADE (PERCUSSAO)" <<endl;
	 << "14) TIRAR QUANTIDADE (CORDAS): " <<endl;
	 << "15) ENCERRAR PROGRAMA: " <<endl;
	 Estoque MUSIDOM;
	switch(opcao)
	{
	case 1:
			cout << "CADASTRE PRODUTO PERCUSSAO" << endl << endl;
			cout << "NOME : ";
			cin >> name;
			cout << "COR: ";
			cin >> color;
			cout << "Preço da Fábrica : ";
			cin >> valor_f;
			cout << "Preço a ser vendido ";
			cin >> valor_v;
			cout << "Quantidade " ;
			cin >> qtd;
			cout << "Tipo: ";
			cin >> type;
			cout << "Codigo do produto: " ;
			cin >> code;
			
			cout<<endl;
			Percussao perc(name, color, code, valor_v, valor_f, qtd, type);
			MUSIDOM.inserirPercussao(perc)
			cout << "PRODUTO CADASTRADO COM SUCESSO!" << endl<<endl;
		
			break;
	case 2:
			cout << "CADASTRE PRODUTO PERCUSSAO" << endl << endl;
			cout << "NOME : ";
			cin >> name;
			cout << "COR: ";
			cin >> color;
			cout << "Preço da Fábrica : ";
			cin >> valor_f;
			cout << "Preço a ser vendido ";
			cin >> valor_v;
			cout << "Quantidade " ;
			cin >> qtd;
			cout << "Quantidade de cordas: ";
			cin >> type;
			cout << "Codigo do produto: " ;
			cin >> code;
			
			cout<<endl;
			Cordas cord(name, color, code, valor_v, valor_f, qtd, type);
			MUSIDOM.inserirCordas(cord)
			cout << "PRODUTO CADASTRADO COM SUCESSO!" << endl<<endl;
			
			break;
	case 3:
			cout << "-------- PERCUSSAO -------- " << endl << endl;

				MUSIDOM.get_ListaPercussao();
				cout << "DIGITE O CÓDGIO DO PRODUTO PARA REMOÇÃO" << endl;
				cin >> seleciona;
				if (MUSIDOM.removerPercussao(seleciona)){
					cout << "REMOVIDO!" << endl<< endl;
				}
				else{
					cout<< "Produto não dispoível! "<<endl;
				}		
			break;
	case 4:
			cout << "-------- CORDA -------- " << endl << endl;

				MUSIDOM.get_ListaCordas();
				cout << "DIGITE O CÓDGIO DO PRODUTO PARA REMOÇÃO" << endl;
				cin >> seleciona;
				if (MUSIDOM.removerCordas(seleciona)){
					cout << "REMOVIDO!" << endl<< endl;
				}
				else{
					cout<< "Produto não dispoível! "<<endl;
				}			
		break
	case 5:
			cout << "-------- PERCUSSAO -------- " << endl << endl;
			MUSIDOM.get_ListaPercussao();	
			break;
	case 6:
			cout << "-------- CORDAS -------- " << endl << endl;
			MUSIDOM.get_ListaCordas();
			break;
	case 7:
		cout << "-------- PERCUSSAO -------- " << endl << endl;
		cout << "DIGITE O CÓDGIO DO PRODUTO PARA PESQUISAR" << endl;
		cin >> seleciona;
		 	if (MUSIDOM.pesquisarPercussao(seleciona)){
				cout << "PRODUTO DISPONÍVEL!" << endl<< endl;
				cout << "PRODUTO NA POSIÇÃO "<< MUSIDOM.get_indicePercussao(seleciona);
				}
			else{
				cout<< "Produto não encontrado! "<<endl;
				}		
			break;

	case 8:
		cout << "-------- CORDAS -------- " << endl << endl;
		cout << "DIGITE O CÓDGIO DO PRODUTO PARA PESQUISAR" << endl;
		cin >> seleciona;
		 	if (MUSIDOM.pesquisarCordas(seleciona)){
				cout << "PRODUTO ENCONTRADO" << endl<< endl;
				cout << "PRODUTO NA POSIÇÃO "<< MUSIDOM.get_indicePercussao(seleciona);
				}
			else{
				cout<< "Produto não encontrado! "<<endl;
				}		
			break;
	case 9:
		MUSIDOM.ordenaPercussao()
		cout<<"Produtos ordenados alfabeticamente"<<endl<<endl;
		break;
	case 10:
		MUSIDOM.ordenaCordas()
		cout<<"Produtos ordenados alfabeticamente"<<endl<<endl;
		break;
	case 11: 
		MUSIDOM.imprimePercussao();
		cout<<"SELECIONA CÓDIGO DE PRODUTO PARA ACRESCENTAR "<<endl;
		cin>>seleciona;
		cout<<"DIGITE QUANTIDADE DESEJADA: ";
		cin<<qtd;
		MUSIDOM.set_EntradaEstoquePercussao(seleciona, qtd);
		cout<<"QUANTIDADE ATUALIZADA "<<endl;
		break;
	case 12: 
		MUSIDOM.imprimeCordas();
		cout<<"SELECIONA CÓDIGO DE PRODUTO PARA ACRESCENTAR "<<endl;
		cin>>seleciona;
		cout<<"DIGITE QUANTIDADE: ";
		cin<<qtd;
		MUSIDOM.set_EntradaEstoqueCordas(seleciona, qtd);
		cout<<"QUANTIDADE ATUALIZADA "<<endl;
		break;
    case 13:
		MUSIDOM.imprimePercussao();
		cout<<"SELECIONA CÓDIGO DE PRODUTO PARA SUBTRAIR QUANTIDADE DE PRODUTOS "<<endl;
		cin>>seleciona;
		cout<<"DIGITE QUANTIDADE: ";
		cin<<qtd;
		MUSIDOM.set_SaidaEstoquePercussao(seleciona, qtd);
		cout<<"QUANTIDADE ATUALIZADA "<<endl;
		break;
	case 14:
		MUSIDOM.imprimeCordas();
		cout<<"SELECIONA CÓDIGO DE PRODUTO PARA SUBTRAIR QUANTIDADE DE PRODUTOS "<<endl;
		cin>>seleciona;
		cout<<"DIGITE QUANTIDADE: ";
		cin<<qtd;
		MUSIDOM.set_SaidaEstoqueCordas(seleciona, qtd);
		cout<<"QUANTIDADE ATUALIZADA "<<endl;
		break;
	default:
		cout << "Opção inválida, tente novamente" << endl;
		break;
	}
	
	
} while(opcao!=15);

return 0;
}