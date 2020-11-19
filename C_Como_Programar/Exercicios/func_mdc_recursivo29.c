/*
    Fun��o:5.38 Visualizando a recurs�o. � interessante observar a  recurs�o
    �em a��o�. Modifique a fun��o fatorial da Figura 5.14 para imprimir sua
    vari�vel local e o par�metro de  chamada recursiva. Para cada chamada
    recursiva, apresente as sa�das em uma linha separada e acrescente um
    n�vel de recuo. Fa�a o m�ximo para tornar as sa�das claras,  interessantes
    e significativas. Seu objetivo aqui � projetar e implementar um formato
    de sa�da que ajude uma pessoa  a entender melhor a recurs�o. Voc� pode
    querer acrescentar essas capacidades de exibi��o a muitos outros exemplos
    e exerc�cios de recurs�o no decorrer do livro.
    Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 157). Edi��o do Kindle.
    Autor: Pedro Filho, 19/11/2020.
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
  int num1;
  int num2;
  int contador = 1;

  // fa�a enquanto contador igual a 1
  while(contador == 1)
  {
    // entrada de dados
    printf("Entre com o dividendo: ");
    scanf("%d", &num1);
    printf("Entre com o divisor: ");
    scanf("%d", &num2);

    printf( "\n{ PROCESSO RECURSIVO DO MDC }\n" );
    printf( "  Dividendo vira divisor; \n  divisor vira dividendo;\n" );
    printf( "  e resto vira divisor.\n" );
    // mostra o resultado
    printf("\nO MDC entre %d e %d � %d.\n\n", num1, num2, mDC(num1, num2));

    //pergunta se deseja continuar no programa
    printf("Desej continuar: [1-SIM / 2-N�O]? ");
    scanf("%d", &contador);

    // limpa a tela
    system("cls");

  } // fim while

	// Pausa o sistema
	system("pause");

	 // fim do programa
	return 0;

} // fim main

// fun��o MDC
int mDC(int dividendo, int divisor)
{
   // mostrar o processo da recursividade desta fun��o
  printf( "\t%d / %d = %d\n", dividendo, divisor, dividendo % divisor );

  // se divisor maior que zero e o resto da divis�o diferente de zero
  if(divisor > 0 && dividendo % divisor != 0)
  {
    // retorne o mdc
    return mDC(divisor, dividendo % divisor);
  }
  else
  { // se n�o
     // retorne o divisor
    return divisor;
  } // fim if

} // fim fun��o
