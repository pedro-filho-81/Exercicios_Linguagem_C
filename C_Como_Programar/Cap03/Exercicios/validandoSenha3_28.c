/*
   Quest�o: 3.28 Valide a entrada do usu�rio. Modifique o programa  da Figura
   3.10 para validar suas entradas. Em qualquer  entrada, se o valor inserido
   for diferente de 1 ou 2, continue o looping at� que o usu�rio informe
   um valor correto.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 76). Edi��o do Kindle.
   Autor: Pedro Filho, 17/01/2021
*/

// Incluir Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// FUN��O PRINCIPAL
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // cria vari�vel senha
   int senhaValida = 12534; // senha v�lida 12534

   // cabe�alho
   printf( "\tSENHA CORRETA" );

   // entrada de dados
   printf( "\nDigite sua senha de 5 digitos: " );
   scanf( "%d", &senhaValida );

   // enquanto senha diferente de 12534 fa�a
   while( senhaValida != 12534 ) {

      // entrada de dados
      printf( "\nDigite sua senha de 5 digitos: " );
      scanf( "%d", &senhaValida );

   } // fim while

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN
