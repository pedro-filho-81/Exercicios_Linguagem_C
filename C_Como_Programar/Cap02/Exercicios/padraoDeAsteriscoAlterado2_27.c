/*
   2.27 Padr�o de asteriscos alternados. Apresente o seguinte padr�o de
   asteriscos alternados com oito instru-  ��es printf, e depois apresente
   o mesmo padr�o com  o m�nimo de instru��es printf poss�vel.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 42). Edi��o do Kindle.
   Autor: Pedro Filho, 13/01/2021
*/

// biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// FUN��O PRINCIPAL
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "portuguese" );

   // mostrar padr�o de asterisco com 8 instru��es printfs.
   printf( "Usando 8 printfs.\n");
   printf( "* * * * * * * *\n" );
   printf( " * * * * * * * *\n" );
   printf( "* * * * * * * *\n" );
   printf( " * * * * * * * *\n" );
   printf( "* * * * * * * *\n" );
   printf( " * * * * * * * *\n" );
   printf( "* * * * * * * *\n" );
   printf( " * * * * * * * *\n" );

   // mostrar padr�o de asterisco com 4 instru��es printfs.
   printf( "\nUsando 4 printfs.\n");
   printf( "* * * * * * * *\n * * * * * * * *\n" );
   printf( "* * * * * * * *\n * * * * * * * *\n" );
   printf( "* * * * * * * *\n * * * * * * * *\n" );
   printf( "* * * * * * * *\n * * * * * * * *\n" );

   // mostrar padr�o de asterisco com 2 instru��es printfs.
   printf( "\nUsando 2 printfs.\n");
   printf( "* * * * * * * *\n * * * * * * * *\n* * * * * * * * \n * * * * * * * * \n" );
   printf( "* * * * * * * *\n * * * * * * * *\n* * * * * * * * \n * * * * * * * * \n" );

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN
