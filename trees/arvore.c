#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

/*void main() {
    Arvore a;
    a = arv('a',arv('b',arv('d',arv('e',NULL,NULL),NULL),NULL),arv('c',NULL,NULL));

    printf("Pre: ");
    preorder(a);
}*/

No *arv(elem_t c, No* esq, No* dir){
    No * root = malloc(sizeof(No));
    root->esq = esq;
    root->dir = dir;
    root->info = c;
    return root;
}

void preorder(No* p){
    if(p != NULL) {
      printf("%c ", p->info);
      preorder(p->dir);
      preorder(p->esq);
    }
}

void inorder(No* p){
  if(p != NULL) {
    inorder(p->dir);
    printf("%c ", p->info);
    inorder(p->esq);
  }
}

void postorder(No* p){
  if(p != NULL) {
    postorder(p->dir);
    postorder(p->esq);
    printf("%c ", p->info);
  }
}

void largura(No* p){
  printf("%c ", p->info);


}

void larguraAux(No *p[]){

}

void libera(Arvore *p){

}

No* copia(No* p){

}

int altura (No* p){

}

int nNos (No* p){

}

int iguais(No* arv1, No* arv2){

}
