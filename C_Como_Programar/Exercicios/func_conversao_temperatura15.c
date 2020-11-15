/*
   Fun��o: 5.24 Convers�es de temperatura. Implemente as seguintes fun��es
   com inteiros:  a) Fun��o celsius retorna o equivalente Celsius de  uma
   temperatura em Fahrenheit.  b) Fun��o fahrenheit retorna o equivalente
   Fahrenheit de uma temperatura em Celsius.  c) Use essas fun��es para
   escrever um programa  que imprima gr�ficos mostrando os equivalentes
   em Fahrenheit de todas as temperaturas Celsius  de 0 a 100 graus, e
   os equivalentes em Celsius  de todas as temperaturas fahrenheit de 32 a 212
   graus. Imprima as sa�das em um formato tabular  que reduza o n�mero de
   linhas de sa�da enquanto continua sendo leg�vel.  5.25 Achar o m�nimo. Escreva
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 154). Edi��o do Kindle.
    Autor: Pedro Filho, /11/2020.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// prot�tipos
float celcius( float far );
float fahrenheit( float cel );

// fun��o principal
int main()
{
    // seleciona o idioma portugu�s
    setlocale( LC_ALL, "Portuguese" );

    printf( "Fahrenheit -> Celcius\n" );
    for( int i = 32; i <= 212; i += 5 ) {
      printf( "%5d�F -> %7.2f�C ", i, celcius( i ) );
      printf( " -> %7.2d�F\n", i );
    }

    // pula linha
    printf( "\n" );

    // pausa o sistema
    system( "pause" );

    return 0; // fim do programa

} // fim da fun��o main

// fun��o celcius
float celcius( float far )
{
   return ( far - 32 ) / 1.8;
}

// fun��o fahrenheit(
float fahrenheit( float cel )
{
   return ( cel * 1.8 ) + 32;
}
