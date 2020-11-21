/*
   Função: 5.50 Instrução auxiliada por computador.
   Escreva  um programa que ajude um aluno do ensino fundamental a aprender
   a tabuada. Use a função rand  para produzir dois inteiros positivos de um
   dígito. O  programa deverá então fazer uma pergunta ao usuá-  rio, tal como
   Quanto é 6 vezes 7?  O aluno, então, entra com a resposta. Em seguida,
   o  programa verifica a resposta do aluno. Se estiver correta, mostre
   a mensagem ‘Muito bom!’ e faça outra pergunta de tabuada. Se a resposta
   estiver errada,  mostre a mensagem ‘Não. Tente novamente.’  e deixe que
   o aluno tente responder à mesma pergunta repetidamente, até que ele
   finalmente acerte  a resposta.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 159). Edição do Kindle.
    Autor: Pedro Filho, 21/11/2020.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

// protótipos de função
int multi( int n1, int n2 );
int perguntar( int n1, int n2 );

// função principal
int main()
{
    // seleciona o idioma português
    setlocale( LC_ALL, "Portuguese" );

    srand( time(NULL) );

   // variáveis
   // variáveis recebem números aleatórios entre 1 e 9
   int num1 = 1 + rand() % 9;
   int num2 = 1 + rand() % 9;
   int resp = 1;
   int confere = 0;

   // Cabeçalho
   printf( "{ Tabuada de Multiplicar [0 = sair]}\n" );

   // chamar a função multi e atribuir a confere
   confere = multi( num1 , num2 );

   // enquanto resp diferente de zero faça
   while( resp != 0 )
   {  // atribuir a função perguntar a resp
      resp = perguntar( num1, num2 );

      // verificar se a resposta é igual a confere
      if( resp == confere )
      {  // imprima
         printf( "Muito bom!\n   " );
         // atribuir um novo número para num1
         num1 = 1 + rand() % 9;
         // atribuir um novo número para num2
         num2 = 1 + rand() % 9;
         // calcular novamente
         confere = multi(num1, num2 );
      } // fim if
      // se não
      else
      {  // imprima
         printf( "Não. Tente novamente. " );
      } // fim else

   } // fim while

   // pula line
    printf( "\n" );

    // pausa o sistema
    system( "pause" );

    return 0; // fim do programa

} // fim da função main

// função num_aleatorio
int multi( int n1, int n2 )
{
   // retornar o valor da multiplicação
   return n1 * n2;
} // fim função num_aleatorio

// função perguntar
int perguntar( int n1, int n2 )
{
   int resp = 0;
   // entrada de dados
   printf( "\tQuanto é %d x %d = ", n1, n2 );
   scanf( "%d", &resp );
   // retornar a resposta
   return resp;
} // fim da função
