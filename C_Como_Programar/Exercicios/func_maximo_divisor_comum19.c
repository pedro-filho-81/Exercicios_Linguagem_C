/*
    Função: 5.29 Máximo divisor comum. O máximo divisor comum  (MDC) de dois
    inteiros é o maior inteiro que divide cada  um dos dois números sem deixar
    resto. Escreva a função  mdc que retorna o máximo divisor comum de dois inteiros.
    Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 155). Edição do Kindle.
    Autor: Pedro Filho, 16/11/2020.
*/

//bibliotecas
#include <stdio.h>
#include <stdlib.h> //para system
#include <locale.h> // Para setlocale

// protótipo de função
int mDC(int dividendo, int divisor);

//Função principal
int main() { // início main

	//Define para Português Brasil
	setlocale(LC_ALL, "Portuguese");

  // variáveis
  int num1 = 0;
  int num2 = 0;
  int contador = 1;


  // faça enquanto contador igual a 1
  while(contador == 1)
  {
     // título
     printf( "{ ENCONTRE O MDC DE DOIS NÚMEROS }\n" );

    // entrada de dados
    printf("Entre com o dividendo: ");
    scanf("%d", &num1);
    printf("Entre com o divisor: ");
    scanf("%d", &num2);

    // mostra o resultado
    printf("O MDC entre %d e %d é %d.\n", num1, num2, mDC(num1, num2));

    //pergunta se deseja continuar no programa
    printf("Deseja continuar: [1-SIM / 2-NÃO]? ");
    scanf("%d", &contador);

    // limpa a tela
    system("cls");

  } // fim while

	// pular uma linha
	printf( "\n" );

	// Pausa o sistema
	system("pause");

	 // fim do programa
	return 0;

} // fim main

// função MDC
int mDC(int dividendo, int divisor) {

  //variável
  int resto = 0;
  int aux = 0;

   // verificar se o divisor é maios que o dividendo
   if( divisor > dividendo ) // se verdade
  {
     // auxiliar recebe o divisor
     aux = divisor;
     // divisor recebe o dividendo (que é o menor valor)
     divisor = dividendo;
     // dividendo que era o menor valor recebe o auxiliar
     dividendo = aux;
     /* agora o dividendo é o maior valor
        e o divisor o menor */
  }

  //faça enquanto divisor diferente de zero
  while(divisor != 0)
  {

    resto = dividendo % divisor; // primeira divisão

    /* como divisor não foi calculato
      ele passa a ser o dividendo */
    dividendo = divisor;

    divisor = resto; // e o resto passa a ser o divisor

    //verifica se o divisor é diferente de zero
    if(divisor != 0){ // se sim

      resto = dividendo % divisor; // faz a segunda divisão

    } // fim if
  } // fim while

  return dividendo; // retorna o dividendo

} // fim
