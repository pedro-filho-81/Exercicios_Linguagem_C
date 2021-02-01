/*
   Questão: 4.28 Calculando o pagamento semanal. Uma empresa  paga a seus
   funcionários como gerentes (que recebem  um salário semanal fixo),
   trabalhadores por hora (que  recebem um salário fixo por hora até as 40
   primeiras  horas de trabalho e ‘hora e meia’ — ou seja, 1,5 vez  o salário
   por hora — para horas extras trabalhadas),  trabalhadores comissionados
   ( que recebem R$ 250,00  mais 5,7 por cento de suas vendas brutas semanais)
   ou  trabalhadores por unidade (que recebem um valor fixo  para cada um dos
   itens que eles produzem — cada trabalhador por unidade nessa empresa trabalha
   apenas em  um tipo de item). Escreva um programa que calcule o  pagamento
   semanal de cada empregado. Você não sabe  o número de empregados com
   antecedência. Cada tipo  de empregado tem seu próprio código de pagamento:
   gerentes têm código 1, trabalhadores por hora têm código  2, trabalhadores
   comissionados têm código 3 e trabalhadores por unidade têm código 4.
   Use um switch para  calcular o pagamento de cada empregado com base no
   seu código de pagamento. Dentro do switch, peça ao  usuário (ou seja,
   o funcionário administrativo da folha  de pagamento) que informe os fatos
   apropriados que seu  programa precisa para calcular o pagamento de cada
   empregado com base no código.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 111). Edição do Kindle.
   Autor: @Pedro Filho, 31/01/2021
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
   float salarioGerente = 0;
   float salarioTrabHoras = 0;
   float valorDaHora = 0; // valor da hora trabalhada
   float trabalhoPorHora = 0;
   float salarioComissao = 0;
   float comissao = 0; // valor da comissão
   float valorDasVendas = 0;
   float salarioTrabPorUnidade = 0;
   int tempoEmHoras = 0;
   int quantidadeDeItens = 0;
   float horasExtras = 0;
   int opcao = 0;
   float valorDoItem = 0;

   // loop infinito
   while( 1 ) { // inicio while

      // cabeçalho menu
      printf( "%33s\n", "FOLHA DE PAGAMENTO SEMANAL" );
      printf( "%32s\n", "************************" );
      printf( "%21s%11s\n", "* 1 - Gerente", "*" );
      printf( "%28s%4s\n", "* 2 - Trab. por hora", "*");
      printf( "%27s%5s\n", "* 3 - Comissionados", "*" );
      printf( "%31s%1s\n", "* 4 - Trab. por unidade", "*" );
      printf( "%18s%14s\n", "* 5 - Sair", "*" );
      printf( "%32s\n", "************************" );

      // entrada de dados
      printf( "%26s", "Digite sua opção: " );
      scanf( "%d", &opcao ); // aguarda a entrada da opção

      // se opção igual a 5 sair do programa
      if( opcao == 5 ) break;

      // executa conforme a opção de menu
      switch( opcao ) {

         case 1:
            // entrada de dados do gerente
            printf( "Digite o valor do salário do gerente R$" );
            scanf( "%f", &salarioGerente ); // aguarda valor do salário do gerente
            break; // sair

         case 2:
            // ENTRADA DE DADOS do trabalhador por hora
            printf( "Digite o valor da hora trabalhada R$" );
            scanf( "%f", &valorDaHora ); // aguarda o valor da hora trabalhada

            // tempo em horas
            printf( "Digite às horas trabalhadas: " );
            scanf( "%d", &tempoEmHoras );

            // se horas menor ou igual a 40
            if( tempoEmHoras <= 40 ) {

               // calcular o valor do sálario
               salarioTrabHoras = valorDaHora * tempoEmHoras;
               // imprimir
               printf( "Salário das horas trabalhadas R$%.2f\n", salarioTrabHoras );

            } // fim if
            // se não
            else {

               // calcular horas extras
               horasExtras = ( tempoEmHoras - 40 ) * ( valorDaHora * 1.5 );
               // imprimir
               printf( "Valor de %d horas extras R$%.2f\n",
                      ( tempoEmHoras - 40 ), horasExtras );

               // calcular o salário das horas trabalhadas
               salarioTrabHoras = ( valorDaHora * 40 ) + horasExtras;
               // imprimir
               printf( "Salário das horas trabalhadas R$%.2f\n", salarioTrabHoras );
            } // fim if

            break; // sair do switch

         case 3:
            // entrada de dados trabalhador comissionado
            printf( "Informe o valor das vendas R$" );
            scanf( "%f", &valorDasVendas );

            // calcular a comissão
            comissao = valorDasVendas * 5.7 / 100;
            // imprime
            printf( "Comissão R$%.2f\n", comissao );

            // calcular o salário do comissionado
            salarioComissao = 250 + comissao;
            // imprime
            printf( "Salário do comissionado R$%.2f\n", salarioComissao );

            // sair do switch
            break;

         case 4:
            // entrada de dados do trabalhador por unidade
            printf( "Digite o valor do item produzido R$" );
            scanf( "%f", &valorDoItem );

            // entrada das quantidades
            printf( "Digite a quantidade de itens produzidos: " );
            scanf( "%d", &quantidadeDeItens );

            // calcular o salário do trabalhador por unidade
            salarioTrabPorUnidade = valorDoItem * quantidadeDeItens;
            // imprima
            printf( "Valor do salário do trabalhador por unidade R$%.2f\n",
                   salarioTrabPorUnidade );

            // sair do switch
            break;

         default:
            // imprimir
            printf( "Erro! Opção inválida!" );
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

}  // FIM FUNÇÃO MAIN
