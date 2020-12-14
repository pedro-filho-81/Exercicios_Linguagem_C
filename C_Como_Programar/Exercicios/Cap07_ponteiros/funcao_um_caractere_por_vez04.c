/*
   Fig. 7.11: fig07_11.c
   2 Imprimindo uma string um caractere por vez usando
   3 um ponteiro n�o constante para dados constantes
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 218). Edi��o do Kindle.
   Pedro Filho 14/12/2020
*/

// bibliotecas
#include <stdio.h>
#include <locale.h>
#include <ctype.h>

// prot�tipo
void imprimindoCaracteres( char *sPtr );

int main()
{
   // aceita os caracteres do Portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // vari�vel
   char string[] = "Imprime os caracteres de uma string."; // inicializa array de char

   // mostrar a string antes da convers�o
   printf( "A string �:\n" );

   // chamar a fun��o imprimindo caracteres
   imprimindoCaracteres( string );

   // pular uma linha
   printf( "\n" );

   return 0; // fim do programa

}// fim main

// fun��o minusculaParaMaiuscula
void imprimindoCaracteres( char *sPtr )
{
   // enquanto o ponteiro diferente de \0
   // loop para percprrer uma string
   for( ; *sPtr != '\0'; sPtr++ )
   {
      // imprimir
      printf( "%c ",  *sPtr );
   } // fim for

} // fim fun��o
