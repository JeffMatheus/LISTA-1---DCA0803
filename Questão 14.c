#include <stdio.h>
#include <stdlib.h>

float compare (const void * a, const void * b) {

  return (*(float *)a - *(float *)b); //converte o tipo para float e toma o conteúdo contido em a e em b. Retorna para o método principal um valor usado por qsort para ordenar
}

int main(void) {

  float * numeros; //ponteiro que guarda os endereços alocados dinamicamente
  int k;
  int n;

  printf ("Informe a quantidade de números a ordenar: ");
  scanf ("%d", &n); //recebe um número inteiro de valores e guarda em n

  numeros = malloc (n * sizeof(float)); //guarda os endereços alocados dinamicamente a depender da quantidade n escolhida e do tamanho ocupado pela variável float

  if (numeros != NULL) {

    printf ("A alocação de memória foi efetivada. Informe os números desejados:");
  } else {

    printf ("A alocação de memória falhou!");
  } //teste se ocorreu alocação dinamica. Se ocorrer, o endereço de "numeros" será diferente de nulo. Se não, o endereço de "numeros" será igual a nulo.

  for (k = 0; k < n; k++) {

    scanf ("%f", &numeros[k]); //guarda os números desejados nos blocos de endereço providos por malloc
  }

  printf ("Os números são:\n");
  for (k = 0; k < n; k++) {

    printf ("%f", numeros[k]);

    printf (" ");
  } //exibe os números na ordem em que foram fornecidos

  qsort(&numeros, n, sizeof(float), compare); //chama a função qsort que ordena conforme o endereço do primeiro elemento de "numeros", a quantidade de elementos e o blcoo ocupado por um float, utilizando como parâmetro a função compare

  printf ("\n Os números ordenados são: ");

  for (k = 0; k < n; k++) {

    printf("%f", numeros[k]);

  }  //exibe os números ordenados

  free(numeros); //libera a alocação feita anteriormente

  return 0;
}