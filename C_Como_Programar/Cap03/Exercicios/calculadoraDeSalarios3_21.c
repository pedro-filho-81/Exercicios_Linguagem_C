/*
   Quest�o: 3.21 Calculadora de sal�rio. Desenvolva um programa  que determine
   o sal�rio semanal bruto de v�rios funcion�rios. A empresa paga �uma hora
   normal� para cada  funcion�rio pelas primeiras 40 horas trabalhadas, �uma
   hora normal e meia� por hora trabalhada a partir de 40  horas. Voc� recebe
   uma lista de funcion�rios da empresa, o n�mero de horas que cada funcion�rio
   trabalhou  na semana anterior e o valor ganho por hora de cada  funcion�rio.
   Seu programa dever� ler essas informa��es  para cada funcion�rio e determinar
   e exibir o sal�rio que  cada um dever� receber. Aqui est� um exemplo do
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
   int horasTrabalhadas = 0; // para saber as horas trabalhadas
   float valorDaHoraTrabalhada = 0; // valor em Real da hora trabalhada
   float salario = 0; // calcular o sal�rio
   float horasExtras = 0; // calcular horas extras

   // cabe�alho
   printf( "CALCULADORA DE SAL�RIO\n" );

   // entrada de dados
   printf( "Digite o total das horas trabalhadas [-1 para sair]: " );
   scanf( "%d", &horasTrabalhadas );

   // enquanto horas trabalhadas diferente de -1 fa�a
   while( horasTrabalhadas != -1 )
   {
      // entrada de dados
      printf( "Informe o valor da hora trabalhada R$" );
      scanf( "%f", &valorDaHoraTrabalhada );

      // se horAS trabalhadas menor ou igual a 40 horas
      if( horasTrabalhadas <= 40 ) {

         // calcular o sal�rio
         salario = horasTrabalhadas * valorDaHoraTrabalhada;
      } // fim if

      // se n�o
      else {
         // calcular o sal�rio
         horasExtras = valorDaHoraTrabalhada * 0.5;
         salario =  horasTrabalhadas * valorDaHoraTrabalhada + horasExtras;
      } // fim else

      // imprimir resultado
      printf( "O valor do sal�rio � de R$%.2f\n\n", salario );

      // entrada de dados
      printf( "Digite o total das horas trabalhadas [-1 para sair]: " );
      scanf( "%d", &horasTrabalhadas );

   } // fim while


   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN
