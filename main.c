#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <time.h>


int main() {
  
  int portaEscolhida, portaPremiada, portaVazia, trocarPorta;
  srand(time(NULL));
  printf("Bem-vindo ao jogo Monty Hall!\n");
  printf("Escolha uma porta (1, 2 ou 3): ");
  scanf("%d", &portaEscolhida);
  
  portaPremiada = rand() % 3 + 1;
  
  do {
    portaVazia = rand() % 3 + 1;
  }
    while (portaVazia == portaEscolhida || portaVazia == portaPremiada);
  printf("O apresentador abriu a porta %d que está vazia.\n", portaVazia);

  printf("Você deseja trocar para a outra porta? (sim/nao): ");
  
  char choice[2];
    scanf("%s", choice);
    trocarPorta = (strcmp(choice, "s") == 0);
    
  if (trocarPorta) {
      
    do {
        portaEscolhida = rand() % 3 + 1;
      } 
      while (portaEscolhida == portaVazia || portaEscolhida == portaEscolhida);
    }
    if (portaEscolhida == portaPremiada) {
      printf("Você ganhou! Parabéns!\n");
    } else {
      printf("Você perdeu! A porta premiada era a porta %d.!\n", portaPremiada);
    }
    return 0;
  }