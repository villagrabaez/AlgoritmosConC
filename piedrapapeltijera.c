#include<stdio.h>
#include <stdlib.h>
#include <time.h>

// Algoritmo del juego Piedra, Papel o Tijera contra el PC.

int numberAleatory() {
  // Genera valores entre 1 - 3
  srand(time(NULL));

  int r = rand() % 4;

  if ( r == 0 ) {
    r = r + 1;
  } else if ( r > 3 ) {
    r = r - 1;
  }

  return r;
}

int main() {
  int jugador = 0;
  int pc = 0;

  printf("\n############################################");
  printf("\n########## PIEDRA, PAPEL O TIJERA ##########");
  printf("\n############################################");

  printf("\nElige una opcion:\n1 para piedra\n2 para papel\n3 para tijera\n");

  scanf("%d", &jugador);

  if ( jugador == 1 ) {
    printf("\nElegiste piedra.");
  } else if ( jugador == 2 ) {
    printf("\nElegiste papel.");
  } else if ( jugador == 3 ) {
    printf("\nElegiste tijera.");
  } else {
    printf("\nElegiste PERDER.");
  }

  // PC ELIGE
  pc = numberAleatory();

  if ( pc == 1 ) {
    printf("\nPC eligio piedra.");
  } else if ( pc == 2 ) {
    printf("\nPC eligio papel.");
  } else if ( pc == 3 ) {
    printf("\nPC eligio tijera.");
  }

  // COMBATE

  if ( jugador == pc ) {
    printf("\nEMPATE.");
  } else if ( jugador == 1 && pc == 3 ) {
    printf("\nGANASTE.");
  } else if ( jugador == 2 && pc == 1 ) {
    printf("\nGANASTE.");
  } else if ( jugador == 3 && pc == 2 ) {
    printf("\nGANASTE.");
  } else {
    printf("\nPERDISTE.");
  }
}
