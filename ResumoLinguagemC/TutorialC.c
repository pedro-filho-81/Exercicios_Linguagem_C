/*
    Criar um tutorial ( resumo ) para estudos posteriores da linguagem C.
    Feito por: Pedro Filho, 21/11/2021
*/

// incluir biblioteca
#include <stdio.h>
#include <locale.h>

// função principal
int main()
{
    setlocale( LC_ALL, "portuguese"); // localização geográfica

    system("cls"); // limpa a tela

    printf( "Olá, Mundo C!\n"); // imprime na tela e pula uma linha

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
