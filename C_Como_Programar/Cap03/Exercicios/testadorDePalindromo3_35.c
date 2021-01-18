/*
   Questão:3.35 Testador de palíndromo. Um palíndromo é um nú-  mero, ou uma
   frase textual, que pode ser lido da mesma forma da esquerda para a direita
   e vice-versa. Por  exemplo, cada um dos seguintes inteiros de cinco dígitos
   é um palíndromo: 12321, 55555, 45554 e 11611. Escreva um programa que leia
   um inteiro de cinco dígitos e  determine se ele é ou não um palíndromo.
   [Dica: use os  operadores de divisão e módulo para separar o número
   em seus dígitos individuais.]
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 77). Edição do Kindle.
   Autor: @Pedro Filho, 18/01/2021
*/

// Incluir Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // cria variáveis
   int numero = 0; // para entrada do usuário
   int n1, n2, n3, n4, n5; // variáveis para separar o número digitado
   int numeroInvertido = 0; // para receber os números separados

   // cabeçalho
   printf( "SERÁ QUE O NÚMERO É UM PALÍNDROMO?\n" );

   // entrada de dados
   printf( "Digite um número com 5 digitos [ -1 para sair ]: " );
   scanf( "%d", &numero );

   // separando os números digitados
   n1 = numero / 10000;
   n2 = numero % 10000 / 1000;
   n3 = numero % 1000 / 100;
   n4 = numero % 100 / 10;
   n5 = numero % 10 / 1;

   // imprime números separados
   printf( "O número: %d %d %d %d %d\n", n5, n4, n3, n2, n1 );

   // se n5 igual a n1
   if( n5 == n1 )
       printf( "" );
      // se n4 igual a n2
      if( n4 == n2 )
         // imprime
         printf( "É um palíndromo.\n" );
      // se não
      else
         // imprime
         printf( "NÃO é um palíndromo.\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN
