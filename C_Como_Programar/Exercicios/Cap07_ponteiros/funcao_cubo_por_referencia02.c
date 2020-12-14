/*
   /* Fig. 7.6: fig07_06.c  2 Cubo de uma vari�vel usando chamada por valor
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 212). Edi��o do Kindle.
   Pedro Filho 13/12/2020
*/

// bibliotecas
#include <stdio.h>
#include <locale.h>

// prot�tipo
int valorDoCubo( int *nPtr );

int main()
{
   // portugu�s
   setlocale( LC_ALL, "Portuguese" );

   // vari�vel
   int num = 5;

   // mostra o valor do cubo
   printf( "\tO valor do cubo de 5 � %d\n ", valorDoCubo( &num ) );

}  // fim main

// fun��o valor do cubo
int valorDoCubo( int *nPtr )
{
   return *nPtr * *nPtr * *nPtr;
} // fim fun��o valor do cubo
