/* Função:5.28 Invertendo dígitos. Escreva uma função que leia um valor inteiro
   e retorne o número com seus dígitos invertidos. Por exemplo, dado o número 7631,
   a função deverá retornar 1367.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (Página 155).  . Edição do Kindle.
   Autor: Pedro Filho, 11/11/2020*/

// incluir bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// protótipo
void inverte_num( int num );

// função principal
int main()
{
   // seleciona o idioma Português
   // possibilita o uso de (ç, ã, é, etc.).
   setlocale(LC_ALL, "Portuguese" );

   // variável para entrada do usuário
   int n = 0;

   // entrada de dados
   printf( "Digite um número: " );
   scanf( "%d", &n );

   // chamar a função inverte número
   inverte_num( n );

   printf( "\n" ); // pula linha

   system( "pause" ); // pausa o sistema

   return 0; // fim do programa

} // fim main

// função inverte_num
void inverte_num( int num )
{
   // variável para inverção
   int inverte = 0;

   // faça enquanto o parametro num for maior que zero
   while( num > 0 )
   {
      // inverte recebe o resto da divisão por dez
      inverte = num % 10;
      // imprime o valor de inverte
      printf( "%d ", inverte );
      // divide o parametro por dez
      num /= 10;

   } // fim while
} // fim função
