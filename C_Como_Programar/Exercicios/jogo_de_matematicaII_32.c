/*
   Função: 5.51 Instrução auxiliada por computador: reduzindo a fadiga do estudante.
   Modifique  o programa do Exercício 5.50 de modo que vários  comentários
   sejam exibidos para cada resposta da  seguinte forma:  Possíveis mensagens
   para uma resposta correta:  Muito bom!  Excelente!  Bom trabalho!
   Continue assim!  Possíveis mensagens para uma resposta incorreta:
   Não. Tente novamente.  Errado. Tente mais uma vez.
   Não desista!  Não. Continue tentando.  Use a geração de número aleatório
   para escolher um nú-  mero de 1 a 4, que será usado para selecionar uma das
   respostas apropriadas para cada resposta correta ou incorreta.
   Use uma estrutura switch para emitir as respostas.
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
   int boa_msg = 0;
   int msg_ruim = 0;

   // Cabeçalho
   printf( "{ Tabuada de Multiplicar [0 = sair]}\n" );

   // chamar a função multi e atribuir a confere
   confere = multi( num1 , num2 );

   // enquanto resp diferente de zero faça
   while( resp != 0 )
   {
      // atribuir a função perguntar a resp
      resp = perguntar( num1, num2 );

      // verificar se a resposta é igual a confere
      if( resp == confere )
      {
         srand( time(NULL) );
         // gerar números aleatórios entre 1 e 4.
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

         // atribuir um novo número para num1
         num1 = 1 + rand() % 9;
         // atribuir um novo número para num2
         num2 = 1 + rand() % 9;
         // calcular novamente
         confere = multi(num1, num2 );
      } // fim if
      // se não
      else
      {
         // gerar número aleatório
         msg_ruim = 1 + rand() % 4;
         // mostrar a mensagem escolhida
         switch( msg_ruim )
         {
            case 1:
               // imprima
               printf( "Não. Tente novamente.\n" );
               break;
            case 2:
               printf( "Errado. Tente mais uma vez.\n" );
               break;
            case 3:
               printf( "Não desista!\n" );
               break;
            case 4:
               printf( "Não. Continue tentando.\n" );
               break;
         } // fim switch

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
