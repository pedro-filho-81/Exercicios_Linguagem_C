/*
   Questão: /* Fig. 4.7: fig04_07.c  2 Contando notas de letra
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 88). Edição do Kindle.
   @Pedro Filho, 21/01/2021
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

   //variáveis
   int nota; // para as notas
   int contar = 0;
   int somar = 0;
   int media = 0;

   //imprima
   printf( "Digite as notas entre 1 e 10 [ -1 para sair ]:" );
   scanf( "%d", &nota );

   // loop enquanto as notas estiverem entre 1 e 10
   while( nota >= 1 && nota <= 10 ) {

      // somar as notas
      somar += nota;

      // incrementar contar
      contar += 1;

      //imprima
      printf( "Digite as notas entre 1 e 10 [ -1 para sair ]:" );
      scanf( "%d", &nota );

   } // fim while

   // calcular a média
   media = somar / contar;

   // mostrar resultado
   printf( "Foram cadastradas %d notas,\nsoma das notas = %d \nmédia da turma %d\n",
          contar, somar, media );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN
