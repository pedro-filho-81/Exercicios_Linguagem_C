/*
    Função: 5.23 Tempo em segundos. Escreva uma função que considere a hora
    como três argumentos inteiros (horas, minutos e segundos) e retorne
    o número de segundos desde  a última vez em que o relógio ‘bateu 12 horas’.
    Use essa  função para calcular a quantidade de tempo em segundos entre
    duas horas, ambas dentro de um ciclo de 12  horas do relógio.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 154). Edição do Kindle.
    Autor: Pedro Filho, /11/2020.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// protótipo
int tempo_em_segundos( int h, int m, int s );

int main()
{
   // seleciona o idioma português
   setlocale( LC_ALL, "Portuguese" );

   // variáveis para
   int h = 0; // horas
   int m = 0; // minutos
   int s = 0; // segundos
   int resp = 1; // resposta

   // faça enquanto resp igual a sim
   while( resp == 1 )
   {
      system( "cls" ); // limpar a tela

      // entrada de dados
      printf( "Informe às horas: " );
      scanf( "%d", &h );

      if( h == 24 || h > 24 )
      {
         printf( "\nNeste cálculo não existe horas maior ou igual a 24h.\n" );
         printf( "Será considerado apenas os minutos e segundos.\n" );

      } // fim if

      // entre com os minutos
      printf( "Os minutos: " );
      scanf( "%d", &m );

      // entre com os segundos
      printf( "Os segundos: " );
      scanf( "%d", &s );

      // mostrar a mensagem e chamar a função tempo em segundos
      printf( "\nDe 12:00:00 até às %d:%d:%d há uma diferença de %d segundos.\n",
              h, m, s, tempo_em_segundos( h, m, s ) );
      printf( "Desde a última vez que o relógio bateu 12 horas.\n" );

      // perguntar ao usuário
      printf( "Deseja continuar [ 1-Sim/0-Não ]? " );
      scanf( "%d", &resp );

   } // fim while

    // pula linha
    printf( "\n" );

    // pausa o sistema
    system( "pause" );

    return 0; // fim do programa

} // fim da função main

// function
int tempo_em_segundos( int h, int m, int s )
{
   int hr = 0; // horas
   int mt = 0; // minutos
   int sg = 0;// segundos

   // verificar se às horas são maiores que 12h
   if( h > 12 && h < 24 ) // se verdade
   {  // calcular horas
      hr = ( h - 12 ) * 3600;
      // minutos
      mt = m * 60;
   } // fim if
   // verificar se às horas são iguais a ( 12,24, ou 00 )
   else if( h == 12 || h == 24 || h == 00 )// se verdade
   {  // calcular
      mt = m * 60;
   } // fim else if
   // verificar se às horas são menor que 12
   else if( h < 12 ) // se verdade
   {  // calcular
      hr = h * 3600;
   } // verificar se horas é maior oou igual a 24
   else if( h >= 24 )// se verdade
   {  //calcular
      hr = 0;
      mt = m * 60;
   }  // fim else if x
   // retornar valor da soma em segundos
   return hr + mt + s;
} // fim da função s
