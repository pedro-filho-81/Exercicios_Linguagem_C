/*
   Questão: 2.29 Valor inteiro de um caractere. Vamos dar um passo  adiante.
   Neste capítulo, você aprendeu sobre inteiros e o  tipo int. C também pode
   representar letras maiúsculas,  letras minúsculas e uma grande variedade de
   símbolos  especiais. C usa inteiros pequenos internamente para representar
   diferentes caracteres. O conjunto de caracteres  que um computador utiliza,
   juntamente com as representações de inteiros correspondentes a esses caracteres,
   é chamado de conjunto de caracteres desse computador.  Você pode imprimir
   o equivalente da letra A maiúscula,  por exemplo, executando a instrução
   printf( “%d”, ‘A’);  Escreva um programa em C que imprima os equivalentes
   inteiros de algumas letras maiúsculas, letras minúsculas,  dígitos e
   símbolos especiais. No mínimo, determine os  equivalentes inteiros de
   A B C a b c 0 1 2 $* +  / e o caractere de espaço em branco.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 42). Edição do Kindle.
   Autor: Pedro Filho, 13/01/2021
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

   // variável
   char txt;

   // entrada de dados
   printf( "Digite um caractere, ou número ou um símbolo: " );
   scanf( "%c" , &txt );

   printf( "O caractere %c é  o número %d na tabela ASCii\n ", txt, txt );

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN
