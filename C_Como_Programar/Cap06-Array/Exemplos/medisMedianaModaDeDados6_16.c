/*
    1 /* Figura 6.16: fig06_16.c
    2 Esse programa introduz o t�pico da an�lise de dados de pesquisa.
    3 Ele calcula a m�dia, a mediana e a moda dos dados
    Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 181). Edi��o do Kindle.
    16/10/2021
*/

#include <stdio.h>
#include <locale.h>
#define SIZE 99
#define FREQ_SIZE 10

// prot�tipos
void addValue( int vetor, int size );
void average( const int answer[], int size );
void median( int answer[], int size );
void mode( int freq[], int freqSize, const int answer[], int size );
void bubbleSort( int a[], int size );
void printArray( const int a[], int size );

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
