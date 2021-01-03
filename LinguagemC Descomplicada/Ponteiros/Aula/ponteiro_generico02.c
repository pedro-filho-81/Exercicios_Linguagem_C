/*
   Ponteiros:  ponteiro genérico
   Auto: Pedro Filho, 02/01/2021
*/

// biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // ponteiro void
   // ponteiro genérico permite
   // guardar qualquer tipo de dado
   void *pp;

   // ponteiro para inteiro
   int *p1;

   // variável recebe valor dez
   int p2 = 10;

   // p1 recebe endereço de &p2
   p1 = &p2;

   // pp recebe endereço de &p2;
   pp = &p2;

   // imprime p1
   printf( "p1 = &p2; - p1 recebe o Endereço de p2 = %p\n", p1 );

   // imprime pp
   printf( "pp = &p2; - pp recebe o Endereço de p2 = %p\n", pp );

   // *p1 - imprimi valor de p2
   printf( "*p1 - mostra o valor de p2 %d\n", *p1 );

    // ponteiro pp recebe ponteiro p1
   pp = p1;

   // pp - imprime o endereço de p1
   printf( "*pp - imprime o endereço de p1 %d\n", pp );

   // *pp - DÁ ERRO caso pessa para imprimir o valor
   // por ser um ponteiro vazio ( void ) recebe o endereço
   // mas, o compilador não aceita que receba o valor
   printf( "*pp - Dá erro caso pessa para mostrar o valor %p\n", pp );

   // *pp foi criado como void
   printf( "void *pp; - cria pp como void.\n" );

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN
