/*
    6.9 Considere um array de inteiros t de 2 por 5.
    a) Escreva uma defini��o para t.
    b) Quantas linhas t possui?
    c) Quantas colunas t possui?
    d) Quantos elementos t possui?
    e) Escreva os nomes de todos os elementos na segunda linha de t.
    f) Escreva os nomes de todos os elementos na terceira  coluna de t.
    g) Escreva uma �nica instru��o que defina o elemento  de t na linha 1, coluna 2, como zero.
    h) Escreva uma s�rie de instru��es que inicializem  cada elemento de t em zero.
        N�o use uma estrutura de repeti��o.
    i) Escreva uma estrutura for aninhada que inicialize  cada elemento de t em zero.
    j) Escreva uma instru��o que insira os valores dos elementos de t a partir do terminal.
    k) Escreva uma s�rie de instru��es que determinem e  imprimam o menor valor no array t.
    l) Escreva uma instru��o que apresente os elementos  da primeira linha de t.
    m) Escreva uma instru��o que some os elementos da  quarta coluna de t.
    n) Escreva uma s�rie de instru��es que imprimam o  array t em formato tabular.
        Liste os subscritos de  coluna como cabe�alhos no topo e liste os subscritos
        de linha � esquerda de cada linha.
    Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 200). Edi��o do Kindle.
    Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 199). Edi��o do Kindle.
    20/10/2021
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // header
    printf( "\tMATRIZ BIDIMENCIONAL\n" );

    printf( "6.9 Considere um array de inteiros t de 2 por 5.\n" );

    printf( "a) Escreva uma defini��o para t.\n"
                "\tint t[ 2 ][ 5 ];\n" );

    // create array
    int t[ 2 ][ 5 ] = {0};

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

    printf( "g) Escreva uma �nica instru��o que defina o elemento  de t na linha 1, coluna 2, como zero.\n"
                "\tt[ 1 ][ 1 ] = 0;\n" );

    printf( "h) Escreva uma s�rie de instru��es que inicializem  cada elemento de t em zero.\n"
                "\tN�o use uma estrutura de repeti��o.\n"
                "\tt[ 0 ][ 0 ] = 0; t[ 0 ][ 1 ] = 0; t[ 0 ][ 2 ] = 0; t[ 0 ][ 3 ] = 0; t[ 0 ][ 4 ] = 0;\n"
                "\tt[ 1 ][ 0 ] = 0; t[ 1 ][ 1 ] = 0; t[ 1 ][ 2 ] = 0; t[ 1 ][ 3 ] = 0; t[ 1 ][ 4 ] = 0;\n" );

    printf( "i) Escreva uma estrutura for aninhada que inicialize  cada elemento de t em zero.\n" );

    for( int i = 0; i < 2; i++ ) // create the array line
    {
        for( int j = 0; j < 5; j++ ) // create the array columns
            printf( "%3d ", t[ i ][ j ] ); // show array elements
        printf( "\n" ); // next line
    } // end for

    printf( "j) Escreva uma instru��o que insira os valores dos elementos de t a partir do terminal.\n" );

    // loop to add vector elements
    for( int i = 0; i < 2; i++ ) // create the array line
        for( int j = 0; j < 5; j++ ) // create the array columns
            t[ i ][ j ] = 2 * j; // add array elements

    for( int i = 0; i < 2; i++ ) // create the array line
    {
        for( int j = 0; j < 5; j++ ) // create the array columns
            printf( "%3d ", t[ i ][ j ] ); // show array elements
        printf( "\n" ); // next line
    } // end for

    printf( "k) Escreva uma s�rie de instru��es que determinem e  imprimam o menor valor no array t.\n" );
    // semente
    srand(time( NULL ) );

    // variable
    int menorValor;

    // loop to add vector elements
    for( int i = 0; i < 2; i++ ) // create the array line
        for( int j = 0; j < 5; j++ ) // create the array columns
            t[ i ][ j ] = 1 + rand() % 50; // add array elements

    menorValor = t[0][0];
    for( int i = 0; i < 2; i++ ) // create the array line
    {
        for( int j = 0; j < 5; j++ ) // create the array columns
        {
            printf( "%3d ", t[ i ][ j ] ); // show array elements

            if( t[ i ][ j ] < menorValor )
                menorValor = t[ i ][ j ];
        } // end for columns
        printf( "\n" ); // next line
    } // end for
    printf( "O menor valor � %d\n", menorValor ); // next line

    printf("l) Escreva uma instru��o que apresente os elementos  da primeira linha de t.\n" );
    printf( "\tprimeira linha t = " );
    for( int i = 0; i < 5; i++ )
        printf( "%3d", t[ 0 ][ i ] );
    printf( "\n" );

    printf( "m) Escreva uma instru��o que some os elementos da  quarta coluna de t.\n" );
    printf( "\tquarta coluna de t =" );
    int soma;
    for( int i = 0; i < 2; i++ )
    {
        soma += t[ i ][ 3 ];
        printf( "%3d", t[ i ][ 3 ] );
    } // end for
    printf( "  Soma = %d\n", soma );

    printf( "n) Escreva uma s�rie de instru��es que imprimam o  array t em formato tabular.\n"
                "Liste os subscritos de  coluna como cabe�alhos no topo e liste os subscritos.\n"
                "de linha � esquerda de cada linha.\n" );

    printf( "            [1] [2] [3] [4] [5]\n" );
    for( int i = 0; i < 2; i++ ) // create the array line
    {
        // header line
        printf( "linha %d -> ", i );
        for( int j = 0; j < 5; j++ ) // create the array columns
            printf( "%3d ", t[ i ][ j ] ); // show array elements
        printf( "\n" ); // next line
    } // end for

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
