/*
   Strings: exemplo string para string
   passagem com o comando for
   Auto: Pedro Filho, 18/12/2020
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // cria uma string
   char nome1[ 15 ] = "Pedro Filho";
   char nome2[ 15 ];

   // mostrar nome1
   printf( "\nCria a variável: char nome1[ 15 ] = \"Pedro Filho\" \n" );
   printf( "\nMostra o conteúdo da variável: nome1 = %s\n", nome1 );

   // passando string para string com for
   // ( '\0' ) é o caractere que indica o final da string
   // a expressão ( nome1[ i ] != '\0' ) informa
   // enquanto vetor nome1 for diferente do caractere final de string faça
   for( int i = 0; nome1[ i ] != '\0'; i++ )
   {
      // nome2 recebe os valores de nome1
      nome2[ i ] = nome1[ i ];
   } // fim for

   // mostrar nome2
   printf( "\nCria a variável: char nome2[ 15 ];\n" );
   printf( "\nMostra o conteúdo da variável: nome2 = %s\n", nome2 );
   printf( "\nPassado pela função:\n for( int i = 0; nome1[ i ] != \'\\0\'; i++ )\n" );

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN
