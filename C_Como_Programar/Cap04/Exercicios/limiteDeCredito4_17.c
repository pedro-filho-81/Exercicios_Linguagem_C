/*
   Quest�o: 4.17 Calculando limites de cr�dito. Poupar dinheiro  vem se tornando
   algo cada vez mais dif�cil de se fazer  durante per�odos de recess�o, de
   modo que as empresas  podem estreitar seus limites de cr�dito para impedir
   que  suas contas a receber (dinheiro devido a elas) se tornem  muito grandes.
   Em resposta a uma recess�o prolongada, uma empresa cortou os limites de
   cr�dito de seus  clientes pela metade. Assim, se um cliente em particular
   tinha um limite de cr�dito de R$ 2.000,00, agora  ele � de R$ 1.000,00.
   Se um cliente tinha um limite de  R$ 5.000,00, agora ele � de R$ 2.500,00.
   Escreva um  programa que analise o status de cr�dito de tr�s clientes
   dessa empresa. Voc� receber� as seguintes informa��es:
   a) O n�mero de conta do cliente.
   b) O limite de cr�dito do cliente antes da recess�o.
   c) O saldo atual do cliente (ou seja, o valor que o cliente deve � empresa).
   Seu programa deve calcular e imprimir o novo limite de  cr�dito para cada
   cliente e deve determinar (e imprimir)  quais clientes t�m saldo atual
   superior a seus novos limites de cr�dito.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 109). Edi��o do Kindle.
   Autor: @Pedro Filho, 25/01/2021
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
   int contaCliente = 0;
   float limiteAnterior = 0;
   float saldoDevedor = 0;
   float novoLimite = 0;
   float saldoAtual =0;

   // cabe�alho
   printf( "\tCALCULANDO LIMITES DE CR�DITO\n" );

   // loop para analisar 3 clientes da empresa
   for( int i = 1; i <= 3; i++ ) {

      // entrada de dados
      printf( "Informe o n�mero da conta: " );
      scanf( "%d", &contaCliente );

      printf( "Informe o limite atual R$" );
      scanf( "%f", &limiteAnterior );

      printf( "Informe o saldo devedor R$" );
      scanf( "%f", &saldoDevedor );

      // calcular o novo limite
      novoLimite = limiteAnterior / 2;

      // imprimir novo limite
      printf( "Seu novo limite � de R$%.2f\n", novoLimite );

      // AN�LISA DAS CONTAS
      // se saldo devedor maior que novo limite
      if( saldoDevedor > novoLimite ) {

         // imprima saldo devedor maior que novo limite
         printf( "Saldo devedor maior que o novo limite em R$%.2f\n\n", saldoDevedor - novoLimite );
      } // fim if
      // se n�o
      else {

         // imprima
         printf( "Saldo devedor menor que novo limite R$%.2f\n\n", novoLimite - saldoDevedor );
      } // fim else

   } // fim for

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN
