/*
   Questão: /* Fig. 5.8: fig05_08.c  2 Lançando um dado de seis lados 6000 vezes
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 126). Edição do Kindle.
   @Pedro Filho, 04/02/2021
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
   int frequencia1 = 0; // contador de lançamento 1
   int frequencia2 = 0; // contador de lançamento 2
   int frequencia3 = 0; // contador de lançamento 3
   int frequencia4 = 0; // contador de lançamento 4
   int frequencia5 = 0; // contador de lançamento 5
   int frequencia6 = 0; // contador de lançamento 6

   int lancamento = 0; // contador
   int lado = 0; // lado do dado

   // loop para rolar o dado 6000 vezes
   for( lancamento = 1; lancamento <= 6000; lancamento++ ) {

      lado = 1 + rand() % 6; // números aleatórios entre 1 e 6

      // verificar
      switch( lado )
      {
         case 1:
            ++frequencia1; // soma 1 a frequência
            break; // sair

         case 2:
            ++frequencia2; // soma 1 a frequência
            break; // sair

         case 3:
            ++frequencia3; // soma 1 a frequência
            break; // sair

         case 4:
            ++frequencia4; // soma 1 a frequência
            break; // sair

         case 5:
            ++frequencia5; // soma 1 a frequência
            break; // sair

         case 6:
            ++frequencia6; // soma 1 a frequência
            break; // sair
      } // fim switch laançamento
   } // fim for

   // imprimir resultado
   printf( "%s%13s\n", "FACE", "FREQUÊNCIA" );
   printf( " 1%13d\n", frequencia1 );
   printf( " 2%13d\n", frequencia2 );
   printf( " 3%13d\n", frequencia3 );
   printf( " 4%13d\n", frequencia4 );
   printf( " 5%13d\n", frequencia5 );
   printf( " 6%13d\n", frequencia6 );

   // pular linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN
