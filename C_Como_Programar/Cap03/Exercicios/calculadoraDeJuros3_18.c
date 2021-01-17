/*
   Quest�o: 3.20 Calculadora de juros. Os juros simples sobre um  empr�stimo
   s�o calculados a partir da f�rmula  juros = principal * taxa * dias/ 365;
   Essa f�rmula considera que taxa seja a taxa de juros  anual e, portanto,
   inclui a divis�o por 365 (dias). Desenvolva um programa que aceite principal,
   taxa e dias  para v�rios empr�stimos, calcule e apresente os juros simples
   para cada empr�stimo, usando a f�rmula apresentada. Veja um exemplo do
   di�logo de entrada/sa�da:
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 75). Edi��o do Kindle.
   Autor: Pedro Filho, 16/01/2021
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
   float valorDoEmprestimo = 0; // para o valor principal
   float taxaDeJurosAnual = 0; // para a taxa
   float juros = 0; // para os juros
   float prazoParaPagar = 0; // prazo para o pagamento do empr�stimo

   // cabe�alho
   printf( "CALCULADORA DE JUROS SIMPLES\n" );

   // entrada de dados
   printf( "Informe o valor principal do empr�stimo [-1 para sair] R$" ); // prompt
   scanf( "%f", &valorDoEmprestimo );

   // enquanto valor do empr�stimo for diferente de zero fa�a
   while( valorDoEmprestimo != -1 )
   {
      // entrada de dados
      printf( "Informe o valor da taxa de juros anual: " );
      scanf( "%f", &taxaDeJurosAnual );

      printf( "Informe o prazo do empr�stimo em dias: " );
      scanf( "%f", &prazoParaPagar );

      // calcular os juros
      juros = valorDoEmprestimo * taxaDeJurosAnual * prazoParaPagar / 365;

      // imprimir resultado
      printf( "O valor dos juros � de R$%.2f\n\n", juros );

      // entrada de dados
      printf( "Informe o valor principal do empr�stimo [-1 para sair] R$" ); // prompt
      scanf( "%f", &valorDoEmprestimo );

   }  // fim while

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN
