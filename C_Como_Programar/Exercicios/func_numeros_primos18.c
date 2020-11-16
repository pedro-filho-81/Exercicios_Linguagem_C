/*
    Fun��o: 5.27 N�meros primos. Um inteiro � considerado primo se  for
    divis�vel apenas por 1 e por ele mesmo. Por exemplo,  2, 3, 5 e 7
    s�o primos, mas 4, 6, 8 e 9 n�o s�o.  a) Escreva uma fun��o que
    determine se um n�mero  � primo.  b) Use essa fun��o em um programa
    que determine e  imprima todos os n�meros primos entre 1 e 10000.
    Quantos desses 10000 n�meros voc� realmente  precisa testar antes de ter
    certeza de que encontrou  todos os primos?  c) Inicialmente, voc�
    poderia pensar que n/2 � o limite superior dentro do qual deveria testar
    para ver se  um n�mero � primo, mas voc� s� precisa ir at� a  raiz
    quadrada de n. Por qu�? Reescreva o programa  e execute-o das duas maneiras.
    Estime a melhoria do  desempenho.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 155). Edi��o do Kindle.
    Autor: Pedro Filho, 16/11/2020.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// prot�tipo de fun��o
int numeros_primos( int num );

int main()
{
    // seleciona o idioma portugu�s
    setlocale( LC_ALL, "Portuguese" );

    // imprimir
   printf( "S�o n�meros primos: \n{ " );
    // loop para saber qual desses n�meros � primo
   for( int i = 0; i <= 1000; i++ )
   {
       // verificar se a fun��o retorna 1 ou 0
       if( numeros_primos( i ) == 1 )
          printf( "%d ", i );

   } // fim for

   // imprimir e pular uma linha
   printf( "}\n" );

    // pula linha
    printf( "\n" );

    // pausa o sistema
    system( "pause" );

    return 0; // fim do programa

} // fim da fun��o main

// function numeros_primos
int numeros_primos( int num )
{
   // vari�vel para a contagem de repeti��es
   int conte = 0;

   // loop para verifica��o do n�mero
   for( int i = 1; i <= num; i++ )
   {
      // verificar se num m�dulo i igual a zero
      if( num % i == 0 ) // se verdade
      {
         // contar quantas vezes essa divis�o se repete
         conte++;
      } // fim if
   } // fim for

   // verificar se a contagem � igual a 2
   if( conte > 0 && conte < 3 ) // se verdade
      return 1; // retornar 1
   else // se n�o
      return 0; // retornar zero
} // fim da fun��o
