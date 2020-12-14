/*
   1 /* Fig. 7.10: fig07_10.c
   2 Convertendo uma string em mai�sculas usando um
   3 ponteiro n�o constante para dados n�o constantes
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 217). Edi��o do Kindle.
   Pedro Filho 13/12/2020
*/

// bibliotecas
#include <stdio.h>
#include <locale.h>
#include <ctype.h>

// prot�tipo
void minusculaParaMaiuscula( char *sPtr );

int main()
{
   setlocale( LC_ALL, "Portuguese" );

   // vari�vel
   char string[] = "caracteres e R$32,98"; // inicializa array de char

   // mostrar a string antes da convers�o
   printf( "A string antes da convers�o: %s\n", string );

   // chamar a fun��o minusculaParaMaiuscula
   minusculaParaMaiuscula( string );

   // mostrar a string depois de fun��o
   printf( "A string depois da convers�o: %s\n", string );

}// fim main

// fun��o minusculaParaMaiuscula
void minusculaParaMaiuscula( char *sPtr )
{
   // enquanto o ponteiro diferente de \0
   while( *sPtr != '\0' )
   {
      // se ponteiro min�sculo
      if( islower( *sPtr ) )
      {
         // ponteiro recebe mai�scula
         *sPtr = toupper( *sPtr );
      } // fim if

      ++sPtr;

   }//fim enquanto
} // fim fun��o
