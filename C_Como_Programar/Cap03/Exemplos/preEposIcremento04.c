/*
   Questão: Pre-incremento e Pós-incremento
   Pedro Filho, 14/01/2021
*/

// Incluir Biblioteca
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // variável
   int c = 5;

   // imprime pós-incremento
   printf( "int c = 5; - cria variável\n" );
   printf( "c = %d - variável antes do pós-incremento.\n", c );
   printf( "c++ - pós-incremento soma 1 a c, "
          "\nO valor de c depois do pós-incremento é %d\n", c++ );

   // c recebe 5
   c = 5;

   // imprime pré-incremento
   printf( "\nint c = 5; - cria variável\n" );
   printf( "c = %d - variável antes do pré-incremento.\n", c );
   printf( "++c - pré-incremento soma 1 a c "
          "\nO valor de c depois do pré-incremento é %d\n\n", ++c );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN
