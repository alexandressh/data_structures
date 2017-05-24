/*
 * bag.c - implementacao das operacoes realizadas na sacola
 * Autora: Tiemi C. Sakata
 */

#include<stdio.h>
#include "bag.h"

void init(Bag *b){
  int i;
  for (i = 0; i < BAGSIZE; i++)
    b->item[i] = -1;
}

int size(Bag *b){
  int i;
  for (i = 0; i < BAGSIZE; i++)
    if (b->item[i] == -1)
      return i;
  return i;
}

/* insere elemento e retorna 1 em caso de sucesso. */
int insert(Bag *b, int elem){
  int pos;
  pos = size(b);
  if (pos < BAGSIZE){
    b->item[pos] = elem;
    return 1;
  }
  return 0;
  
}

int check(Bag *b, int elem){
  int i;
  int count = 0;
  for (i = 0; i < BAGSIZE && b->item[i] != -1; i++)
    if (b->item[i] == elem)
      count++;
  return count;
}

int delete(Bag *b, int elem){
  int i = 0;
  while (b->item[i] != elem && b->item[i] != -1 && i < BAGSIZE)
    i++;
  if (i < size(b)){
    if (i == BAGSIZE - 1)
      b->item[i] = -1;
    else 
      while (b->item[i] != -1 && i < BAGSIZE - 1){
	b->item[i] = b->item[i+1];
	i++;
      }
    return 1;
    }
  return 0;
}


void printall(Bag *b){
  int i = 0;
  printf("\n Numeros na sacola: ");      
  while (b->item[i] != -1 && i < BAGSIZE){
    printf("%d ", b->item[i]);
    i++;
  }
  printf("\n ");          
}
 
