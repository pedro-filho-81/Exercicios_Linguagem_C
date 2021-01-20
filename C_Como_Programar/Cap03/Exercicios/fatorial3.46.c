/*
   Questão: 3.46 Fatorial. O fatorial de um inteiro não negativo n é escrito
   como n! (pronuncia-se ‘n fatorial’) e é definido da  seguinte forma:
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 78). Edição do Kindle.
   Autor: @Pedro Filho, 20/01/2021
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
   int contador = 1;
   int fatorial = 1;
   int num = 0;
   int resposta = 0;

   // cabeçalho
   printf( "\tFATORIAL\n" );

   // enquanto resposta diferente de -1 faça
   while( resposta != -1 ) {

      // entrada de dados
      printf( "Digite um número para ver seu fatorial: " );
      scanf( "%d", &num );

      // imprima
      printf( "O fatorial de %d! é ", num );

      // enquanto contador menor que num faça
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
      printf( "Quer continuar [-1 sair / 1 não]? " );
      scanf( "%d", &resposta );

   } // fim while externo

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN
