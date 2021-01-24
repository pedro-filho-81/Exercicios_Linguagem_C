/*
   Questão: 4.15 Programa de juros compostos modificado. Modifique o programa
   de juros compostos da Seção 4.6 e  repita suas etapas para taxas de juros
   de 5, 6, 7, 8, 9 e 10  por cento. Use um loop for para variar a taxa de juros.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 109). Edição do Kindle.
   Autor: @Pedro Filho, 23/01/2021
*/

// Incluir Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // variáveis
   double capital = 0; // para o valor principal
   double juros = 0; // para o valor dos juros
   double percentual = 0; // para o valor percentual aplicado
   double taxaDeJuros = 0; // para a taxa cobrada ao mês
   double montante = 0; // para o valor final
   int tempo = 0; // quanto tempo para o pagamento ou o investimento

   printf( "\tAPILCAÇÃO FINANCEIRA\n" );

   // entrada de dados
   printf( "Qual o valor principal R$" );
   scanf( "%lf", &capital );

   printf( "Informe os meses para a aplicação: " );
   scanf( "%d", &tempo );

   // cabeçalho
   printf( "\nRESUMO DA APLICAÇÃO\n" );

   // imprima resultado
   printf( "Valor do investimento R$%.2lf\n", capital );
   printf( "Tempo aplicado: %d meses\n", tempo );

   // Conforme o exercício loop para gerar taxa de juros
   // de 5 a 10 porcento
   for( percentual = 5; percentual <= 10; percentual++ ) {

      // calcular
      taxaDeJuros = percentual / 100;

      // loop para mostrar a evolução de investimento
      for( int i = 1; i <= tempo; i++ ) {

         // cálculo do montante
         montante = capital * pow( 1 + taxaDeJuros, i );

      }  // fim for monttante

      // mostra juros recebidos
      printf( "Taxa de juros = %.2lf%%\n", taxaDeJuros );
      printf( "Juros R$%.2f\n", montante - capital );
      printf( "Valor atual R$%.2f\n\n", montante );

      // limpar a taxa de juros para novo cálculo
      taxaDeJuros = 0;

   } // fim for externo

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN
