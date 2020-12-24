/*
   Strings: 6) Leia uma string do teclado e conte quantas vogais
   (a, e, i, o, u) ela possui. Entre com um caractere (vogal ou
   palavra dada por esse caractere. Ao final, imprima a nova string
   e o n�mero de vogais que ela possui.

   Backes, Andr�. Linguagem C (p. 140). GEN LTC. Edi��o do Kindle.
   Auto: Pedro Filho, 22/12/2020
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define TAMANHO 30

// FUN��O PRINCIPAL
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // vetor para string
   char texto[ TAMANHO ];
   int contaVogais = 0;

   //entrada de dados
   printf( "Digite uma frase: " );

   // limpar o buffer
   setbuf( stdin, NULL );

   // ENTRADA DO USU�RIO
   gets( texto );

   // mostrando a string
   printf( "Voc� digitou: %s\n", strlwr( texto ) );

   // loop para encontrar vogais no texto, palavra ou frase.
   for( int i = 0; texto[ i ] != '\0'; i++ )
   {
      // verificar se no texto possue as vogais
      if(  texto[ i ] == 'a' || texto[ i ] == 'e' || texto[ i ] == 'i' ||
         texto[ i ] == 'o' || texto[ i ] == 'u' ) {

            // SE VERDADE contar as vogais
            contaVogais++;
      } // fim if
   } // fim for

   printf( "\nA frase |%s| tem %d vogais.\n", texto, contaVogais );

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN
