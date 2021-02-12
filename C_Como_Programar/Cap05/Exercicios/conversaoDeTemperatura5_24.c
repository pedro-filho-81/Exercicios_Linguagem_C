/*
   Questão: 5.24 Conversões de temperatura. Implemente as seguintes funções
   com inteiros:  a) Função celsius retorna o equivalente Celsius de  uma
   temperatura em Fahrenheit.  b) Função fahrenheit retorna o equivalente
   Fahrenheit de uma temperatura em Celsius.  c) Use essas funções para escrever
   um programa  que imprima gráficos mostrando os equivalentes  em Fahrenheit
   de todas as temperaturas Celsius  de 0 a 100 graus, e os equivalentes em
   Celsius  de todas as temperaturas fahrenheit de 32 a 212  graus.
   Imprima as saídas em um formato tabular  que reduza o número de linhas de
   saída enquanto continua sendo legível.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 154). Edição do Kindle.
   Autor: @Pedro Filho, 12/02/2021
*/

// Incluir Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// protótipos
float celcius( float fahrenheit );
float fahrenheit( float celcius );

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // variáveis
   float cel = 0;
   float fah = 0;

   printf( "CONVERSÃO DE TEMPERATURAS\n" );

   // entrada de dados
   printf( "Digite a temperatura em celcius: " );
   scanf( "%f", &cel );

   // entrada de dados
   printf( "Digite a temperatura em fahresheit: " );
   scanf( "%f", &fah );

   // chama a função fahrenheit
   printf( "\nA temperatura de %.1fºC equivale a %.1fºF\n",
          cel, fahrenheit( cel ) );

   // chama a função fahrenheit
   printf( "\nA temperatura de %.1fºF equivale a %.1fºC\n",
          fah, celcius( fah ) );

   printf( "\n%s%12s\n", "Celcius", "Fahrenheit" );

   // loop para tabela celcius para fahrenheit
   for( int i = 0; i <= 100; i += 10 ) {
      printf( "%4dºC%10.0fºF\n", i, fahrenheit( i ) );
   }
   // puar linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN

// função fahrenheit
float fahrenheit( float celcius )
{
   // retorna o valor emfahrenheit
   return celcius * 1.8 + 32;
} // fim função

// função celcius
float celcius( float fahrenheit )
{
   // retorna o valor em celcius                                                                                    ,
   return ( fahrenheit - 32 ) / 1.8;
}
