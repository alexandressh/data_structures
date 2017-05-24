/*
 * numeros.c - utilizacao do TAD bag
 * Autora: Tiemi C. Sakata
 */

#include<stdio.h>
#include "bag.h"

int main(){
  int num, opcao, n;
  Bag sacola;

  init(&sacola);
  
  opcao = 1;  
  while(opcao < 5 && opcao > 0){
    printf("\n 1 - insere um numero");
    printf("\n 2 - remove um numero");
    printf("\n 3 - verifica repeticao de um numero");
    printf("\n 4 - imprime os numeros");
    printf("\n qualquer outra tecla para sair");
    printf("\n\nEntre com uma das opcoes acima: ");
    scanf("%d", &opcao);
    
    switch (opcao){
    case 1:
      printf("\n\nEntre com o numero a ser inserido: ");
      scanf("%d", &num);
      insert(&sacola, num);
      break;
    case 2:
      printf("\n\nEntre com o numero a ser removido: ");
      scanf("%d", &num);
      if (!delete(&sacola, num))
	printf("Numero nao encontrado");
      break;      
    case 3:
      printf("\n\nEntre com o numero a ser verificado: ");
      scanf("%d", &num);
      n = check(&sacola, num); 
      if (n == 0)
	printf("Numero nao encontrado");
      else
	printf("Existem %d numeros %d na sacola", n, num);
      break;            
    case 4: printall(&sacola); break;
    }
    
    printall(&sacola);
    printf("\n\n");    
  }    
  return 0;
}
