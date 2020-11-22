/*
   Fun��o: 5.51 Instru��o auxiliada por computador: reduzindo a fadiga do estudante.
   Modifique  o programa do Exerc�cio 5.50 de modo que v�rios  coment�rios
   sejam exibidos para cada resposta da  seguinte forma:  Poss�veis mensagens
   para uma resposta correta:  Muito bom!  Excelente!  Bom trabalho!
   Continue assim!  Poss�veis mensagens para uma resposta incorreta:
   N�o. Tente novamente.  Errado. Tente mais uma vez.
   N�o desista!  N�o. Continue tentando.  Use a gera��o de n�mero aleat�rio
   para escolher um n�-  mero de 1 a 4, que ser� usado para selecionar uma das
   respostas apropriadas para cada resposta correta ou incorreta.
   Use uma estrutura switch para emitir as respostas.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 159). Edi��o do Kindle.
   Autor: Pedro Filho, 21/11/2020.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

// prot�tipos de fun��o
int multi( int n1, int n2 );
int perguntar( int n1, int n2 );

// fun��o principal
int main()
{
    // seleciona o idioma portugu�s
    setlocale( LC_ALL, "Portuguese" );

    srand( time(NULL) );

   // vari�veis
   // vari�veis recebem n�meros aleat�rios entre 1 e 9
   int num1 = 1 + rand() % 9;
   int num2 = 1 + rand() % 9;
   int resp = 1;
   int confere = 0;
   int boa_msg = 0;
   int msg_ruim = 0;

   // Cabe�alho
   printf( "{ Tabuada de Multiplicar [0 = sair]}\n" );

   // chamar a fun��o multi e atribuir a confere
   confere = multi( num1 , num2 );

   // enquanto resp diferente de zero fa�a
   while( resp != 0 )
   {
      // atribuir a fun��o perguntar a resp
      resp = perguntar( num1, num2 );

      // verificar se a resposta � igual a confere
      if( resp == confere )
      {
         srand( time(NULL) );
         // gerar n�meros aleat�rios entre 1 e 4.
         boa_msg = 1 + rand() % 4;
         // mostrar a mensagem escolhida
         switch( boa_msg )
         {
            case 1:
               // imprima
               printf( "Muito bom!\n   " );
               break;
            case 2:
               printf( "Excelente!\n" );
               break;
            case 3:
               printf( "Bom trabalhe!\n" );
               break;
            case 4:
               printf( "Continue assim!\n" );
         } // fim switch

         // atribuir um novo n�mero para num1
         num1 = 1 + rand() % 9;
         // atribuir um novo n�mero para num2
         num2 = 1 + rand() % 9;
         // calcular novamente
         confere = multi(num1, num2 );
      } // fim if
      // se n�o
      else
      {
         // gerar n�mero aleat�rio
         msg_ruim = 1 + rand() % 4;
         // mostrar a mensagem escolhida
         switch( msg_ruim )
         {
            case 1:
               // imprima
               printf( "N�o. Tente novamente.\n" );
               break;
            case 2:
               printf( "Errado. Tente mais uma vez.\n" );
               break;
            case 3:
               printf( "N�o desista!\n" );
               break;
            case 4:
               printf( "N�o. Continue tentando.\n" );
               break;
         } // fim switch

      } // fim else

   } // fim while

   // pula line
    printf( "\n" );

    // pausa o sistema
    system( "pause" );

    return 0; // fim do programa

} // fim da fun��o main

// fun��o num_aleatorio
int multi( int n1, int n2 )
{
   // retornar o valor da multiplica��o
   return n1 * n2;
} // fim fun��o num_aleatorio

// fun��o perguntar
int perguntar( int n1, int n2 )
{
   int resp = 0;
   // entrada de dados
   printf( "\tQuanto � %d x %d = ", n1, n2 );
   scanf( "%d", &resp );
   // retornar a resposta
   return resp;
} // fim da fun��o
