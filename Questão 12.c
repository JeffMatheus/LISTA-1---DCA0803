#include <stdio.h>
#include <stdio.h>

//O advento dos ponteiros permite-nos obter endereços de memória para vários tipos de conteúdo presentes nestes endereços. Nesse sentido, é possível que o conteúdo de um bloco de endereços de memória seja uma função do programa e que consigamos identificá-lo por meio de um ponteiro, isto é, é possível que um ponteiro aponte para uma função. Assim, um ponteiro para função é o ponteiro que guarda em si o endereço de uma função do programa. 

//O uso de um ponteiro para função é bastante útil em aplicações específicas, como no caso da função de ordenação. No entanto, tal uso também pode ser importante para diversas aplicações gerais. Uma delas é quando, por algum motivo, prescisamos monitorar ou rastrear as entradas do programa em subrotinas. Neste caso, o ponteiro permite que conheçamos sobre a utilização de uma função apontando para ela.

//O programa abaixo traz um exemplo simplificado deste uso. Um ponteiro é utilizado para indicar qual função foi utilizada pelo programa, bem como qual o endereço de memória que o programa do método principal precisou acessar para utilizar a função. Veja a seguir.

int m_arit (int dados[5]) {

  int média;

  média = (dados[0] + dados[1] + dados[2] + dados[3] + dados[4])/5;

  return média;
}

int m_pond (int dados[5]) {

  int média;

  média = (dados[0]*3 + dados[1]*2 + dados[2]*5 + dados[3]*2 + dados[4]*1)/5;

  return média;
}

int main(void) {
  
  int dados[5] = {1,2,3,4,5};
  int i;
  float Media;

  printf ("Digite 0 para Média Aritmética ou qualquer outro valor para Média Ponderada: %d", i);
  scanf ("%d", &i);

  if (i == 0) {

    int (*p) (int[]) = m_arit;

    Media = m_arit(dados);

    printf ("\n Os elementos de memória utilizados foram os elementos referentes à função dedicada à Média Aritmética");
    printf ("\n A função Média Aritmética tem como endereço %p", p);

    printf ("\n A média é: %f", Media);

  } else {

    int (*p) (int[]) = m_pond;

    Media = m_pond(dados);

    printf ("\n Os elementos de memória utilizados foram os elementos referentes à função dedicada à Média Ponderada");
    printf ("\n A função Média Ponderada tem como endereço %p", p);

    printf ("\n A média é: %f", Media);
  };
  return 0;
}

//Evidentemente este é um programa a critério de exemplo. Analogamente,poderíamos pensar no uso de ponteiros para funções que rastreem todas as etapas de um processo dinâmico complexo e, diante disso, possibilitem tomadas de decisões, manutenções ou sinais de saída em um hardware quando certa situação estiver acontecendo, o que evidencia usos análogos do exemplo dado e a importância dos ponteiros para funções.