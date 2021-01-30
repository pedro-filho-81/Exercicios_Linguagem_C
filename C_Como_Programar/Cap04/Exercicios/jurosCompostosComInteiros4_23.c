/*
   Questão: 4.23 Calculando juros compostos com inteiros. Modifique
   o programa da Figura 4.6 de modo que ele use  apenas inteiros para calcular
   os juros compostos. [Dica:  trate todos os valores monetários como números
   inteiros  de centavos. Depois ‘quebre’ o resultado em sua parte  de real
   e em sua parte de centavos usando as operações  de divisão e módulo,
   respectivamente. Insira uma vírgula.]
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 110). Edição do Kindle.
   Autor: @Pedro Filho, 28/01/2021
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

   // pular linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN
