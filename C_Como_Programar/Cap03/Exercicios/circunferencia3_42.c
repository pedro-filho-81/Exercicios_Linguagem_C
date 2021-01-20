/*
   Quest�o: 3.42 Di�metro, circunfer�ncia e �rea de um c�rculo. Escreva um
   programa que leia o raio de um c�rculo  (como um valor float) e calcule
   e imprima o di�metro,  a circunfer�ncia e a �rea. Use o valor 3.14159 para p.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 77). Edi��o do Kindle.
   Autor: @Pedro Filho, 18/01/2021
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

   // cria vari�veis e constante
   const float PI = 3.14159;
   float comprimento = 0;
   float area = 0;
   int raio = 0;
   int diametro = 0;

   // entrada de dados
   printf( "Digite o raio em cm da circunfr�ncia [-1 para sair]: " );
   scanf( "%d", &raio );

   // loop com sentinela
   // enquanto raio diferente de -1 fa�a
   while( raio != -1 ) {

      // calcular
      diametro = 2 * raio;
      comprimento = 2 * PI * raio;
      area = PI * ( raio * raio );

      // cabe�alho
      printf( "\tCIRCUNFER�NCIA\n" );

      // imprime resultado
      printf( "Raio = %dcm\n", raio );
      printf( "Di�metro = %dcm\n", diametro );
      printf( "Comprimento = %.2fcm\n", comprimento );
      printf( "�rea = %.2fcm�\n", area );

      // entrada de dados
      printf( "\nDigite o raio da circunfr�ncia [-1 para sair]: " );
      scanf( "%d", &raio );
   } // fim while

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN
