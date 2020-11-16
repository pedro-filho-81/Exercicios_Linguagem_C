/*
    Função: 5.27 Números primos. Um inteiro é considerado primo se  for
    divisível apenas por 1 e por ele mesmo. Por exemplo,  2, 3, 5 e 7
    são primos, mas 4, 6, 8 e 9 não são.  a) Escreva uma função que
    determine se um número  é primo.  b) Use essa função em um programa
    que determine e  imprima todos os números primos entre 1 e 10000.
    Quantos desses 10000 números você realmente  precisa testar antes de ter
    certeza de que encontrou  todos os primos?  c) Inicialmente, você
    poderia pensar que n/2 é o limite superior dentro do qual deveria testar
    para ver se  um número é primo, mas você só precisa ir até a  raiz
    quadrada de n. Por quê? Reescreva o programa  e execute-o das duas maneiras.
    Estime a melhoria do  desempenho.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 155). Edição do Kindle.
    Autor: Pedro Filho, 16/11/2020.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// protótipo de função
int numeros_primos( int num );

int main()
{
    // seleciona o idioma português
    setlocale( LC_ALL, "Portuguese" );

    // imprimir
   printf( "São números primos: \n{ " );
    // loop para saber qual desses números é primo
   for( int i = 0; i <= 1000; i++ )
   {
       // verificar se a função retorna 1 ou 0
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

} // fim da função main

// function numeros_primos
int numeros_primos( int num )
{
   // variável para a contagem de repetições
   int conte = 0;

   // loop para verificação do número
   for( int i = 1; i <= num; i++ )
   {
      // verificar se num módulo i igual a zero
      if( num % i == 0 ) // se verdade
      {
         // contar quantas vezes essa divisão se repete
         conte++;
      } // fim if
   } // fim for

   // verificar se a contagem é igual a 2
   if( conte > 0 && conte < 3 ) // se verdade
      return 1; // retornar 1
   else // se não
      return 0; // retornar zero
} // fim da função
