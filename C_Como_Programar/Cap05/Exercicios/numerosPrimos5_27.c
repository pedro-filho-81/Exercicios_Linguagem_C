/*
    Quest�o: 5.27 N�meros primos. Um inteiro � considerado primo se  for divis�vel
    apenas por 1 e por ele mesmo. Por exemplo,  2, 3, 5 e 7 s�o primos, mas
    4, 6, 8 e 9 n�o s�o.  a) Escreva uma fun��o que determine se um n�mero  � primo.
    b) Use essa fun��o em um programa que determine e  imprima todos os n�meros
    primos entre 1 e 10000.  Quantos desses 10000 n�meros voc� realmente  precisa
    testar antes de ter certeza de que encontrou  todos os primos?
    Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 155). Edi��o do Kindle.
    Autor: Pedro Filho, 15/02/2021
*/

// biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// prot�tipo
int numerosPrimos( int numero );

// fun��o principal
int main()
 {
    // configura para portugu�s Brasil
    setlocale( LC_ALL, "Portuguese" );

    // loop para verifica quantos n�meros primos tem at� 10000
    for( int i = 1; i <= 10000; i++ ) {

        // chama a fun��o n�meros primos
        numerosPrimos( i );

    } // fim for

    // pular linha
    printf( "\n" );

    // pausar o sistema
    system( "pause" );

    // fim do programa
    return 0;

} // fim fun��o main

// fun��o n�meros primos
int numerosPrimos( int numero )
{
    // vari�vel
    int contador = 0;

    // loop para verificar se o n�mero � primo
    for( int j = 1; j <= numero; j++ ) {

        // se n�mero dividido por i for igual a zero
        if( numero % j == 0 )

            // contador soma 1
            contador++;

    } // fim for

    // se contador for maior que zero e menor do que 3
    if( contador > 0 && contador < 3 )
        // imprima o  n�mero
        printf( "%7d ", numero );



} // fim fun��o
