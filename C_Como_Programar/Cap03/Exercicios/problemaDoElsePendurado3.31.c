/*
   Quest�o:
   Autor: Pedro Filho, 18/01/2021
*/

// Incluir Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// FUN��O PRINCIPAL
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   int x = 11;
   int y = 9;

   if (x < 10)
   {
      if (y > 10)
         printf( "*****\n");
    }
    else
    {
       printf( "#####\n");
       printf( "$$$$$\n");
    }

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN
