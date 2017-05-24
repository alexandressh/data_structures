/*
 * Arvores binarias de busca
 */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "abb.c"

// esta funcao esta aqui apenas para teste
// No *arv(int v, No* esq, No* dir){
//   No *novo;
//   novo = malloc(sizeof(No));
//   novo->info = v;
//   novo->esq = esq;
//   novo->dir = dir;
//   return novo;
// }


int main() {
  Arvore a;
  int i, num;

  cria_arvore(&a);

//   srand(time(NULL));
//
//   for (i = 0; i < 5; i++){
//     num = rand()%50;
//     printf("\ninsere: %d", num);
//     if (insere(&a, num))
//       printf(" OK");
//     else
//       printf(" ja tem");
//   }
//   printf("\nEm ordem: ");
//   inorder(a);
//
//   for (i = 0; i < 5; i++){
//     num = rand()%50;
//     printf("\ninsere: %d", num);
//     if (n_rec_insere(&a, num))
//       printf(" OK");
//     else
//       printf(" ja tem");
//   }
//
//   printf("\nEm ordem: ");
//   inorder(a);
//
  insere(&a, 18);
  insere(&a, 12);
  insere(&a, 39);
  insere(&a, 10);
  insere(&a, 13);
  insere(&a, 48);
  insere(&a, 17);
  insere(&a, 42);
  insere(&a, 14);
  insere(&a, 43);
  insere(&a, 28);
  insere(&a, 20);
  insere(&a, 25);
//
//   printf("\n\n");
//   num = rand()%50;
//   printf("\nbusca: %d", num);
    int aaa = busca(a, 29);

  if (aaa)
    printf(" Encontrou");
  else
    printf(" Nao encontrou");
//
//   num = rand()%50;
//   printf("\nbusca: %d", num);
//   if (n_rec_busca(a, num))
//     printf(" Encontrou");
//   else
//     printf(" Nao encontrou");
//
//   printf("\nEm ordem: ");
  inorder(a);
//
// //  for (i = 0; i < 5; i++){
//   	printf("\n\n remove: ");
//   	scanf("%d", &num);
//   	remove_arv(&a, num);
//   //}
//   printf("\nEm ordem: ");
//   inorder(a);
//   printf("\n");

  return 0;

}
