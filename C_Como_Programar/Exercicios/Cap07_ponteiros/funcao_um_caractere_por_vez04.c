/*
   Fig. 7.11: fig07_11.c
   2 Imprimindo uma string um caractere por vez usando
   3 um ponteiro não constante para dados constantes
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 218). Edição do Kindle.
   Pedro Filho 14/12/2020
*/

// bibliotecas
#include <stdio.h>
#include <locale.h>
#include <ctype.h>

// protótipo
void imprimindoCaracteres( char *sPtr );

int main()
{
   // aceita os caracteres do Português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // variável
   char string[] = "Imprime os caracteres de uma string."; // inicializa array de char

   // mostrar a string antes da conversão
   printf( "A string é:\n" );

   // chamar a função imprimindo caracteres
   imprimindoCaracteres( string );

   // pular uma linha
   printf( "\n" );

   return 0; // fim do programa

}// fim main

// função minusculaParaMaiuscula
void imprimindoCaracteres( char *sPtr )
{
   // enquanto o ponteiro diferente de \0
   // loop para percprrer uma string
   for( ; *sPtr != '\0'; sPtr++ )
   {
      // imprimir
      printf( "%c ",  *sPtr );
   } // fim for

} // fim função
