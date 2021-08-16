/*
    Figura 2.5: fig02_05.c
    Programa de adição
    Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 24). Edição do Kindle.
    Autor:
*/
#include <stdio.h>

int main()
{
    // variáveis
    int numero1; // primeiro valor a ser informado pelo usuário
    int numero2; // segundo valor a ser informado pelo usuário
    int soma; // soma os dois números informado pelo usuário

    printf( "Digite o primeiro numero: " ); // prompr
    scanf( "%d", &numero1 ); // lê um número

    printf( "Digite o segundo numero: " ); // prompt
    scanf( "%d", &numero2 ); // lê um número

    soma = numero1 + numero2; // atribui o total a soma

    printf( "A soma e5 %d\n", soma ); // imprime soma

    return 0; // fim do programa
} // fim main
