/*
   Questão: 2.31 Tabela de quadrados e cubos. Usando apenas as técnicas que
   você aprendeu neste capítulo, escreva um programa  que calcule os quadrados
   e os cubos dos números 0 a 10, e  use tabulações para imprimir a seguinte
   tabela de valores:
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 42). Edição do Kindle.
   Autor: Pedro Filho, 13/01/2021
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

       // Mostra na tela
    printf("Numeros     Quadrado    Cubos\n");
    printf("0            0           0\n");
    printf("1            1           1\n");
    printf("2            4           8\n");
    printf("3            9           27\n");
    printf("4            16          64\n");
    printf("5            25          125\n");
    printf("6            36          216\n");
    printf("7            49          343\n");
    printf("8            64          512\n");
    printf("9            81          729\n");
    printf("10           100         1000\n");

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN
