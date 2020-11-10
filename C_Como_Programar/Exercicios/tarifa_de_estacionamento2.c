/* Fun��o: Tarifa de estacionamento. Um estacionamento cobra
   uma tarifa m�nima de R$ 2,00 por uma perman�ncia de at� tr�s horas,
   e R$ 0,50 adicionais por hora para cada hora, ou parte dela, por
   at� tr�s horas. A tarifa m�xima para qualquer per�odo de 24 horas
   � de R$ 10,00. Suponha que nenhum carro estacione por mais
   de 24 horas de cada vez. Escreva um programa que calcule e
   imprima as tarifas de estacionamento para cada um dos tr�s
   clientes que utilizaram esse estacionamento ontem. Voc� dever�
   informar as horas de perman�ncia de cada cliente. Seu programa
   dever� imprimir os resultados em um formato tabular e dever�
   calcular e imprimir o total recebido ontem. O programa dever�
   usar a fun��o calcularTaxas para determinar o valor devido por
   cliente. Sua sa�da dever� aparecer no seguinte formato:
   Deitel, Paul; Deitel, Harvey. C  Como Programar (P�gina 153).  . Edi��o do Kindle.
   Pedro Filho, 06/11/2020*/

// incluir bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// prot�tipo
float calcular_taxa( float h );

// fun��o principal
int main()
{
   setlocale(LC_ALL, "Portuguese" );

   // var
   int carro1 = 0;
   int carro2 = 0;
   int carro3 = 0;

   float horas1 = 0;
   float horas2 = 0;
   float horas3 = 0;

   float somaH = 0;
   float somaT = 0;

   // entrada de dados
   printf( "Informe o carro e o tempo:" );
   scanf( "%d%f", &carro1, &horas1 );

   printf( "Informe o carro e o tempo: " );
   scanf( "%d%f", &carro2, &horas2 );

   printf( "Informe o carro e o tempo: " );
   scanf( "%d%f", &carro3, &horas3 );

   // mostra resultado
   printf( "\n%s%10s%10s\n", "Carro", "Horas", "Taxa" );
   printf( "%d%13.2f%11.2f\n", carro1, horas1, calcular_taxa( horas1 ) );
   printf( "%d%13.2f%11.2f\n", carro2, horas2, calcular_taxa( horas2 ) );
   printf( "%d%13.2f%11.2f\n", carro3, horas3, calcular_taxa( horas3 ) );

   somaH = horas1 + horas2 + horas3;
   somaT = calcular_taxa( horas1 ) + calcular_taxa( horas2 ) + calcular_taxa( horas3 );

   // mostra totais
   printf( "TOTAL: %7.2f%11.2f\n", somaH, somaT );
    printf( "\n" ); // pula linha

   system( "pause" ); // pausa o sistema

   return 0; // fim do programa

} // fim main

// fun��o para calcular a taxa de um estacionamento
float calcular_taxa( float h )
{
      // var
   float tar_minima = 2.00;
   float parte_hora = 0.50;
   float tar_maxima = 10.00;
   float taxa = 0;

   // condi��es
   if( h >= 1 && h <= 3 )
      taxa = tar_minima;
   else if( h > 3 && h <= 4 )
      taxa = tar_minima + parte_hora;
   else if( h > 4 && h <= 5 )
      taxa = tar_minima + ( 2 * parte_hora );
   else if( h > 5 && h <= 6 )
      taxa = tar_minima + ( 3 * parte_hora );
   else if( h > 6 && h <= 23.59 )
      taxa = tar_minima + ( (h - 3) * parte_hora );
   else
      taxa = tar_maxima;

   return taxa;
}
