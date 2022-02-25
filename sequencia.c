#include <stdio.h>
#include <stdlib.h>
#include "sequencia.h"

struct no{
	int dado;
	struct no * prox;
};

typedef struct seq{
	int tam;
	struct no * lista;
}seq;

Sequencia cria_sequencia(){
	Sequencia s = (Sequencia) malloc(sizeof(seq));
	s->tam=0;
	s->lista= NULL;
	return s;
}

void adiciona_elemento(Sequencia s, int d){
	struct no * n =(struct no *) malloc(sizeof(struct no));
	n->dado=d;
	
	if(s->lista == NULL || (s->lista)->dado >d){
		n->prox =s->lista;
		s->lista=n;
	}else{
		struct no * atual = s->lista;
		
		while( atual->prox != NULL && (atual->prox)->dado < d){
			atual= atual->prox;
		}
		n->prox =atual->prox;
		atual->prox =n;
		s->tam=s->tam+1;
	}
	return;
}

void imprime_sequencia(Sequencia s){
	struct no * atual=s->lista;
	while(atual!=NULL){
		printf("%d ",atual->dado);
		atual=atual->prox;
	}
	printf("\n");
	return;
}

void libera_lista(struct no * lista){
	if(lista == NULL) return;
	libera_lista(lista->prox);
	free(lista);
}

void libera_sequencia(Sequencia s){
	libera_lista(s->lista);
	free(s);
	return;
}


