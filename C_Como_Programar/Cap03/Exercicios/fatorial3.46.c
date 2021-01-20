/*
   Quest�o: 3.46 Fatorial. O fatorial de um inteiro n�o negativo n � escrito
   como n! (pronuncia-se �n fatorial�) e � definido da  seguinte forma:
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 78). Edi��o do Kindle.
   Autor: @Pedro Filho, 20/01/2021
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

   // vari�veis
   int contador = 1;
   int fatorial = 1;
   int num = 0;
   int resposta = 0;

   // cabe�alho
   printf( "\tFATORIAL\n" );

   // enquanto resposta diferente de -1 fa�a
   while( resposta != -1 ) {

      // entrada de dados
      printf( "Digite um n�mero para ver seu fatorial: " );
      scanf( "%d", &num );

      // imprima
      printf( "O fatorial de %d! � ", num );

      // enquanto contador menor que num fa�a
      while( contador <= num ) {

         //calcular o fatorial
         fatorial *= contador;

         // incrementa contador em 1
         contador++;

      }  // fim while interno

      // imprime o fatorial
      printf( "%d\n\n", fatorial );

      // reinicializando o fatorial
      fatorial = 1;
      contador = 1;

      // perguntar se que continuar
      printf( "Quer continuar [-1 sair / 1 n�o]? " );
      scanf( "%d", &resposta );

   } // fim while externo

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN
