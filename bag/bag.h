/*
 * bag.h - definicao das operacoes realizadas na sacola
 * Autora: Tiemi C. Sakata
 */

#define BAGSIZE 50
typedef struct b {
  int item[BAGSIZE];
} Bag;

void init(Bag *b);

int size(Bag *b);

int insert(Bag *b, int elem);
  
int check(Bag *b, int elem);

int delete(Bag *b, int elem);

void printall(Bag *b);

 
