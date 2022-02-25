//O que o usuário precisa saber?

//Tipo sequencia para manipular sequencias de inteiros ordenados
typedef struct seq * Sequencia;

//devolve uma sequencia vazia
Sequencia cria_sequencia();

//recebe uma sequencia e o valor a ser adicionado e não devolve nada
void adiciona_elemento(Sequencia s, int d);

//recebe uma sequencia e imprime essa sequencia, não devolve nada
void imprime_sequencia(Sequencia s);

//libera os dados utilizados e a memória utilizada para sequencia
void libera_sequencia(Sequencia s);
