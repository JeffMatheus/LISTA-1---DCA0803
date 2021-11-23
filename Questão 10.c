#include <stdio.h>
#include <stdlib.h>

/* Para um vetor <tipo> x, seus elementos x+1, x+2, x+3, x+4 ocuparão os seguintes endereços de memória
a) Para char x : 4092, 4093, 4094, 4095.
b) Para int x : 4092, 4094, 4096, 4098.
c) Para float x : 4092, 4096, 4100, 4104.
d) Para double x : 4092, 4100, 4108, 4116.*/

int main(void) {

  char Teste_caractere[4] = {'A' , 'B' , 'C' , 'D'};
  char *p_c;
  int Teste_inteiro[4] = {0, 1, 2, 3};
  int *p_i;
  float Teste_float[4] = {1.1, 2.2, 3.3, 4.4};
  float *p_f;
  double Teste_double[4] = {0.25, 0.5, 0.75, 1};
  double *p_d;

  int aux;

  printf ("Os endereços do tipo char são:\n");
  for (aux = 0; aux < 4; aux++) {

    p_c = &Teste_caractere[aux];

    printf ("%p", p_c);
    printf ("\n");
  }

  printf("Os endereços do tipo int são:\n");
  for (aux = 0; aux < 4; aux++) {

    p_i = &Teste_inteiro[aux];

      printf ("%p", p_i);
      printf ("\n");
  }

  printf("Os endereços do tipo float são:\n");
  for (aux = 0; aux < 4; aux++) {

    p_f = &Teste_float[aux];

    printf ("%p", p_f);
    printf ("\n");
  }

  printf("Os endereços do tipo double são:\n");
  for (aux = 0; aux < 4; aux++) {

    p_d = &Teste_double[aux];

    printf ("%p", p_d);
    printf ("\n");
  }

  return 0;
}

//conforme os endereços apresentados por meio da função printf, conclui-se que o único tipo de dado que apresentou discordância com a resposta dada foi o tipo int. Respondeu-se que ocupava 2 bytes e, neste caso, ele ocupou 4.