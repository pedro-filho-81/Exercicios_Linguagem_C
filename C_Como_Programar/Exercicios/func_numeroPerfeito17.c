/*
    Fun��o:5.26 N�meros perfeitos. Um n�mero inteiro � considerado  um n�mero
    perfeito se a soma de seus fatores, incluindo 1 (mas n�o o pr�prio n�mero)
    for igual ao pr�prio  n�mero. Por exemplo, 6 � um n�mero perfeito porque
      6  = 1 + 2 + 3. Escreva uma fun��o perfect que determine se o par�metro
      number � um n�mero perfeito. Use  essa fun��o em um programa que determine
      e imprima  todos os n�meros perfeitos entre 1 e 1000. Imprima
      os  fatores de cada n�mero perfeito para confirmar se o n�-  mero �
      realmente perfeito. Desafie o poder de seu computador testando
      n�meros muito maiores que 1000.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 155). Edi��o do Kindle.
    Autor: Pedro Filho, /11/2020.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//prot�tipo
int perfeitos( int num );

int main()
{
    // seleciona o idioma portugu�s
    setlocale( LC_ALL, "Portuguese" );

    // vari�vel
    int n = 0;

    // loop para pesquisar os n�meros perfeitos
    for( int j = 1; j <= 10000; j++ )
    {
       // verificar se perfeitos s�o diferentes de 0 e 1
       if( perfeitos( j ) != 1 && perfeitos( j ) != 0 ) // se verdade
         // imprimir o n�mero perfeito
         printf( "%d ", perfeitos( j ) );
    } // fim for

    // pula linha
    printf( "\n" );

    // pausa o sistema
    system( "pause" );

    return 0; // fim do programa

} // fim da fun��o main

// function perfeitos
int perfeitos( int num )
{
   // vari�vel para somar o resultado
   int soma = 0;
   // loop para o divisor do parametro num
   for( int i = 1; i < num; i++ )
   {
      // verificar se o m�dulo da divis�o
      // do n�mero � divis�vel por i � igual a zero
      if( num % i == 0 ) // se verdade
      {
         // somar esses n�mero
         soma += i;

      } // fim if
   } // fim for
   // verificar se soma � igual ao n�mero
   if( soma == num ) // se verdade
      // retornar a soma
      return soma;
   else // se n�o
      // retornar zero
      return 0;
} // fim fun��o
