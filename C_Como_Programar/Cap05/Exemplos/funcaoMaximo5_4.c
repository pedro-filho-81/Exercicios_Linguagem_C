/*
   Quest�o: /* Fig. 5.4: fig05_04.c  2 Achando o m�ximo de tr�s inteiros
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 120). Edi��o do Kindle.
   Autor: @Pedro Filho, 03/02/2021
*/

// Incluir Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// prot�tipo
int maximo( int x, int y, int z );

// FUN��O PRINCIPAL
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // vari�veis
   int num1, num2, num3;

   // entrada de dados
   printf( "Digite tr�s inteiros: " );
   scanf( "%d%d%d", &num1, &num2, &num3 );

   // chama a fun��o maximo e mostra o resultado
   printf( "O maior valor � %d\n", maximo( num1, num2, num3) );

   // pular linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN

// cria a fun��o maximo
int maximo( int x, int y, int z )
{
   // vari�vel maior recebe o par�metro x
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

} // fim fun��o maximo
