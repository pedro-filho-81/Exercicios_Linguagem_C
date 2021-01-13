/*
   Quest�o: 2.29 Valor inteiro de um caractere. Vamos dar um passo  adiante.
   Neste cap�tulo, voc� aprendeu sobre inteiros e o  tipo int. C tamb�m pode
   representar letras mai�sculas,  letras min�sculas e uma grande variedade de
   s�mbolos  especiais. C usa inteiros pequenos internamente para representar
   diferentes caracteres. O conjunto de caracteres  que um computador utiliza,
   juntamente com as representa��es de inteiros correspondentes a esses caracteres,
   � chamado de conjunto de caracteres desse computador.  Voc� pode imprimir
   o equivalente da letra A mai�scula,  por exemplo, executando a instru��o
   printf( �%d�, �A�);  Escreva um programa em C que imprima os equivalentes
   inteiros de algumas letras mai�sculas, letras min�sculas,  d�gitos e
   s�mbolos especiais. No m�nimo, determine os  equivalentes inteiros de
   A B C a b c 0 1 2 $* +  / e o caractere de espa�o em branco.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 42). Edi��o do Kindle.
   Autor: Pedro Filho, 13/01/2021
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

   // vari�vel
   char txt;

   // entrada de dados
   printf( "Digite um caractere, ou n�mero ou um s�mbolo: " );
   scanf( "%c" , &txt );

   printf( "O caractere %c �  o n�mero %d na tabela ASCii\n ", txt, txt );

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN
