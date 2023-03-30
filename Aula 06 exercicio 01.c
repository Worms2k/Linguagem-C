#include <stdio.h>
#include <locale.h>


int ano_nasc, idade;

main(){
  setlocale(LC_ALL, "PORTUGUESE");

  printf("Digite seu ano de nascimento: ");
  scanf("%i", &ano_nasc);
  idade = 2023 - ano_nasc;
  printf("Você tem %i anos de idade\n", idade );

  if (idade >= 16)
    printf("Você já pode votar\n");
  else
      printf("Você ainda não pode votar\n");

  if (idade >= 18)
    printf("Você já pode tirar sua CNH\n");

  else
    printf("Você ainda não pode tirar CNH\n");

  
}