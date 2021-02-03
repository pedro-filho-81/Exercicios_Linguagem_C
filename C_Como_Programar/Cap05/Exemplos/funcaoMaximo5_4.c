/*
   Questão: /* Fig. 5.4: fig05_04.c  2 Achando o máximo de três inteiros
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 120). Edição do Kindle.
   Autor: @Pedro Filho, 03/02/2021
*/

// Incluir Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// protótipo
int maximo( int x, int y, int z );

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // variáveis
   int num1, num2, num3;

   // entrada de dados
   printf( "Digite três inteiros: " );
   scanf( "%d%d%d", &num1, &num2, &num3 );

   // chama a função maximo e mostra o resultado
   printf( "O maior valor é %d\n", maximo( num1, num2, num3) );

   // pular linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN

// cria a função maximo
int maximo( int x, int y, int z )
{
   // variável maior recebe o parâmetro x
   int maior = x;

   // se y maior que maior
   if( y > maior )
      // maior recebe x
      maior = y;

   // se z maior que o maior
   if( z > maior )
      // maior recebe y
      maior = z;

   // retornar maior
   return maior;

} // fim função maximo
