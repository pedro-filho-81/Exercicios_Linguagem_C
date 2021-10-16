/*
    Figura 6.10: fig06_10.c
    2 Tratando arrays de caracteres como strings
    Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 172). Edi��o do Kindle.
    08/03/2021
*/

// bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// fun��o principal
int main()
{
    // configura para portugu�s Brasil
    setlocale( LC_ALL, "Portuguese" );

    // vari�veis
    char string1[ 20 ]; // reserva 20 caracteres
    char string2[ ] = "String literal"; // reserva 15 caracteres
    int i; // contador

    // entrada de dados
    printf( "Digite uma string: " );
    scanf( "%s", string1 ); // entrada terminada com um espa�o em branco

    // mostra strings
    printf( "String1 �: %s\nString2 �: %s\n"
           "string com espa�o entre caracteres �:\n"
           , string1, string2 );

    // loop para mostrar strings
    for( int i = 0; i < string1[ i ] != '\0'; i++ )
    {
        printf( "%c ", string1[ i ] );
    }

    // pula uma linha
    printf( "\n" );

    // pausa o sistema
    system( "pause" );

    // termina o programa
    return 0;

} // fim fun��o main
