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
  insere(&a, 20);
  insere(&a, 10);
  insere(&a, 5);
  insere(&a, 15);
  insere(&a, 7);
  insere(&a, 6);
  insere(&a, 13);
  insere(&a, 30);
  insere(&a, 25);
  insere(&a, 35);
  insere(&a, 22);
  insere(&a, 27);
  insere(&a, 37);
//
//   printf("\n\n");
//   num = rand()%50;
//   printf("\nbusca: %d", num);
  Arvore * aaa = search_node(&a, 25);

  if (aaa != NULL && (*aaa)->info == 25)
    printf(" Encontrou\n");
  else
    printf(" Nao encontrou\n");
//
//   num = rand()%50;
//   printf("\nbusca: %d", num);
//   if (n_rec_busca(a, num))
//     printf(" Encontrou");
//   else
//     printf(" Nao encontrou");
//
 printf("\nEm ordem: \n");
  inorder(a);
  printf("\n");


  Arvore minimun = min(a);
  printf("min: %d \n", minimun->info);

  Arvore maximum = max(a);
  printf("max: %d \n", maximum->info);

  printf("Try to remove 5\n");
  remove_arv(&a, 5);
  inorder(a);
  printf("\n");
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
