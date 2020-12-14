/*
   /* Fig. 7.6: fig07_06.c
   2 Cubo de uma vari�vel usando chamada por valor
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 212). Edi��o do Kindle.
   Pedro Filho 13/12/2020
*/

// bibliotecas
#include <stdio.h>
#include <locale.h>

// prot�tipo
int valorDoCubo( int n );

int main()
{
   // portugu�s
   setlocale( LC_ALL, "Portuguese" );

   // vari�vel
   int num = 5; // VARI�VEL NUM RECEBE O VALOR CINCO

   // mostra o valor do cubo
   // ESTE EXEMPLO MOSTRA A CHAMADA DE FUN��O POR VALOR
   printf( "\tO valor do cubo de 5 � %d\n ", valorDoCubo( num ) );

}  // fim main

// fun��o valor do cubo
// A FUN��O RECEBE UM VALOR INTEIRO E
int valorDoCubo( int n )
{
   // RETORNA O VALOR DA MULTIPLICA��O PARA A FUN��O
   return n * n * n;
} // fim fun��o valor do cubo
