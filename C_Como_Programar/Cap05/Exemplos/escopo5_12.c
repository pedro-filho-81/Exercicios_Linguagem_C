 /*
   Questão: Fig. 5.12: fig05_12.cC  2 Um exemplo de escopo
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 136). Edição do Kindle.
   @Pedro Filho, 05/02/2021
*/

// Incluir Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// protótipos
void usoLocal( void );
void usoStaticoLocal( void );
void usoGlobal( void );

// variável global
int x = 1;

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // variável local em main
   int x = 5;

   printf( "x local no escopo externo de main %d\n", x );

   {  // inicia um novo escopo
      // variável local para novo escopo
      int x = 7;

      printf( "x local no escopo interno de main %d\n", x );
   } // fim do novo escopo

   printf( "x local no escopo externo de main %d\n", x );

   // chamada das funções
   usoLocal(); // tem x local automática
   usoStaticoLocal(); // tem x local stática
   usoGlobal(); // usa x global

   usoLocal(); // tem x local automática
   usoStaticoLocal(); // tem x local stática
   usoGlobal(); // usa x global

   printf( "\nx local em main é %d\n", x );

   // pular linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN

// função usoLocal
void usoLocal( void )
{
   // variável local
   int x = 25;

   printf( "\nx local em usoLocal é %d após entrar em usoLocal\n", x );

   // incrementa x
   x++;

   printf( "x local em usoLocal é %d após entrar em usoLocal\n", x );
} // fim função usoLocal

// função usoLocal
void usoStaticoLocal( void )
{
   // variável estática local
   static int x = 50;

   printf( "\nx local na usoStaticoLocal é %d após entrar em usoStaticoLocal\n", x );

   // incrementa x
   x++;

   printf( "x local na usoStaticoLocal é %d após entrar em usoStaticoLocal\n", x );
} // fim função usoLocal


// função usoLocal
void usoGlobal( void )
{
   printf( "\nx Global em usoGloval é %d após entrar em usoGLobal\n", x );

   // x multiplicar por 10
   x *= 10;

   printf( "x Global em usoGloval é %d após multiplicar por 10 em usoGLobal\n", x );
} // fim função usoLocal
