/*
   /* Fig. 7.6: fig07_06.c
   2 Cubo de uma variável usando chamada por valor
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 212). Edição do Kindle.
   Pedro Filho 13/12/2020
*/

// bibliotecas
#include <stdio.h>
#include <locale.h>

// protótipo
int valorDoCubo( int n );

int main()
{
   // português
   setlocale( LC_ALL, "Portuguese" );

   // variável
   int num = 5; // VARIÁVEL NUM RECEBE O VALOR CINCO

   // mostra o valor do cubo
   // ESTE EXEMPLO MOSTRA A CHAMADA DE FUNÇÃO POR VALOR
   printf( "\tO valor do cubo de 5 é %d\n ", valorDoCubo( num ) );

}  // fim main

// função valor do cubo
// A FUNÇÃO RECEBE UM VALOR INTEIRO E
int valorDoCubo( int n )
{
   // RETORNA O VALOR DA MULTIPLICAÇÃO PARA A FUNÇÃO
   return n * n * n;
} // fim função valor do cubo
