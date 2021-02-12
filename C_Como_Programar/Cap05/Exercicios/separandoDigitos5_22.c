/*
   Questão: 5.22 Separando dígitos. Escreva segmentos de programa  que realizem,
   cada um, o seguinte:  a) O cálculo da parte inteira do quociente quando
   o inteiro a é dividido pelo inteiro b.  b) O cálculo do módulo inteiro quando
   o inteiro a é  dividido pelo inteiro b.  c) Use as partes do programa
   desenvolvidas em a) e b)  para escrever uma função que peça um inteiro entre
   1 e 32767 e o imprima como uma série de dígitos,  com dois espaços entre
   cada dígito. Por exemplo, o  inteiro 4562 deverá ser impresso como:
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 154). Edição do Kindle.
   Autor: @Pedro Filho, 12/02/2021
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

   // variável
   long numero = 0;
   long a,  e, i, o, u;

   // entrada de dados
   printf( "Digite um número entre 1 e 99999: " );
   scanf( "%d", &numero );

   // calcular
   a = numero / 10000 % 10000;
   e = numero % 10000 / 1000;
   i = numero % 1000 / 100;
   o = numero % 100 / 10;
   u = numero % 10 / 1;

   // imprime
   printf( "Números separados = %3d%3d%3d%3d%3d\n\n", a, e, i, o, u );

   // pular linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN
