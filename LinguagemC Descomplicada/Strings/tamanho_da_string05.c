/*
   Strings: Encontrando o tamanho da string com strlen( nome do array )
   Auto: Pedro Filho, 22/12/2020
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define TAMANHO 100

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // vetor para string
   char texto[ TAMANHO ];

   //entrada de dados
   printf( "Digite uma frase: " );

   // limpar o buffer
   setbuf( stdin, NULL );

   // ENTRADA DO USUÁRIO
   gets( texto );

   // mostrando resultado
   printf( "A frase ou paravra digitada é: %s\n\n", texto );
   printf( "Tem %d caracteres incluindo espaços em branco.\n", strlen( texto ) );

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN
