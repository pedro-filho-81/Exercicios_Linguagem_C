/*
   Quest�o: 4.28 Calculando o pagamento semanal. Uma empresa  paga a seus
   funcion�rios como gerentes (que recebem  um sal�rio semanal fixo),
   trabalhadores por hora (que  recebem um sal�rio fixo por hora at� as 40
   primeiras  horas de trabalho e �hora e meia� � ou seja, 1,5 vez  o sal�rio
   por hora � para horas extras trabalhadas),  trabalhadores comissionados
   ( que recebem R$ 250,00  mais 5,7 por cento de suas vendas brutas semanais)
   ou  trabalhadores por unidade (que recebem um valor fixo  para cada um dos
   itens que eles produzem � cada trabalhador por unidade nessa empresa trabalha
   apenas em  um tipo de item). Escreva um programa que calcule o  pagamento
   semanal de cada empregado. Voc� n�o sabe  o n�mero de empregados com
   anteced�ncia. Cada tipo  de empregado tem seu pr�prio c�digo de pagamento:
   gerentes t�m c�digo 1, trabalhadores por hora t�m c�digo  2, trabalhadores
   comissionados t�m c�digo 3 e trabalhadores por unidade t�m c�digo 4.
   Use um switch para  calcular o pagamento de cada empregado com base no
   seu c�digo de pagamento. Dentro do switch, pe�a ao  usu�rio (ou seja,
   o funcion�rio administrativo da folha  de pagamento) que informe os fatos
   apropriados que seu  programa precisa para calcular o pagamento de cada
   empregado com base no c�digo.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 111). Edi��o do Kindle.
   Autor: @Pedro Filho, 31/01/2021
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
   float salarioGerente = 0;
   float salarioTrabHoras = 0;
   float valorDaHora = 0; // valor da hora trabalhada
   float trabalhoPorHora = 0;
   float salarioComissao = 0;
   float comissao = 0; // valor da comiss�o
   float valorDasVendas = 0;
   float salarioTrabPorUnidade = 0;
   int tempoEmHoras = 0;
   int quantidadeDeItens = 0;
   float horasExtras = 0;
   int opcao = 0;
   float valorDoItem = 0;

   // loop infinito
   while( 1 ) { // inicio while

      // cabe�alho menu
      printf( "%33s\n", "FOLHA DE PAGAMENTO SEMANAL" );
      printf( "%32s\n", "************************" );
      printf( "%21s%11s\n", "* 1 - Gerente", "*" );
      printf( "%28s%4s\n", "* 2 - Trab. por hora", "*");
      printf( "%27s%5s\n", "* 3 - Comissionados", "*" );
      printf( "%31s%1s\n", "* 4 - Trab. por unidade", "*" );
      printf( "%18s%14s\n", "* 5 - Sair", "*" );
      printf( "%32s\n", "************************" );

      // entrada de dados
      printf( "%26s", "Digite sua op��o: " );
      scanf( "%d", &opcao ); // aguarda a entrada da op��o

      // se op��o igual a 5 sair do programa
      if( opcao == 5 ) break;

      // executa conforme a op��o de menu
      switch( opcao ) {

         case 1:
            // entrada de dados do gerente
            printf( "Digite o valor do sal�rio do gerente R$" );
            scanf( "%f", &salarioGerente ); // aguarda valor do sal�rio do gerente
            break; // sair

         case 2:
            // ENTRADA DE DADOS do trabalhador por hora
            printf( "Digite o valor da hora trabalhada R$" );
            scanf( "%f", &valorDaHora ); // aguarda o valor da hora trabalhada

            // tempo em horas
            printf( "Digite �s horas trabalhadas: " );
            scanf( "%d", &tempoEmHoras );

            // se horas menor ou igual a 40
            if( tempoEmHoras <= 40 ) {

               // calcular o valor do s�lario
               salarioTrabHoras = valorDaHora * tempoEmHoras;
               // imprimir
               printf( "Sal�rio das horas trabalhadas R$%.2f\n", salarioTrabHoras );

            } // fim if
            // se n�o
            else {

               // calcular horas extras
               horasExtras = ( tempoEmHoras - 40 ) * ( valorDaHora * 1.5 );
               // imprimir
               printf( "Valor de %d horas extras R$%.2f\n",
                      ( tempoEmHoras - 40 ), horasExtras );

               // calcular o sal�rio das horas trabalhadas
               salarioTrabHoras = ( valorDaHora * 40 ) + horasExtras;
               // imprimir
               printf( "Sal�rio das horas trabalhadas R$%.2f\n", salarioTrabHoras );
            } // fim if

            break; // sair do switch

         case 3:
            // entrada de dados trabalhador comissionado
            printf( "Informe o valor das vendas R$" );
            scanf( "%f", &valorDasVendas );

            // calcular a comiss�o
            comissao = valorDasVendas * 5.7 / 100;
            // imprime
            printf( "Comiss�o R$%.2f\n", comissao );

            // calcular o sal�rio do comissionado
            salarioComissao = 250 + comissao;
            // imprime
            printf( "Sal�rio do comissionado R$%.2f\n", salarioComissao );

            // sair do switch
            break;

         case 4:
            // entrada de dados do trabalhador por unidade
            printf( "Digite o valor do item produzido R$" );
            scanf( "%f", &valorDoItem );

            // entrada das quantidades
            printf( "Digite a quantidade de itens produzidos: " );
            scanf( "%d", &quantidadeDeItens );

            // calcular o sal�rio do trabalhador por unidade
            salarioTrabPorUnidade = valorDoItem * quantidadeDeItens;
            // imprima
            printf( "Valor do sal�rio do trabalhador por unidade R$%.2f\n",
                   salarioTrabPorUnidade );

            // sair do switch
            break;

         default:
            // imprimir
            printf( "Erro! Op��o inv�lida!" );
            break; // sair

      } // fim switch

      // pausar
      system( "pause" );

      // limpar a tela
      system( "cls" );

   } // fim while infinito

   // pularinha
   printf( "\n" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN
