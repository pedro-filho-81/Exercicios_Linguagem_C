/*
   Fun��o: 5.50 Instru��o auxiliada por computador.
   Escreva  um programa que ajude um aluno do ensino fundamental a aprender
   a tabuada. Use a fun��o rand  para produzir dois inteiros positivos de um
   d�gito. O  programa dever� ent�o fazer uma pergunta ao usu�-  rio, tal como
   Quanto � 6 vezes 7?  O aluno, ent�o, entra com a resposta. Em seguida,
   o  programa verifica a resposta do aluno. Se estiver correta, mostre
   a mensagem �Muito bom!� e fa�a outra pergunta de tabuada. Se a resposta
   estiver errada,  mostre a mensagem �N�o. Tente novamente.�  e deixe que
   o aluno tente responder � mesma pergunta repetidamente, at� que ele
   finalmente acerte  a resposta.
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

   // Cabe�alho
   printf( "{ Tabuada de Multiplicar [0 = sair]}\n" );

   // chamar a fun��o multi e atribuir a confere
   confere = multi( num1 , num2 );

   // enquanto resp diferente de zero fa�a
   while( resp != 0 )
   {  // atribuir a fun��o perguntar a resp
      resp = perguntar( num1, num2 );

      // verificar se a resposta � igual a confere
      if( resp == confere )
      {  // imprima
         printf( "Muito bom!\n   " );
         // atribuir um novo n�mero para num1
         num1 = 1 + rand() % 9;
         // atribuir um novo n�mero para num2
         num2 = 1 + rand() % 9;
         // calcular novamente
         confere = multi(num1, num2 );
      } // fim if
      // se n�o
      else
      {  // imprima
         printf( "N�o. Tente novamente. " );
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
