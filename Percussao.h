#ifndef PERCUSSAO_H
#define PERCUSSAO_H

class Percussao: public Produto {
	  
	   string tipo;
	   
	   public:
	   	
       Percussao (string = "", string = "", string = "", float = 0.0, float = 0.0, int = 0, string = "");
	   void set_tipo(string);
	   string get_tipo();
	   void imprime_percussao();
	   
};
#endif
