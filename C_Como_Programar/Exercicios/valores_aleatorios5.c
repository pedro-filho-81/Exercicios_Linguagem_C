/* Função: Escreva instruções que atribuam inteiros aleatórios à variável
   n nos seguintes intervalos: a) 1 ≤ n ≤ 2 b) 1 ≤ n ≤ 100 c) 0 ≤ n ≤ 9
   d) 1000 ≤ n ≤ 1112 e) –1 ≤ n ≤ 1 f) –3 ≤ n ≤ 11
   Deitel, Paul; Deitel, Harvey. C  Como Programar (Página 153).  . Edição do Kindle.
   Pedro Filho, 06/11/2020*/

// incluir bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// protótipo
void num_aleatorio( int n );

// função principal
int main()
{
   setlocale(LC_ALL, "Portuguese" );

   // gerar número aleátorio
   srand( time( NULL) );

   // variável recebe números aleatórios
   int n = -3 + rand() % 11;

   // chamar a função número aleatórios
   num_aleatorio( n );

    printf( "\n" ); // pula linha

   system( "pause" ); // pausa o sistema

   return 0; // fim do programa

} // fim main

// função números aleatórios
void num_aleatorio( int n )
{
   if( n >= 1 && n <= 2 )
      printf( "n = %d\n", n );
   if( n >= 0 && n <= 9 )
      printf( "n = %d\n", n );
   if( n >= -1 && n <= 1 )
      printf( "n = %d\n", n );
   if( n >= -3 && n <= 11 )
      printf( "n = %d\n", n );
}
