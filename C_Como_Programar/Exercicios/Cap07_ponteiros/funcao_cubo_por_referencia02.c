/*
   /* Fig. 7.7: fig07_07.c
   2 Cubo de uma vari�vel usando chamada por refer�ncia.
   3 Exemplo mostra a utiliza��o dos operadores ( * ) e ( & )
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 212). Edi��o do Kindle.
   Pedro Filho 13/12/2020
*/

// bibliotecas
#include <stdio.h>
#include <locale.h>

// prot�tipo USANDO PONTEIRO
int valorDoCubo( int *nPtr );

int main()
{
   // portugu�s
   setlocale( LC_ALL, "Portuguese" );

   // vari�vel
   int num = 5; // VARI�VEL RECEBE UM INTEIRO

   // mostra o valor do cubo
   // CHAMAR A FUN��O VALOR DO CUBO E PASSAR
   // COMO PAR�METRO O ENDERE�O DA VARI�VEL ATR�VES DO OPERADOR ( & )
   printf( "\tO valor do cubo de 5 � %d\n ", valorDoCubo( &num ) );

}  // fim main

// fun��o valor do cubo
int valorDoCubo( int *nPtr )
{
   // RETORNA O VALOR DA MULTIPLICA��O PARA A FUN��O
   return *nPtr * *nPtr * *nPtr;
} // fim fun��o valor do cubo
