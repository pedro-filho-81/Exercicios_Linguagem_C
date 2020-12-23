/*
   Strings: 3) Sem usar a função strlen(), faça um programa que
   leia uma string e imprima quantos caracteres ela possui.
   Backes, André. Linguagem C (p. 139). GEN LTC. Edição do Kindle.
   Auto: Pedro Filho, 22/12/2020
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define TAMANHO 30

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // vetor para string
   char texto[ TAMANHO ];

   // variável
   int contarCaractere = 0;

   //entrada de dados
   printf( "Digite uma frase: " );

   // limpar o buffer
   setbuf( stdin, NULL );

   // ENTRADA DO USUÁRIO
   gets( texto );

   // loop para contar os caracteres do texto
   for( int i = 0; i < texto[ i ] != '\0'; i++ )
   {
      contarCaractere++;
   } // fim for


   // mostrando a string
   printf( "O texto: %s tem %d caracteres.\n", texto, contarCaractere );

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN
