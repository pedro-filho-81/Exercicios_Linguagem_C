/*
   Questão: 5.23 Tempo em segundos. Escreva uma função que considere a hora
   como três argumentos inteiros (horas, minutos e segundos) e retorne
   o número de segundos desde  a última vez em que o relógio ‘bateu 12 horas’.
   Use essa  função para calcular a quantidade de tempo em segundos entre duas
   horas, ambas dentro de um ciclo de 12  horas do relógio.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 154). Edição do Kindle.
   Autor: @Pedro Filho, 12/02/2021
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
   int horas = 0;
   int segHoras = 1;
   int minutos = 0;
   int segMinutos = 1;
   int segundos = 0;
   int soma = 0;

   // entrada de dados
   printf( "Digite às Horas: " );
   scanf( "%d", &horas );

   printf( "Digite os Minutos: " );
   scanf( "%d", &minutos );

   printf( "digite os segundos: " );
   scanf( "%d", &segundos );

   // se horas maior ou igual a zero e menor que 12
   if( horas >= 00 && horas < 12 ) {

      // calcular
      segHoras = horas * 3600;
      segMinutos = minutos * 60;
      soma = segHoras + segMinutos + segundos;

      // imprima
      printf( "Das 00:00:00 horas de ontem até às %d:%d:%d de hoje"
             "\nse passaram %d segundos.\n",
             horas, minutos, segundos, soma );
   } // fim if

   // se horas maior que 12 e menor que 24
   if( horas > 12 && horas < 24 ) {

      // calcular
      segHoras = ( horas - 12 ) * 3600;
      segMinutos = minutos * 60;
      soma = segHoras + segMinutos + segundos;

      printf( "Das 12:00:00 horas até às %d:%d:%d"
             "\nse passaram %d segundos.\n",
             horas, minutos, segundos, soma );
   } // fim if

   // se horas igual a 12
   if( horas == 12 ) {

      // calcular
      segMinutos = minutos * 60;
      soma = segMinutos + segundos;

      // imprima
      printf( "Das 12:00:00 horas até às %d:%d:%d"
             "\nse passaram %d segundos.\n",
             horas, minutos, segundos, soma );
   }

   // se horas igual a 12
   if( horas == 24 ) {

      // calcular
      segMinutos = minutos * 60;
      soma = segMinutos + segundos;

      // imprima
      printf( "Das 24:00:00 horas até às %d:%d:%d"
             "\nse passaram %d segundos.\n",
             horas, minutos, segundos, soma );
   }
   // pular linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN
