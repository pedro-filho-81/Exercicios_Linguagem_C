/*
   Função: 5.24 Conversões de temperatura. Implemente as seguintes funções
   com inteiros:  a) Função celsius retorna o equivalente Celsius de  uma
   temperatura em Fahrenheit.  b) Função fahrenheit retorna o equivalente
   Fahrenheit de uma temperatura em Celsius.  c) Use essas funções para
   escrever um programa  que imprima gráficos mostrando os equivalentes
   em Fahrenheit de todas as temperaturas Celsius  de 0 a 100 graus, e
   os equivalentes em Celsius  de todas as temperaturas fahrenheit de 32 a 212
   graus. Imprima as saídas em um formato tabular  que reduza o número de
   linhas de saída enquanto continua sendo legível.  5.25 Achar o mínimo. Escreva
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 154). Edição do Kindle.
    Autor: Pedro Filho, /11/2020.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// protótipos
float celcius( float far );
float fahrenheit( float cel );

// função principal
int main()
{
    // seleciona o idioma português
    setlocale( LC_ALL, "Portuguese" );

    printf( "Fahrenheit -> Celcius\n" );
    for( int i = 32; i <= 212; i += 5 ) {
      printf( "%5dºF -> %7.2fºC ", i, celcius( i ) );
      printf( " -> %7.2dºF\n", i );
    }

    // pula linha
    printf( "\n" );

    // pausa o sistema
    system( "pause" );

    return 0; // fim do programa

} // fim da função main

// função celcius
float celcius( float far )
{
   return ( far - 32 ) / 1.8;
}

// função fahrenheit(
float fahrenheit( float cel )
{
   return ( cel * 1.8 ) + 32;
}
