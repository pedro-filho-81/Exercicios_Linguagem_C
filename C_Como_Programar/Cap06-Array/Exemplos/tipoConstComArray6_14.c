/*
    1 /* Figura 6.14: fig06_14.c
    2 Demonstrando o qualificador de tipo const com arrays
    Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 178). Edi��o do Kindle.
    16/10/2021
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// prot�tipo
void tryToModifyArray( const int b[] );

int main()
{
    setlocale( LC_ALL, "portuguese" ); // localizador geogr�fico

    system("cls"); // limpa a tela

    // array
    int a[] = { 10, 20, 30 };

    tryToModifyArray( a ); // chama a fun��o tryToModifyArray e atribui a como argumento

    // imprima
    printf("%d %d %d\n", a[0], a[1], a[2] );

    system("pause" ); // pausa o programa

    return 0; // fim do programa

} // fim main

// cria a fun��o tryToModifyArray
void tryToModifyArray( const int b[] )
{
    // parametros constante n�o aceita modifica��o
    b[ 0 ] /= 2; // erro
    b[ 1 ] /= 2;// erro
    b[ 2 ] /= 2; // erro
} // fim fun��o tryToModifyArray
