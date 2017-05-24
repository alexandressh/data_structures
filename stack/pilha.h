/*
 * Implementacao de Implementacao de pilha com pilha simplesmente encadeada com no cabeca.
 */

#ifndef PILHAD_H
#define PILHAD_H

typedef char elem_t;

typedef struct no{
  elem_t info;
  struct no *prox;
} No_pilha;

typedef No_pilha Pilha;

/* Inicializa uma pilha */
void inicPilha(Pilha *p_l);

/* Verifica se a pilha está vazia ou nao */
int pilhaVazia(Pilha *p_l);

/* Insere um elemento na pilha */
void push(Pilha *p_l, elem_t e);

/* Remove o elemento da pilha.
   Retorna -1 caso a pilha esteja vazia */
elem_t pop(Pilha *p_l);

/* Retorna o elemento do topo da pilha.
   Retorna -1 caso a pilha esteja vazia */
elem_t elemTopo(Pilha *p_l);

/* Remove todos os numeros da pilha */
void libera(Pilha *p_l);

/* Exibe o conteudo da pilha */
void exibe(Pilha *p_l);

#endif
