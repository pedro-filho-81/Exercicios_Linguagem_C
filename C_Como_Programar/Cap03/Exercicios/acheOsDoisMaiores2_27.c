/*
   Questão: 3.27 Ache os dois maiores números. Usando uma técnica  semelhante
   à do Exercício 3.24, ache os dois maiores  valores dos 10 números.
   [Nota: você poderá informar  cada número apenas uma vez.]
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 75). Edição do Kindle.
   Autor: Pedro Filho, 17/01/2021
*/

// Incluir Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // cria variáveis
   int num;
   int primeiroMaior;
   int segundoMaior;
   int contador = 1;

   // cabeçalho
   printf( "\tPRIMEIRO e SEGUNDO MAIOR\n" );

   // loop para adicionar valor
   // enquanto contador menor ou igual a 10
   while( contador <= 5 ) {

      // entrada de dados
      printf( "Digite um valor: " );
      scanf( "%d", &num );

      // se contador igual a 1
      if( contador == 1 ) {

         // primeiro e segundo maior recebe num
         primeiroMaior = num;
         segundoMaior = num;

      } // fim if

      // se num maior que primeiro maior
      if( num > primeiroMaior ) {

         // primeiro maior recebe num
         primeiroMaior = num;

      }  // fim if externo

      if( num < primeiroMaior ) // se num menor que primeiro
         if( primeiroMaior >= segundoMaior ) // se primeiro maior ou igual ao segundo
            if( segundoMaior > num ) // se o segundo for maior que num

               // se
               segundoMaior = num;

      // incremanta contador
      contador++;

   }  // fim while

   // imprime resultado
   printf( "O maior valor é %d e o segundo maior é %d\n\n", primeiroMaior, segundoMaior );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN
