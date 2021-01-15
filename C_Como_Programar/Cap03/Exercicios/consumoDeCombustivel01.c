/*
   Quest�o: 3.17 Consumo de gasolina. Os motoristas se preocupam  com o consumo
   de combust�vel de seus autom�veis.  Um motorista manteve um registro
   do n�mero de abastecimentos que fez, registrando tamb�m o n�mero de
   quil�metros rodados e de litros obtidos a cada abastecimento.
   Desenvolva um programa que pe�a o n�mero de  quil�metros dirigidos e
   a quantidade de litros obtidos a  cada abastecimento. O programa dever�
   calcular e exibir  a quantidade de quil�metros rodados por litros usados.
   Depois de processar toda a informa��o, o programa dever� calcular
   e exibir o total combinado de quil�metros  por litro para todos
   os abastecimentos. Veja um exemplo  do di�logo de entrada/sa�da:
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 74). Edi��o do Kindle.
   Autor: Pedro Filho, 14/01/2021
*/

// Incluir Biblioteca
#include <locale.h>

// FUN��O PRINCIPAL
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // vari�veis
   int contador = 0;
   int kmDirigidos = 0; // quil�metros dirigidos
   int totalKmRodados = 0;
   float litrosAbastecidos = 0; // para os litros abastecidos
   float somaAbastecimentos = 0;
   float consumoAtual = 0; // calcular o consumo atual
   float consumoTotal = 0;

   // cabe�alho
   printf( "\tCONSUMO DE COMBUST�VEL\n" );

   // entrada de dados
   printf( "Quantos litros abasteceu [ -1 para sair ]: " ); // prompt
   scanf( "%f", &litrosAbastecidos );

   // enquanto litros abastecidos diferente de -1 fa�a
   while( litrosAbastecidos != -1 )
   {
      // contar os abastecimentos
      contador++; // soma 1 ao contador

      // soma dos abastecimentos
      somaAbastecimentos += litrosAbastecidos;

      // entrada dos kms dirigidos
      printf( "Informe quantos quil�metros dirigiu: " ); // prompt
      scanf( "%d", &kmDirigidos ); // entrada do usu�rio

      // somar os quilometros dirigidos
      totalKmRodados += kmDirigidos;

      // calcular o consumo atual
      consumoAtual = kmDirigidos / litrosAbastecidos;

      // somar o consumo atual
      consumoTotal = totalKmRodados / somaAbastecimentos;

      // imprimir resultado
      printf( "O consumo atual de combust�vel � de %f Km / l\n\n", consumoAtual );

      // informe o abastecimento
      printf( "Quantos litros abasteceu [ -1 para sair ]: " ); // prompt
      scanf( "%f", &litrosAbastecidos );

      // imprimir resultado
   } // fim while

   // se contador maior que zero
   if( contador > 0 ) {

      // imprimir resumo da viagem
      printf( "\n\tRESUMO DA VIAGEM\n" );
      printf( "Voc� abasteceu %d vezes.\n", contador );
      printf( "Total abastecido %.2f litros.\n", somaAbastecimentos );
      printf( "Percorreu %d Km.\n", totalKmRodados );
      printf( "Consumo total %f Km/l\n\n", consumoTotal );
   } // fim if

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN
