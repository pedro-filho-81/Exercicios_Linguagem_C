/* Fun��o: Para cada um dos conjuntos de inteiros a seguir, escreva uma �nica instru��o
   que imprima um n�mero aleatoriamente a partir do conjunto.
   a) 2, 4, 6, 8, 10.
   b) 3, 5, 7, 9, 11.
   c) 6, 10, 14, 18, 22.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (P�gina 153).  .
   Edi��o do Kindle.
   Pedro Filho, 06/11/2020*/

// incluir bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

// prot�tipos
void imprime_par( int n );
void imprime_impar( int n );
void multiplos_quatro( int n );

// fun��o principal
int main()
{
   setlocale(LC_ALL, "Portuguese" );

   int n = 0;

   srand( time(NULL ) );

      n = 2 + rand() % 10;
      printf( "\nPares: " );
      imprime_par( n );

      n = 3 + rand() % 11;
      printf( "\n�mpares: " );
      // chamar a fun��o imprime_par
      imprime_impar( n );

      n = 6 + rand() % 23;
      printf( "\nMultiplos: " );
      // chamar a fun��o imprime_par
      multiplos_quatro( n );

    printf( "\n" ); // pula linha

   system( "pause" ); // pausa o sistema

   return 0; // fim do programa

} // fim main

// fun��o imprime_par
void imprime_par( int n )
{
   if( n % 2 == 0 )
      printf( "%3d", n );
   else
      printf( "0" );
}

void imprime_impar( int n )
{
      if( n % 2 != 0 )
         printf( "%3d", n );
      else
         printf( "3" );
}

void multiplos_quatro( int n )
{
   if( n % 4 == 0 )
      printf( "%3d", n );
   else
      printf( "6" );
}
