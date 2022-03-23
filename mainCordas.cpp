#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

#include "Produto.cpp"
#include "Cordas.cpp"

int main(){
    setlocale(LC_ALL, "Portuguese");

	cout<<"============================================================"<<endl
		<<"              MAIN DE TESTE - CLASS CORDAS"					<<endl
		<<"============================================================"<<endl<<endl;
		
	Cordas corda_aux("Violino", "Marrom fosco", "C03572", 1800.00, 1500.00, 12, 4);
	corda_aux.imprime_cordas();

    return 0;
}

