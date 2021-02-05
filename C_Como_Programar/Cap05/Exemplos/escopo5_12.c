 /*
   Quest�o: Fig. 5.12: fig05_12.cC  2 Um exemplo de escopo
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 136). Edi��o do Kindle.
   @Pedro Filho, 05/02/2021
*/

// Incluir Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// prot�tipos
void usoLocal( void );
void usoStaticoLocal( void );
void usoGlobal( void );

// vari�vel global
int x = 1;

// FUN��O PRINCIPAL
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // vari�vel local em main
   int x = 5;

   printf( "x local no escopo externo de main %d\n", x );

   {  // inicia um novo escopo
      // vari�vel local para novo escopo
      int x = 7;

      printf( "x local no escopo interno de main %d\n", x );
   } // fim do novo escopo

   printf( "x local no escopo externo de main %d\n", x );

   // chamada das fun��es
   usoLocal(); // tem x local autom�tica
   usoStaticoLocal(); // tem x local st�tica
   usoGlobal(); // usa x global

   usoLocal(); // tem x local autom�tica
   usoStaticoLocal(); // tem x local st�tica
   usoGlobal(); // usa x global

   printf( "\nx local em main � %d\n", x );

   // pular linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN

// fun��o usoLocal
void usoLocal( void )
{
   // vari�vel local
   int x = 25;

   printf( "\nx local em usoLocal � %d ap�s entrar em usoLocal\n", x );

   // incrementa x
   x++;

   printf( "x local em usoLocal � %d ap�s entrar em usoLocal\n", x );
} // fim fun��o usoLocal

// fun��o usoLocal
void usoStaticoLocal( void )
{
   // vari�vel est�tica local
   static int x = 50;

   printf( "\nx local na usoStaticoLocal � %d ap�s entrar em usoStaticoLocal\n", x );

   // incrementa x
   x++;

   printf( "x local na usoStaticoLocal � %d ap�s entrar em usoStaticoLocal\n", x );
} // fim fun��o usoLocal


// fun��o usoLocal
void usoGlobal( void )
{
   printf( "\nx Global em usoGloval � %d ap�s entrar em usoGLobal\n", x );

   // x multiplicar por 10
   x *= 10;

   printf( "x Global em usoGloval � %d ap�s multiplicar por 10 em usoGLobal\n", x );
} // fim fun��o usoLocal
