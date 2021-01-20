/*
   Questão: 3.42 Diâmetro, circunferência e área de um círculo. Escreva um
   programa que leia o raio de um círculo  (como um valor float) e calcule
   e imprima o diâmetro,  a circunferência e a área. Use o valor 3.14159 para p.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 77). Edição do Kindle.
   Autor: @Pedro Filho, 18/01/2021
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

   // cria variáveis e constante
   const float PI = 3.14159;
   float comprimento = 0;
   float area = 0;
   int raio = 0;
   int diametro = 0;

   // entrada de dados
   printf( "Digite o raio em cm da circunfrência [-1 para sair]: " );
   scanf( "%d", &raio );

   // loop com sentinela
   // enquanto raio diferente de -1 faça
   while( raio != -1 ) {

      // calcular
      diametro = 2 * raio;
      comprimento = 2 * PI * raio;
      area = PI * ( raio * raio );

      // cabeçalho
      printf( "\tCIRCUNFERÊNCIA\n" );

      // imprime resultado
      printf( "Raio = %dcm\n", raio );
      printf( "Diâmetro = %dcm\n", diametro );
      printf( "Comprimento = %.2fcm\n", comprimento );
      printf( "Área = %.2fcm²\n", area );

      // entrada de dados
      printf( "\nDigite o raio da circunfrência [-1 para sair]: " );
      scanf( "%d", &raio );
   } // fim while

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN
