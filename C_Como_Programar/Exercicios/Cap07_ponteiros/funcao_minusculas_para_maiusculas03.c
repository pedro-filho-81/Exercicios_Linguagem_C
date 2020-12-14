/*
   1 /* Fig. 7.10: fig07_10.c
   2 Convertendo uma string em maiúsculas usando um
   3 ponteiro não constante para dados não constantes
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 217). Edição do Kindle.
   Pedro Filho 13/12/2020
*/

// bibliotecas
#include <stdio.h>
#include <locale.h>
#include <ctype.h>

// protótipo
void minusculaParaMaiuscula( char *sPtr );

int main()
{
   setlocale( LC_ALL, "Portuguese" );

   // variável
   char string[] = "caracteres e R$32,98"; // inicializa array de char

   // mostrar a string antes da conversão
   printf( "A string antes da conversão: %s\n", string );

   // chamar a função minusculaParaMaiuscula
   minusculaParaMaiuscula( string );

   // mostrar a string depois de função
   printf( "A string depois da conversão: %s\n", string );

}// fim main

// função minusculaParaMaiuscula
void minusculaParaMaiuscula( char *sPtr )
{
   // enquanto o ponteiro diferente de \0
   while( *sPtr != '\0' )
   {
      // se ponteiro minúsculo
      if( islower( *sPtr ) )
      {
         // ponteiro recebe maiúscula
         *sPtr = toupper( *sPtr );
      } // fim if

      ++sPtr;

   }//fim enquanto
} // fim função
