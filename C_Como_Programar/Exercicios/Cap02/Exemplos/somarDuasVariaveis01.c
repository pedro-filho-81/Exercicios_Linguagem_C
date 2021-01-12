/*
   Exemplo do livro, Somar duas variáveis
   Auto: Pedro Filho, 11/01/2021
*/

// biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // variáveis
   int numero1; // para o primeiro número
   int numero2; // segundo número
   int soma = 0; // somar as variáveis

   // entrada de dados
   printf( "Digite o primeiro inteiro: " ); // prompt
   scanf( "%d", &numero1 );

   printf( "Segundo inteiro: " );
   scanf( "%d", &numero2 );

   // somar as variáveis
   soma = numero1 + numero2;

   // mostrar resultado
   printf( "A soma de %d + %d = %d\n", numero1, numero2, soma );

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN
