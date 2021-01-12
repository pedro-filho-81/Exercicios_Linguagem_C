/*
   Exemplo do livro, Somar duas vari�veis
   Auto: Pedro Filho, 11/01/2021
*/

// biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// FUN��O PRINCIPAL
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // vari�veis
   int numero1; // para o primeiro n�mero
   int numero2; // segundo n�mero
   int soma = 0; // somar as vari�veis

   // entrada de dados
   printf( "Digite o primeiro inteiro: " ); // prompt
   scanf( "%d", &numero1 );

   printf( "Segundo inteiro: " );
   scanf( "%d", &numero2 );

   // somar as vari�veis
   soma = numero1 + numero2;

   // mostrar resultado
   printf( "A soma de %d + %d = %d\n", numero1, numero2, soma );

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN
