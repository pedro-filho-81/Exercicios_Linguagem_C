/*
   Fig. 7.13: fig07_13.c
   2 Tentando modificar um ponteiro constante para dados n�o constantes
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 220). Edi��o do Kindle.
   Pedro Filho 14/12/2020
*/

// bibliotecas
#include <stdio.h>
#include <locale.h>

int main()
{
   // aceita os caracteres do Portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

      // vari�veis
   int x = 5;
   int y;

   // POnteiro constante para inteiro que pode ser modificado por meio
   // mas xPtr sempre aponta para o mesmo local da mem�ria
   // n�o pode ser modificado
   const int *const xPtr = &x;

   printf( "%c\n", *xPtr );
   *xPtr = 7;

   xPtr = &y;

   // pular uma linha
   printf( "\n" );

   return 0; // fim do programa

}// fim main
