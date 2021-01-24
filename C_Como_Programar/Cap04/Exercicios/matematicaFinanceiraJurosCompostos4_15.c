/*
   Quest�o: 4.15 Programa de juros compostos modificado. Modifique o programa
   de juros compostos da Se��o 4.6 e  repita suas etapas para taxas de juros
   de 5, 6, 7, 8, 9 e 10  por cento. Use um loop for para variar a taxa de juros.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 109). Edi��o do Kindle.
   Autor: @Pedro Filho, 23/01/2021
*/

// Incluir Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


// FUN��O PRINCIPAL
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // vari�veis
   double capital = 0; // para o valor principal
   double juros = 0; // para o valor dos juros
   double percentual = 0; // para o valor percentual aplicado
   double taxaDeJuros = 0; // para a taxa cobrada ao m�s
   double montante = 0; // para o valor final
   int tempo = 0; // quanto tempo para o pagamento ou o investimento

   printf( "\tAPILCA��O FINANCEIRA\n" );

   // entrada de dados
   printf( "Qual o valor principal R$" );
   scanf( "%lf", &capital );

   printf( "Informe os meses para a aplica��o: " );
   scanf( "%d", &tempo );

   // cabe�alho
   printf( "\nRESUMO DA APLICA��O\n" );

   // imprima resultado
   printf( "Valor do investimento R$%.2lf\n", capital );
   printf( "Tempo aplicado: %d meses\n", tempo );

   // Conforme o exerc�cio loop para gerar taxa de juros
   // de 5 a 10 porcento
   for( percentual = 5; percentual <= 10; percentual++ ) {

      // calcular
      taxaDeJuros = percentual / 100;

      // loop para mostrar a evolu��o de investimento
      for( int i = 1; i <= tempo; i++ ) {

         // c�lculo do montante
         montante = capital * pow( 1 + taxaDeJuros, i );

      }  // fim for monttante

      // mostra juros recebidos
      printf( "Taxa de juros = %.2lf%%\n", taxaDeJuros );
      printf( "Juros R$%.2f\n", montante - capital );
      printf( "Valor atual R$%.2f\n\n", montante );

      // limpar a taxa de juros para novo c�lculo
      taxaDeJuros = 0;

   } // fim for externo

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN
