/*
   Fig. 7.13: fig07_13.c
   2 Tentando modificar um ponteiro constante para dados não constantes
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 220). Edição do Kindle.
   Pedro Filho 14/12/2020
*/

// bibliotecas
#include <stdio.h>
#include <locale.h>

int main()
{
   // aceita os caracteres do Português Brasil
   setlocale( LC_ALL, "Portuguese" );

      // variáveis
   int x = 5;
   int y;

   // POnteiro constante para inteiro que pode ser modificado por meio
   // mas xPtr sempre aponta para o mesmo local da memória
   // não pode ser modificado
   const int *const xPtr = &x;

   printf( "%c\n", *xPtr );
   *xPtr = 7;

   xPtr = &y;

   // pular uma linha
   printf( "\n" );

   return 0; // fim do programa

}// fim main
