#include <stdio.h>
#include <stdlib.h>
#include "abb.h"

void cria_arvore(Arvore *p){
    *p = NULL;
}

void inorder(Arvore p){
  if(p != NULL) {
    inorder(p->dir);
    printf("%d ", p->info);
    inorder(p->esq);
  }
}

/* Retorna 1 se a chave for encontrada */
int busca (Arvore p, int chave){
  if(p == NULL) {
    return 0;
  }

  if(p->info == chave) {
    return 1;
  }

  if(chave > p->info) {
    return busca(p->dir, chave);
  }

  if(chave < p->info) {
    return busca(p->esq, chave);
  }
}

/* Retorna 1 se a chave for encontrada */
int n_rec_busca(Arvore p, int chave){

}

/* Retorna 0 se a chave for repetida */
int  insere(Arvore *p, int chave){
  if(*p == NULL) {
    *p = malloc(sizeof(Arvore));
    (*p)->esq = NULL;
    (*p)->dir = NULL;
    (*p)->info = chave;
    return 0;
  }

  if(chave > (*p)->info) {
      return insere(&(*p)->dir, chave);
  }

  if(chave < (*p)->info) {
      return insere(&(*p)->esq, chave);
  }

  if(chave == (*p)->info) {
    return 0;
  }
}

/* Retorna 0 se a chave for repetida */
/* Vers�o n�o recursiva */
int  n_rec_insere(Arvore *p, int chave){
  if(*p == NULL) {
    *p = malloc(sizeof(Arvore));
    (*p)->esq = NULL;
    (*p)->dir = NULL;
    (*p)->info = chave;
  }
}


/* Retorna 0 se a chave n�o for encontrada */
int remove_arv(Arvore *p, int chave){
    Arvore * r = search_node(p, chave);
    if(r == NULL) {
        return 0;
    }

    // LEAF?
    if((*r)->esq == NULL && (*r)->dir == NULL) {
      free(*r);
      (*r) = NULL;
      return 1;
    }

    if((*r)->dir != NULL && (*r)->esq == NULL) {
        No ** tmp = r;
        (*r)->dir = (*tmp)->dir;
        (*r)->esq = (*tmp)->esq;
        free(*tmp);
        tmp = NULL;
        *tmp = (*r);
        return 1;
    }

    printf("HUE\n");

}

/* Verifica se p � uma �rvore de busca */
int verifica_busca(Arvore p){

}

/* Verifica se p � uma �rvore de busca */
int verifica_busca2(Arvore p){

}

Arvore * search_node(Arvore * p, int chave) {
  if(&(*p) == NULL) {
    return NULL;
  }

  if((*p)->info == chave) {
    return p;
  }

  if(chave > (*p)->info) {
    return search_node(&(*p)->dir, chave);
  }

  if(chave < (*p)->info) {
    return search_node(&(*p)->esq, chave);
  }
}

Arvore min(Arvore p) {
  if(p->esq == NULL) {
    return p;
  }
  return min(p->esq);
}

Arvore max(Arvore p) {
  if(p->dir == NULL) {
    return p;
  }
  return max(p->dir);
}
