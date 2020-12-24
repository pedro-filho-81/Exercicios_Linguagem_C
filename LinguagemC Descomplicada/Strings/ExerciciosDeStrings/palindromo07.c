/*
   Strings: 7) Faça um programa que leia uma string e imprima uma
   mensagem dizendo se ela é um palíndromo ou não. Um palíndromo é
   uma palavra que tem a propriedade de poder ser lida tanto da
   direita para a esquerda como da esquerda para a direita.
   Exemplos: ovo, arara, rever, asa, osso etc.
   Backes, André. Linguagem C (p. 140). GEN LTC. Edição do Kindle.
   Auto: Pedro Filho, 24/12/2020
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
   char inverte[ TAMANHO ];
   int tamanhoDoTexto = 0;

   //entrada de dados
   printf( "Digite uma frase: " );

   // limpar o buffer
   setbuf( stdin, NULL );

   // ENTRADA DO USUÁRIO
   gets( texto );

   // mostrando a string
   printf( "Você digitou: %s\n", texto );

   // loop para obter o tamanho do texto
   for(int i = 0; texto[ i ] != '\0'; i++)

      // soma 1 ao tamanho do texto
      tamanhoDoTexto++;

   // loop para compara os textos
   for( int i = 0, j = tamanhoDoTexto - 1; i <= j; i++, j--){

      // se o texto i igual ao texto j
      if( texto[ i ] == texto[ j ] ) {

         // mostrar
         printf("É um Palindromo\n");

         // fim do programa
         break;
      } // fim if

      // se não
      else {

         // imprima
         printf("Não é um Palindromo\n");

         // fim do programa
         break;
      } // fim else
   } // fim for

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN
