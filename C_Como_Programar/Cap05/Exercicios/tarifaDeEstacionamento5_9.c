/*
   Questão: 5.9 Tarifa de estacionamento. Um estacionamento cobra  uma tarifa
   mínima de R$ 2,00 por uma permanência de  até três horas, e R$ 0,50
   adicionais por hora para cada  hora, ou parte dela, por até três horas.
   A tarifa máxima  para qualquer período de 24 horas é de R$ 10,00. Suponha
   que nenhum carro estacione por mais de 24 horas de cada  vez.
   Escreva um programa que calcule e imprima as tarifas  de estacionamento para
   cada um dos três clientes que utilizaram esse estacionamento ontem.
   Você deverá informar  as horas de permanência de cada cliente.
   Seu programa  deverá imprimir os resultados em um formato tabular e  deverá
   calcular e imprimir o total recebido ontem. O programa deverá usar a função
   calcularTaxas para determinar o valor devido por cliente. Sua saída deverá
   aparecer  no seguinte formato:
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 153). Edição do Kindle.
   Autor: @Pedro Filho, 06/02/2021
*/

// Incluir Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// protótipo
float calcularTaxa( float horas );

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // variáveis
   int Carro1 = 0;
   int Carro2 = 0;
   int Carro3 = 0;

   float resp1, resp2, resp3;
   float tempoCarro1 = 0;
   float tempoCarro2 = 0;
   float tempoCarro3 = 0;
   float somaTempo = 0;
   float somarTaxa = 0;

   // cabeçalho
   printf( "TARIFA DE ESTACIONAMENTO\n" );

   // entrada de dados
   printf( "Informe o carro: " );
   scanf( "%d", &Carro1 );

   printf( "Informe às horas de permanência: " );
   scanf( "%f", &tempoCarro1 );

   // entrada de dados
   printf( "Informe o carro: " );
   scanf( "%d", &Carro2 );

   printf( "Informe às horas de permanência: " );
   scanf( "%f", &tempoCarro2 );

   // entrada de dados
   printf( "Informe o carro: " );
   scanf( "%d", &Carro3 );

   printf( "Informe às horas de permanência: " );
   scanf( "%f", &tempoCarro3 );

   // resp recebe calcularTaxa
   resp1 = calcularTaxa( tempoCarro1 );
   resp2 = calcularTaxa( tempoCarro2 );
   resp3 = calcularTaxa( tempoCarro3 );

   // somar os valores
   somarTaxa = resp1 + resp2 + resp3;

   // cabeçalho
   printf( "RESULTADO\n" );

   // cabeçalho
   printf( "%s%10s%12s\n", "Carro", "Horas", "Valor R$" );

   // mostrar resultado
   printf( "%2d%12.1f%10.2f\n",
          Carro1, tempoCarro1, resp1 );

   printf( "%2d%12.1f%10.2f\n",
          Carro2, tempoCarro2, resp2 );

   printf( "%2d%12.1f%10.2f\n",
          Carro3, tempoCarro3, resp3 );

   // calcular o tempo
   somaTempo = tempoCarro1 + tempoCarro2 + tempoCarro3;

   // mostrar a soma do tempo
   printf( "\n%2s%9.1f%10.2f\n", "TOTAL", somaTempo, somarTaxa );

   // pular linh
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN

// função calcularTaxa
float calcularTaxa( float horas )
{
   // constantes
   const float tarifaMinima = 2.00; // terifa mínima por até 3 horas no estacionamento
   const float tarifaAdicional = 0.50; // tarifa adicional por cada hora após 3 horas
   const float tarifa24Horas = 10.00; // tarifa por 24 horas
   float calculo = 0;

   // condições
   // se tempo menor ou igual a 3 horas
   if( horas > 0 && horas <= 3 ) {
      // calculo recebe
      calculo = tarifaMinima;
   } // fim if

   // se não
   else{
      // se horas maior que 3 e menor ou igual a seis
      if( horas > 3 && horas <= 6 ) {
         // calculo recebe
         calculo = ( ( horas - 3 ) * tarifaAdicional ) + tarifaMinima;
      } // fim if interno

      else if( horas == 24 ) {
         // calculo recebe
         calculo = tarifa24Horas;
      } // fim else if

   } // fim else

   return calculo;
} // fim função calcular taxa
