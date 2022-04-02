#ifndef CORDAS_H
#define CORDAS_H

#include "Produto.h"

class Cordas : public Produto {
	  
	   int qtdCordas;
	   
	   public:
       Cordas(string = "", string = "", string = "", float = 0.0, float = 0.0, int = 0, int  = 0);
	   void set_qtdCordas(int);
	   int get_qtdCordas();
	   void imprime_cordas();
};
#endif
