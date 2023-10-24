#include<stdio.h>
#include<stdbool.h>

int restaAlg(int a, int b) {
  int value = 0;

  // funciona siempre que el resultado de la resta de positivoS

  while(b < a) {
    b++;
    value++;
  }

  return value;
}

int sumaAlg(int a, int b) {
  int value = 0;

  while(a) {
    a--;
    b++;
    value = b;
  }

  return value;
}

int multAlg(int a, int b) {
  int value = 0;

  while(a) {
    a--;
    value += b;
  }

  return value;
}

int divAlg(int a, int b) {
  int value = 0;

  while(a >= b) {
    a -= b;

    value++;
  }

  return printf("La division es: %d(%d)", value, a);
}

int factorialAlg(int numero) {
  int value = 1;

  for(int i = 1; i <= numero; i++) {
    value = value * i;
  }

  return value;
}

int primoAlg(int numero) {
  int contador = 0;
  bool primo = true;

  for(int i = 1; i <= numero && primo == true; i++) {
    if (numero % i == 0) {
      contador++;
    }

    if (contador > 2) primo = false;
  }

  if (contador == 2) {
    return printf("%d SI es primo\n", numero);
  } else {
    return printf("%d NO es primo\n", numero);
  }
}

int primosAlg(int a, int b) {
  while(a <= b) {
    primoAlg(a);
    a++;
  }
}

int contarPrimosAlg(int a, int b) {
  int contador = 0;
  int count = 0;
  bool primo = true;

  while(a <= b) {

  for(int i = 1; i <= a && primo == true; i++) {
    if (a % i == 0) {
      contador++;
    }

    if (contador > 2) primo = false;
  }

  if (contador == 2) {
    count = count + 1;
  }

  a++;
  }

  return count;
}

int main () {
  printf("La resta es: %d\n", restaAlg(5, 2));
  printf("La suma es: %d\n", sumaAlg(15, 3));
  printf("La multiplicacion es: %d\n", multAlg(10, 3));
  divAlg(30, 3);
  printf("\nEl factorial es: %d\n", factorialAlg(3));
  primoAlg(20);
  primosAlg(1, 20);
  printf("%d", contarPrimosAlg(1, 10));
}