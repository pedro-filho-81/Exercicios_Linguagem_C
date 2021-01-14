/*
   Questão:  /* Figura 3.6: fig03_06.c  2 Programa de média da turma com
   repetição controlada por contador
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 54). Edição do Kindle.
   Pedro Filho, 14/01/2021
*/

// biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // variáveis
   int contador = 1; // para o while
   int nota; // recebe as notas
   int total = 0; // soma as notas
   int media = 0; // calcula a amédia

   // enquanto contador menor igual a 10 faça
   while( contador <= 10 ) // loop
   {
      // entrada de dados
      printf( "Digite a nota: " ); // prompt
      scanf( "%d", &nota ); // lê nota do usuário

      // calcular
      total += nota; // soma as notas

      contador += 1; // contador soma mais 1

   } // fim while

   media = total / 10; // calcula a média das notas

   // imprime a media
   printf( "A soma das notas é %d e a média é %d\n", total, media );

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN
