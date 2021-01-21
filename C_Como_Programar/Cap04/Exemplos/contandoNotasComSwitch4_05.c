/*
   Quest�o: /* Fig. 4.7: fig04_07.c  2 Contando notas de letra
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 88). Edi��o do Kindle.
   @Pedro Filho, 21/01/2021
*/

// Incluir Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// FUN��O PRINCIPAL
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   //vari�veis
   int nota; // para as notas
   int aContar = 0; // n�mero de notas A
   int bContar = 0; // n�mero de notas B
   int cContar = 0; // n�mero de notas C
   int dContar = 0; // n�mero de notas D
   int eContar = 0; // n�mero de notas E
   int fContar = 0; // n�mero de notas F

   //imprima
   printf( "Digite as notas em letras:\n" );
   printf( "Digite o caractere EOF para encerrar o programa.\n" );

   // loop at� encerrar o programa
   while( ( nota = getchar() ) != EOF ) {

      // DETERMINA qual nota foi digitada
      switch( nota ) {
         case 'A': // caso a nota seja A
         case 'a': // caso a nota seja a
            ++aContar; // incrementa
            break; // necess�rio para sair do switch

         case 'B': // caso a nota seja B
         case 'b': // caso a nota seja b
            ++bContar; // incrementa
            break; // necess�rio para sair do switch

         case 'C': // caso a nota seja C
         case 'c': // caso a nota seja c
            ++cContar; // incrementa
            break; // necess�rio para sair do switch

         case 'D': // caso a nota seja D
         case 'd': // caso a nota seja d
            ++dContar; // incrementa
            break; // necess�rio para sair do switch

         case 'E': // caso a nota seja E
         case 'e': // caso a nota seja e
            ++eContar; // incrementa
            break; // necess�rio para sair do switch

         case 'F': // caso a nota seja F
         case 'f': // caso a nota seja f
            ++fContar; // incrementa
            break; // necess�rio para sair do switch

         case '\n': // pular uma linha
         case '\t': // tabula��o
         case ' ': // espa�o vazio
            break; // sair do switch

         default:
            printf( "Letra inv�lida!" );
            printf( "Digite nova nota.\n" );
            break; // sair do switch
      } // fim switch
   } // fim while

   // imprime resultados
   printf( "Totais para cada nota s�o:\n" );
   printf( "A: %d\n", aContar ); // mostra totais de notas A
   printf( "B: %d\n", bContar ); // mostra totais de notas B
   printf( "C: %d\n", cContar ); // mostra totais de notas C
   printf( "D: %d\n", dContar ); // mostra totais de notas D
   printf( "E: %d\n", eContar ); // mostra totais de notas E
   printf( "F: %d\n", fContar ); // mostra totais de notas F

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN
