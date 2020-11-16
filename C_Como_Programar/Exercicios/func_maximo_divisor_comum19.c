/*
    Fun��o: 5.29 M�ximo divisor comum. O m�ximo divisor comum  (MDC) de dois
    inteiros � o maior inteiro que divide cada  um dos dois n�meros sem deixar
    resto. Escreva a fun��o  mdc que retorna o m�ximo divisor comum de dois inteiros.
    Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 155). Edi��o do Kindle.
    Autor: Pedro Filho, 16/11/2020.
*/

//bibliotecas
#include <stdio.h>
#include <stdlib.h> //para system
#include <locale.h> // Para setlocale

// prot�tipo de fun��o
int mDC(int dividendo, int divisor);

//Fun��o principal
int main() { // in�cio main

	//Define para Portugu�s Brasil
	setlocale(LC_ALL, "Portuguese");

  // vari�veis
  int num1 = 0;
  int num2 = 0;
  int contador = 1;


  // fa�a enquanto contador igual a 1
  while(contador == 1)
  {
     // t�tulo
     printf( "{ ENCONTRE O MDC DE DOIS N�MEROS }\n" );

    // entrada de dados
    printf("Entre com o dividendo: ");
    scanf("%d", &num1);
    printf("Entre com o divisor: ");
    scanf("%d", &num2);

    // mostra o resultado
    printf("O MDC entre %d e %d � %d.\n", num1, num2, mDC(num1, num2));

    //pergunta se deseja continuar no programa
    printf("Deseja continuar: [1-SIM / 2-N�O]? ");
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

// fun��o MDC
int mDC(int dividendo, int divisor) {

  //vari�vel
  int resto = 0;
  int aux = 0;

   // verificar se o divisor � maios que o dividendo
   if( divisor > dividendo ) // se verdade
  {
     // auxiliar recebe o divisor
     aux = divisor;
     // divisor recebe o dividendo (que � o menor valor)
     divisor = dividendo;
     // dividendo que era o menor valor recebe o auxiliar
     dividendo = aux;
     /* agora o dividendo � o maior valor
        e o divisor o menor */
  }

  //fa�a enquanto divisor diferente de zero
  while(divisor != 0)
  {

    resto = dividendo % divisor; // primeira divis�o

    /* como divisor n�o foi calculato
      ele passa a ser o dividendo */
    dividendo = divisor;

    divisor = resto; // e o resto passa a ser o divisor

    //verifica se o divisor � diferente de zero
    if(divisor != 0){ // se sim

      resto = dividendo % divisor; // faz a segunda divis�o

    } // fim if
  } // fim while

  return dividendo; // retorna o dividendo

} // fim
