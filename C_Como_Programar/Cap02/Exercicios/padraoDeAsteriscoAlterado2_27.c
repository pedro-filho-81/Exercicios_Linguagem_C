/*
   2.27 Padrão de asteriscos alternados. Apresente o seguinte padrão de
   asteriscos alternados com oito instru-  ções printf, e depois apresente
   o mesmo padrão com  o mínimo de instruções printf possível.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 42). Edição do Kindle.
   Autor: Pedro Filho, 13/01/2021
*/

// biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "portuguese" );

   // mostrar padrão de asterisco com 8 instruções printfs.
   printf( "Usando 8 printfs.\n");
   printf( "* * * * * * * *\n" );
   printf( " * * * * * * * *\n" );
   printf( "* * * * * * * *\n" );
   printf( " * * * * * * * *\n" );
   printf( "* * * * * * * *\n" );
   printf( " * * * * * * * *\n" );
   printf( "* * * * * * * *\n" );
   printf( " * * * * * * * *\n" );

   // mostrar padrão de asterisco com 4 instruções printfs.
   printf( "\nUsando 4 printfs.\n");
   printf( "* * * * * * * *\n * * * * * * * *\n" );
   printf( "* * * * * * * *\n * * * * * * * *\n" );
   printf( "* * * * * * * *\n * * * * * * * *\n" );
   printf( "* * * * * * * *\n * * * * * * * *\n" );

   // mostrar padrão de asterisco com 2 instruções printfs.
   printf( "\nUsando 2 printfs.\n");
   printf( "* * * * * * * *\n * * * * * * * *\n* * * * * * * * \n * * * * * * * * \n" );
   printf( "* * * * * * * *\n * * * * * * * *\n* * * * * * * * \n * * * * * * * * \n" );

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN
