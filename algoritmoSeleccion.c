#include<stdio.h>
#include<stdbool.h>

/*
* Algoritmo de ordenacion por seleccion SelectionSort.
*/

int main() {
  int values[] = {8,4,5,7,1,0,9,2,3,6,-1,-6,-9,12,14,20};
  int aux = 0;
  int rounds = 0;
  bool order = false;
  int PosMin;

  int valuesLength = sizeof(values) / sizeof(*values);

  for(int i = 0; i < valuesLength; i++) {
    printf("%d", values[i]);
    if (i < (valuesLength - 1)) {
      printf(" - ");
    }
  }

  printf("\n");

  for(int i = 0; i < valuesLength; i++) {
    PosMin = i;
    for(int j = i + 1; j < valuesLength; j++) {
      if (values[PosMin] > values[j]) PosMin = j;
    }
    aux = values[i];
    values[i] = values[PosMin];
    values[PosMin] = aux;

    printf("\n");

    for(int i = 0; i < valuesLength; i++) {
      printf("%d", values[i]);
      if (i < (valuesLength - 1)) {
        printf(" - ");
      }
    }

  }

  printf("\n");

  for(int i = 0; i < valuesLength; i++) {
    printf("%d", values[i]);
    if (i < (valuesLength - 1)) {
      printf(" - ");
    }
  }
}
