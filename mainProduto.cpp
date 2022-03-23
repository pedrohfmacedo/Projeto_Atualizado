#include <iostream>
#include <locale>
#include <iomanip>
#include <cstdlib>

using namespace std;

#include "Produto.cpp"

int main(){
    setlocale(LC_ALL, "Portuguese");
	
	cout<<"============================================================"<<endl
		<<"              MAIN DE TESTE - CLASS PRODUTO"					<<endl
		<<"============================================================"<<endl<<endl;
		
	Produto produto_aux("Violino", "Marrom fosco", "C00214", 1800.00, 1500.00, 4);
	produto_aux.imprime();

    return 0;
}

