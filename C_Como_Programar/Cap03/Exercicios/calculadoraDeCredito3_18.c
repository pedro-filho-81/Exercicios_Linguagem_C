/*
   Quest�o: loja de departamentos excedeu seu limite de cr�dito. Os  seguintes
   fatos est�o dispon�veis para cada cliente:
   a) N�mero de conta.
   b) Saldo no in�cio do m�s.
   c) Total de todos os encargos desse cliente nesse m�s.
   d) Total de todos os cr�ditos aplicados � conta desse  cliente nesse m�s.
   e) Limite de cr�dito autorizado.
   O programa dever� ler cada um desses fatos, calcular o  novo saldo
   (= saldo inicial + encargos - cr�ditos)  e determinar se o novo saldo �
   superior ao limite de  cr�dito do cliente. Para os clientes cujo limite
   de cr�dito foi ultrapassado, o programa dever� exibir o n�mero  de conta
   do cliente, o limite de cr�dito, o novo saldo e  a mensagem �Limite de
   cr�dito ultrapassado�. Veja um  exemplo do di�logo de entrada/sa�da:
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 74). Edi��o do Kindle.
   Autor: Pedro Filho, 15/01/2021
*/

// Incluir Biblioteca
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

// FUN��O PRINCIPAL
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // vari�veis
   int numContaCliente = 0; // n�mero da conta do cliente
   float saldoDevedor = 0; // saldo no in�co do m�s
   float limiteDeCredito = 0; // limite de cr�dito na loja
   float encargosMonetarios = 0; // total de encargos
   float ComprasDoMes = 0; // total de compras efetuados no m�s
   float valorDosDebitos = 0;

   // cabe�alho
   printf( "\tLIMITE DE CR�DITO\n" );

   // entrada de dados
   printf( "Informe o n�mero da conta [ -1 para sair ]: " ); // prompt
   scanf( "%d", &numContaCliente ); // entrada do usu�rio

   // enquanto n�mero da conta do cliente diferente de -1
   while( numContaCliente != -1 )
   {
      // entrada de dados
      printf( "Informe o saldo devedor: " ); // prompt
      scanf( "%f", &saldoDevedor );

      printf( "Informe os encargos R$" ); // prompt
      scanf( "%f", &encargosMonetarios );

      printf( "Infrome as compras do m�s R$ " ); // prompt
      scanf( "%f", &ComprasDoMes );

      printf( "Informe o limite de cr�dito: " ); // prompt
      scanf( "%f", &limiteDeCredito );

      // calcular
      valorDosDebitos = saldoDevedor + encargosMonetarios + ComprasDoMes;

      // imprimir resultado
      printf( "\n\tRESUMO DO CR�DITO\n" );
      printf( "Conta: %d\n", numContaCliente );
      printf( "Saldo devedor: R$%.2f\n", saldoDevedor );
      printf( "Total de encargos R$%.2f\n", encargosMonetarios );
      printf( "Valor das Compras no m�s R$%.2f\n", ComprasDoMes );
      printf( "Limite de cr�ditos: R$%.2f\n", limiteDeCredito );
      printf( "Saldo devedor R$%.2f\n", valorDosDebitos );

      // verificar se o valor dos debitos � maior que o limite de cr�ditos
      if( valorDosDebitos > limiteDeCredito ) { // se verdade

         // imprimir
         printf( "COMPRAS N�O APROVADAS!" );
      } // fim if

      // se n�o for
      else {

         // imprimir
         printf( "Compras aprovadas.\n" );
      } // fim else

      // entrada de dados
      printf( "Informe o n�mero da conta [ -1 para sair ]: " ); // prompt
      scanf( "%d", &numContaCliente ); // entrada do usu�rio

   } // fim while

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN
