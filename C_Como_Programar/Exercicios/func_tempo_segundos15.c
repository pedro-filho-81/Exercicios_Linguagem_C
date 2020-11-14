/*
    Fun��o: 5.23 Tempo em segundos. Escreva uma fun��o que considere a hora
    como tr�s argumentos inteiros (horas, minutos e segundos) e retorne
    o n�mero de segundos desde  a �ltima vez em que o rel�gio �bateu 12 horas�.
    Use essa  fun��o para calcular a quantidade de tempo em segundos entre
    duas horas, ambas dentro de um ciclo de 12  horas do rel�gio.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 154). Edi��o do Kindle.
    Autor: Pedro Filho, /11/2020.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// prot�tipo
int tempo_em_segundos( int h, int m, int s );

int main()
{
   // seleciona o idioma portugu�s
   setlocale( LC_ALL, "Portuguese" );

   // vari�veis para
   int h = 0; // horas
   int m = 0; // minutos
   int s = 0; // segundos
   int resp = 1; // resposta

   // fa�a enquanto resp igual a sim
   while( resp == 1 )
   {
      system( "cls" ); // limpar a tela

      // entrada de dados
      printf( "Informe �s horas: " );
      scanf( "%d", &h );

      if( h == 24 || h > 24 )
      {
         printf( "\nNeste c�lculo n�o existe horas maior ou igual a 24h.\n" );
         printf( "Ser� considerado apenas os minutos e segundos.\n" );

      } // fim if

      // entre com os minutos
      printf( "Os minutos: " );
      scanf( "%d", &m );

      // entre com os segundos
      printf( "Os segundos: " );
      scanf( "%d", &s );

      // mostrar a mensagem e chamar a fun��o tempo em segundos
      printf( "\nDe 12:00:00 at� �s %d:%d:%d h� uma diferen�a de %d segundos.\n",
              h, m, s, tempo_em_segundos( h, m, s ) );
      printf( "Desde a �ltima vez que o rel�gio bateu 12 horas.\n" );

      // perguntar ao usu�rio
      printf( "Deseja continuar [ 1-Sim/0-N�o ]? " );
      scanf( "%d", &resp );

   } // fim while

    // pula linha
    printf( "\n" );

    // pausa o sistema
    system( "pause" );

    return 0; // fim do programa

} // fim da fun��o main

// function
int tempo_em_segundos( int h, int m, int s )
{
   int hr = 0; // horas
   int mt = 0; // minutos
   int sg = 0;// segundos

   // verificar se �s horas s�o maiores que 12h
   if( h > 12 && h < 24 ) // se verdade
   {  // calcular horas
      hr = ( h - 12 ) * 3600;
      // minutos
      mt = m * 60;
   } // fim if
   // verificar se �s horas s�o iguais a ( 12,24, ou 00 )
   else if( h == 12 || h == 24 || h == 00 )// se verdade
   {  // calcular
      mt = m * 60;
   } // fim else if
   // verificar se �s horas s�o menor que 12
   else if( h < 12 ) // se verdade
   {  // calcular
      hr = h * 3600;
   } // verificar se horas � maior oou igual a 24
   else if( h >= 24 )// se verdade
   {  //calcular
      hr = 0;
      mt = m * 60;
   }  // fim else if x
   // retornar valor da soma em segundos
   return hr + mt + s;
} // fim da fun��o s
