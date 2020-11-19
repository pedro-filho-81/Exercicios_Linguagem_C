/*
    Função:5.38 Visualizando a recursão. É interessante observar a  recursão
    ‘em ação’. Modifique a função fatorial da Figura 5.14 para imprimir sua
    variável local e o parâmetro de  chamada recursiva. Para cada chamada
    recursiva, apresente as saídas em uma linha separada e acrescente um
    nível de recuo. Faça o máximo para tornar as saídas claras,  interessantes
    e significativas. Seu objetivo aqui é projetar e implementar um formato
    de saída que ajude uma pessoa  a entender melhor a recursão. Você pode
    querer acrescentar essas capacidades de exibição a muitos outros exemplos
    e exercícios de recursão no decorrer do livro.
    Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 157). Edição do Kindle.
    Autor: Pedro Filho, 19/11/2020.
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
  int num1;
  int num2;
  int contador = 1;

  // faça enquanto contador igual a 1
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
    printf("\nO MDC entre %d e %d é %d.\n\n", num1, num2, mDC(num1, num2));

    //pergunta se deseja continuar no programa
    printf("Desej continuar: [1-SIM / 2-NÃO]? ");
    scanf("%d", &contador);

    // limpa a tela
    system("cls");

  } // fim while

	// Pausa o sistema
	system("pause");

	 // fim do programa
	return 0;

} // fim main

// função MDC
int mDC(int dividendo, int divisor)
{
   // mostrar o processo da recursividade desta função
  printf( "\t%d / %d = %d\n", dividendo, divisor, dividendo % divisor );

  // se divisor maior que zero e o resto da divisão diferente de zero
  if(divisor > 0 && dividendo % divisor != 0)
  {
    // retorne o mdc
    return mDC(divisor, dividendo % divisor);
  }
  else
  { // se não
     // retorne o divisor
    return divisor;
  } // fim if

} // fim função
