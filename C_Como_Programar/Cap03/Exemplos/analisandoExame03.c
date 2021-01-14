/*
   Quest�o: /* Figura 3.10: fig03_10.c  2 An�lise de resultados de exame
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 63). Edi��o do Kindle.
   Pedro Filho, 14/01/2021
*/

// Incluir Biblioteca
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

// FUN��O PRINCIPAL
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // vari�veis
   int aprovado = 0; // para os aprovados
   int reprovado = 0; // para reprovados
   int aluno = 1; // contador dos alunos
   int resultado; // resultado da an�lise

   // loop while para 10 alunos
   while( aluno <= 10 )
   {
      // imprime
      printf( "Informe ( 1 - aprovados, 2 - reprovados ): " );
      scanf( "%d", &resultado );

      //se resultado igual a 1 incrementa aprovados
      if( resultado == 1 ) {
         aprovado += 1;
      } // fim if
      // se diferente incrementa reprovados
      else {
         reprovado += 1;
      } // fim else

      aluno += 1; // incrementa aluno
   } // fim while

   // imprime resultado
   printf( "Aprovador = %d\n", aprovado );
   printf( "Reprovados = %d\n", reprovado );

   // se aprovador maior que 8 imprima B�nus ao instrutor
   if( aprovado > 8 ) {
      printf( "B�nus ao instrutor!\n\n" );
   } // fim if

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN
