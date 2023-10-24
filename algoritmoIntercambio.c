#include<stdio.h>
#include<stdbool.h>

/*
* Algoritmo de intercambio
*/

int main () {
  int values[] = {8,4,5,7,1,0,9,2,3,6,-1,-6,-9,12,14,20};
  int aux = 0;
  int rounds = 0;
  bool order = false;

  int valuesLength = sizeof(values) / sizeof(*values);

  for(int i = 0; i < valuesLength; i++) {
    printf("%d", values[i]);
    if (i < (valuesLength - 1)) {
      printf(" - ");
    }
  }

  while(!order) {
    order = true;
    for(int i = 0; i < (valuesLength - 1 - rounds); i++) {
      if ( values[i] > values[i + 1] ) {
        aux = values[i + 1];
        values[i + 1] = values[i];
        values[i] = aux;
        order = false;
      }
    }
    rounds++;
  }

  printf("\n");

  for(int i = 0; i < valuesLength; i++) {
    printf("%d", values[i]);
    if (i < (valuesLength - 1)) {
      printf(" - ");
    }
  }
}