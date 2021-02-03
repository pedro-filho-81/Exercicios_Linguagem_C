/*
   Questão: Fig. 5.3: fig05_03.c  2 Criando e usando uma função definida pelo
   programador
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 117). Edição do Kindle.
   @Pedro Filho, 03/02/2021
*/

// Incluir Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// protótipo
int funcaoQuadrado( int num );

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // variável contador
   int x;

   // loop para calcular e exibir o quadrado de um número
   for( x = 1; x <= 10; x++ ) {

      //imprime e chama a função quadrado
      printf( "O kkk quadrado de %d é %d\n", x, funcaoQuadrado( x ) );
   } // fim for

   // pular linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN

// cria a função quadrado
int funcaoQuadrado( int num ) {

   // retorna o quadrade de um número
   return num * num;

} // fim funcaoQuadrado
