/*
   Quest�o: Fig. 5.3: fig05_03.c  2 Criando e usando uma fun��o definida pelo
   programador
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 117). Edi��o do Kindle.
   @Pedro Filho, 03/02/2021
*/

// Incluir Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// prot�tipo
int funcaoQuadrado( int num );

// FUN��O PRINCIPAL
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // vari�vel contador
   int x;

   // loop para calcular e exibir o quadrado de um n�mero
   for( x = 1; x <= 10; x++ ) {

      //imprime e chama a fun��o quadrado
      printf( "O kkk quadrado de %d � %d\n", x, funcaoQuadrado( x ) );
   } // fim for

   // pular linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN

// cria a fun��o quadrado
int funcaoQuadrado( int num ) {

   // retorna o quadrade de um n�mero
   return num * num;

} // fim funcaoQuadrado
