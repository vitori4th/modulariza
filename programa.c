#include <stdio.h>
#include <stdlib.h> 
#include "sequencia.h"

int main(int argc, char * argv[]){
	Sequencia s=cria_sequencia();
	
	int numero;
	scanf("%d",&numero);
	adiciona_elemento(s,numero);
	adiciona_elemento(s,11);
	adiciona_elemento(s,12);
	
	imprime_sequencia(s);
	libera_sequencia(s);

	return 0;
}
