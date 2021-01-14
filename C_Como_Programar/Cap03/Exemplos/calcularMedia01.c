/*
   Quest�o:  /* Figura 3.6: fig03_06.c  2 Programa de m�dia da turma com
   repeti��o controlada por contador
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 54). Edi��o do Kindle.
   Pedro Filho, 14/01/2021
*/

// biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// FUN��O PRINCIPAL
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // vari�veis
   int contador = 1; // para o while
   int nota; // recebe as notas
   int total = 0; // soma as notas
   int media = 0; // calcula a am�dia

   // enquanto contador menor igual a 10 fa�a
   while( contador <= 10 ) // loop
   {
      // entrada de dados
      printf( "Digite a nota: " ); // prompt
      scanf( "%d", &nota ); // l� nota do usu�rio

      // calcular
      total += nota; // soma as notas

      contador += 1; // contador soma mais 1

   } // fim while

   media = total / 10; // calcula a m�dia das notas

   // imprime a media
   printf( "A soma das notas � %d e a m�dia � %d\n", total, media );

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN
