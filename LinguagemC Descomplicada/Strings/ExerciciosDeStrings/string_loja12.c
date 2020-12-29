/*
   Strings:  12) Escreva um programa que leia o nome e o valor de
   determinada mercadoria de uma loja. Sabendo que o desconto para
   pagamento � vista � de 10% sobre o valor total, calcule o valor
   a ser pago � vista. Escreva o nome da mercadoria, o valor total,
   o valor do desconto e o valor a ser pago � vista.
   Backes, Andr�. Linguagem C (p. 140). GEN LTC. Edi��o do Kindle.
   Auto: Pedro Filho, 27/12/2020
*/

// biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define TAMANHO 20

// FUN��O PRINCIPAL
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // vetor para string
   char nomeDoProduto[ TAMANHO ];
   float vlProduto = 0;
   float descontos = 1;
   float vltotal = 0;

   // cabe�alho
   printf( "{ COMPARANDO STRING }\n" );

   //entrada de dados
   printf( "Digite nome do produto: " );
   // limpar o buffer
   setbuf( stdin, NULL );
   // ENTRADA DO USU�RIO
   gets( nomeDoProduto );

   printf( "Digite o valor do produto R$" );
   scanf( "%f", &vlProduto );

   // mostrar
   printf( "Produto: %s\n", nomeDoProduto );
   printf( "Valor do produto R$%.2f\n", vlProduto );

   // calcular os descontos
   descontos = vlProduto * 10 / 100;

   printf( "Desconto R$%.2f\n", descontos );
   printf( "Total a pagar R$%.2f\n", vlProduto - descontos );


   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN
