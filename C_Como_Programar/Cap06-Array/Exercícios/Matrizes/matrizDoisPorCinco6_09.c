/*
    6.9 Considere um array de inteiros t de 2 por 5.
    a) Escreva uma definição para t.
    b) Quantas linhas t possui?
    c) Quantas colunas t possui?
    d) Quantos elementos t possui?
    e) Escreva os nomes de todos os elementos na segunda linha de t.
    f) Escreva os nomes de todos os elementos na terceira  coluna de t.
    g) Escreva uma única instrução que defina o elemento  de t na linha 1, coluna 2, como zero.
    h) Escreva uma série de instruções que inicializem  cada elemento de t em zero.
        Não use uma estrutura de repetição.
    i) Escreva uma estrutura for aninhada que inicialize  cada elemento de t em zero.
    j) Escreva uma instrução que insira os valores dos elementos de t a partir do terminal.
    k) Escreva uma série de instruções que determinem e  imprimam o menor valor no array t.
    l) Escreva uma instrução que apresente os elementos  da primeira linha de t.
    m) Escreva uma instrução que some os elementos da  quarta coluna de t.
    n) Escreva uma série de instruções que imprimam o  array t em formato tabular.
        Liste os subscritos de  coluna como cabeçalhos no topo e liste os subscritos
        de linha à esquerda de cada linha.
    Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 200). Edição do Kindle.
    Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 199). Edição do Kindle.
    20/10/2021
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // header
    printf( "\tMATRIZ BIDIMENCIONAL\n" );

    printf( "6.9 Considere um array de inteiros t de 2 por 5.\n" );

    printf( "a) Escreva uma definição para t.\n"
                "\tint t[ 2 ][ 5 ];\n" );

    printf( "b) Quantas linhas t possui?\n"
                "\ttem duas linhas.\n" );

    printf( "c) Quantas colunas t possui?\n"
                "\tt tem cinco colunas.\n" );

    printf( "d) Quantos elementos t possui?\n"
                "\t10 elementos.\n" );

    printf( "e) Escreva os nomes de todos os elementos na segunda linha de t.\n"
                "\tt[ 1 ][ 0 ] = 1; t[ 1 ][ 1 ] = 2; t[ 1 ][ 2 ] = 3; t[ 1 ][ 3 ] = 4; t[ 1 ][ 4 ] = 5;\n" );

    printf( "f) Escreva os nomes de todos os elementos na terceira  coluna de t.\n"
                "\tt[ 0 ][ 2 ] = 1; t[ 1 ][ 2 ] = 2;\n" );

    printf( "g) Escreva uma única instrução que defina o elemento  de t na linha 1, coluna 2, como zero.\n"
                "\tt[ 1 ][ 1 ] = 0;\n" );

    printf( "h) Escreva uma série de instruções que inicializem  cada elemento de t em zero.\n"
                "\tNão use uma estrutura de repetição.\n"
                "\tt[ 0 ][ 0 ] = 0; t[ 0 ][ 1 ] = 0; t[ 0 ][ 2 ] = 0; t[ 0 ][ 3 ] = 0; t[ 0 ][ 4 ] = 0;\n"
                "\tt[ 1 ][ 0 ] = 0; t[ 1 ][ 1 ] = 0; t[ 1 ][ 2 ] = 0; t[ 1 ][ 3 ] = 0; t[ 1 ][ 4 ] = 0;\n" );
/*
    i) Escreva uma estrutura for aninhada que inicialize  cada elemento de t em zero.
    j) Escreva uma instrução que insira os valores dos elementos de t a partir do terminal.
    k) Escreva uma série de instruções que determinem e  imprimam o menor valor no array t.
    l) Escreva uma instrução que apresente os elementos  da primeira linha de t.
    m) Escreva uma instrução que some os elementos da  quarta coluna de t.
    n) Escreva uma série de instruções que imprimam o  array t em formato tabular.
        Liste os subscritos de  coluna como cabeçalhos no topo e liste os subscritos
        de linha à esquerda de cada linha.
*/
    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
