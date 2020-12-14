/*
   /* Fig. 7.6: fig07_06.c  2 Cubo de uma variável usando chamada por valor
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 212). Edição do Kindle.
   Pedro Filho 13/12/2020
*/

// bibliotecas
#include <stdio.h>
#include <locale.h>

// protótipo
int valorDoCubo( int *nPtr );

int main()
{
   // português
   setlocale( LC_ALL, "Portuguese" );

   // variável
   int num = 5;

   // mostra o valor do cubo
   printf( "\tO valor do cubo de 5 é %d\n ", valorDoCubo( &num ) );

}  // fim main

// função valor do cubo
int valorDoCubo( int *nPtr )
{
   return *nPtr * *nPtr * *nPtr;
} // fim função valor do cubo
