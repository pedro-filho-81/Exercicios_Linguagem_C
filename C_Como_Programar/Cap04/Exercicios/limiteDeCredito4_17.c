/*
   Questão: 4.17 Calculando limites de crédito. Poupar dinheiro  vem se tornando
   algo cada vez mais difícil de se fazer  durante períodos de recessão, de
   modo que as empresas  podem estreitar seus limites de crédito para impedir
   que  suas contas a receber (dinheiro devido a elas) se tornem  muito grandes.
   Em resposta a uma recessão prolongada, uma empresa cortou os limites de
   crédito de seus  clientes pela metade. Assim, se um cliente em particular
   tinha um limite de crédito de R$ 2.000,00, agora  ele é de R$ 1.000,00.
   Se um cliente tinha um limite de  R$ 5.000,00, agora ele é de R$ 2.500,00.
   Escreva um  programa que analise o status de crédito de três clientes
   dessa empresa. Você receberá as seguintes informações:
   a) O número de conta do cliente.
   b) O limite de crédito do cliente antes da recessão.
   c) O saldo atual do cliente (ou seja, o valor que o cliente deve à empresa).
   Seu programa deve calcular e imprimir o novo limite de  crédito para cada
   cliente e deve determinar (e imprimir)  quais clientes têm saldo atual
   superior a seus novos limites de crédito.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 109). Edição do Kindle.
   Autor: @Pedro Filho, 25/01/2021
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

   // variáveis
   int contaCliente = 0;
   float limiteAnterior = 0;
   float saldoDevedor = 0;
   float novoLimite = 0;
   float saldoAtual =0;

   // cabeçalho
   printf( "\tCALCULANDO LIMITES DE CRÉDITO\n" );

   // loop para analisar 3 clientes da empresa
   for( int i = 1; i <= 3; i++ ) {

      // entrada de dados
      printf( "Informe o número da conta: " );
      scanf( "%d", &contaCliente );

      printf( "Informe o limite atual R$" );
      scanf( "%f", &limiteAnterior );

      printf( "Informe o saldo devedor R$" );
      scanf( "%f", &saldoDevedor );

      // calcular o novo limite
      novoLimite = limiteAnterior / 2;

      // imprimir novo limite
      printf( "Seu novo limite é de R$%.2f\n", novoLimite );

      // ANÁLISA DAS CONTAS
      // se saldo devedor maior que novo limite
      if( saldoDevedor > novoLimite ) {

         // imprima saldo devedor maior que novo limite
         printf( "Saldo devedor maior que o novo limite em R$%.2f\n\n", saldoDevedor - novoLimite );
      } // fim if
      // se não
      else {

         // imprima
         printf( "Saldo devedor menor que novo limite R$%.2f\n\n", novoLimite - saldoDevedor );
      } // fim else

   } // fim for

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN
