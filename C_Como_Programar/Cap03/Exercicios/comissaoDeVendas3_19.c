/*
   Quest�o: 3.19 Calculadora de comiss�o de vendas. Uma grande  companhia
   qu�mica paga seus vendedores por comiss�o.  Os vendedores recebem R$ 200,00
   por semana, mais 9  por cento de suas vendas brutas nessa semana.
   Por exemplo, um vendedor que comercialize R$ 5.000,00 em produtos qu�micos
   em uma semana receber� R$ 200,00 e  mais 9 por cento de R$ 5.000,00, ou seja,
   receber� um  total de R$ 650,00. Desenvolva um programa que pe�a
   os  valores brutos de cada vendedor na semana que passou,  calcule e apresente
   o valor que esse vendedor dever� receber. Processe os valores referentes
   a um vendedor por vez.  Veja um exemplo do di�logo de entrada/sa�da:
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 74). Edi��o do Kindle.
   Autor: Pedro Filho, 16/01/2021
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

   // vari�veis
   const float salario = 200.00; // sal�rio semanal
   float vendasBrutas = 0; // para entrada das vendas brutas
   float percentualDasVendas = 0; // calcular os 9% sobre vendas brutas
   float pagamento = 0; // para calcular o valor da semana

   // entrada de dados
   printf( "Informe o valor das vendas brutas R$" );
   scanf( "%f", &vendasBrutas );

   // enquanto vendas brutas diferente de -1 fa�a
   while( vendasBrutas != -1 )
   {
      // calcular o percentual sobre as vendas brutas
      percentualDasVendas = vendasBrutas * 9 / 100;

      // calcular o pagamento
      pagamento = salario + percentualDasVendas;

      // imprime o valor do pagamento semanal
      printf( "O pagamento � de R$%.2f\n\n", pagamento );

      // entrada de dados
      printf( "Informe o valor das vendas brutas R$" );
      scanf( "%f", &vendasBrutas );
   } // fim while

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN
