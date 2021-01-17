/*
   Questão: 3.22 Pré-incrementando versus pós-incrementando.  Escreva um
   programa que demonstre a diferença entre  pré-decrementar e pós-decrementar
   usando o operador  de decremento --.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 75). Edição do Kindle.
   Autor: Pedro Filho, 17/01/2021
*/

// Incluir Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // variável
   int num = 10;

   // imprime pré-Decremento
   printf( "\tPRÉ-DECREMENTO versus PÓS-DECREMENTO\n" );
   printf( "int num = 10 - cria a variável.\n" );
   printf( "Imprime a variável num = %d\n", num );
   printf( "Variável num após pré-decremento ( --num ) num = %d\n", --num );
   printf( "Com o pré-decremento a variável começa com -1\n\n" );

   // atribuindo 10 a num
   num = 10;
   // imprimindo
   printf( "int num = 10 - cria a variável.\n" );
   printf( "Imprime a variável num = %d\n", num );
   printf( "Variável num após pós-decremento ( num-- ) num = %d\n", num-- );
   printf( "Com o pós-incremento a variável começa com o mesmo valor.\n\n" );
   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN
