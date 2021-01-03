/*
   Ponteiros:  ponteiro gen�rico
   Auto: Pedro Filho, 02/01/2021
*/

// biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// FUN��O PRINCIPAL
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // ponteiro void
   // ponteiro gen�rico permite
   // guardar qualquer tipo de dado
   void *pp;

   // ponteiro para inteiro
   int *p1;

   // vari�vel recebe valor dez
   int p2 = 10;

   // p1 recebe endere�o de &p2
   p1 = &p2;

   // pp recebe endere�o de &p2;
   pp = &p2;

   // imprime p1
   printf( "p1 = &p2; - p1 recebe o Endere�o de p2 = %p\n", p1 );

   // imprime pp
   printf( "pp = &p2; - pp recebe o Endere�o de p2 = %p\n", pp );

   // *p1 - imprimi valor de p2
   printf( "*p1 - mostra o valor de p2 %d\n", *p1 );

    // ponteiro pp recebe ponteiro p1
   pp = p1;

   // pp - imprime o endere�o de p1
   printf( "*pp - imprime o endere�o de p1 %d\n", pp );

   // *pp - D� ERRO caso pessa para imprimir o valor
   // por ser um ponteiro vazio ( void ) recebe o endere�o
   // mas, o compilador n�o aceita que receba o valor
   printf( "*pp - D� erro caso pessa para mostrar o valor %p\n", pp );

   // *pp foi criado como void
   printf( "void *pp; - cria pp como void.\n" );

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN
