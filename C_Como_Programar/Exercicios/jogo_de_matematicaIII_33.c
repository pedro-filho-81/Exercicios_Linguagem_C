/*
   Função: 5.52 Instrução auxiliada por computador: monitorando o desempenho
   do estudante. Sistemas mais sofisticados de instrução auxiliada por
   computador monitoram  o desempenho do estudante por um período.
   A decisão de  iniciar um novo tópico normalmente é baseada no sucesso
   do estudante com os tópicos anteriores. Modifique o programa do
   Exercício 5.51 para contar o número de respostas corretas e incorretas
   digitadas pelo estudante. Depois  que o estudante digitar 10 respostas,
   seu programa deverá  calcular sua porcentagem correta. Se a porcentagem
   for  menor que 75 por cento, mostre a mensagem ‘Por favor, peça ajuda
   a seu professor.’, depois reinicie o  programa para que outro estudante
   possa responder. Se a  porcentagem for 75 por cento ou maior, mostre
   a mensagem ‘Parabéns, você está pronto para o próximo  nível!’,
   e depois reinicie o programa para que outro estudante possa responder.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 159). Edição do Kindle.
   Autor: Pedro Filho, 22/11/2020.
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
   int resp = 1; // para entrada dos valores do usuário
   int confere = 0; // para receber a função multi
   int boa_msg = 0; // para receber números aleatórios de 1 a 4
   int msg_ruim = 0; // para receber números aleatórios entre 1 e 4
   int certo = 0; // para fazer a contagem de acertos do aluno
   int errado = 0; // para contar o número de erros do aluno

   // faça enquanto resp diferente de zero
   while( resp != 0 ) // primeiro while
   {

      // Cabeçalho
      printf( "{ Tabuada de Multiplicar [0 = sair]}\n" );

      // chamar a função multi e atribuir a confere
      confere = multi( num1 , num2 );
      // verificar se contere é igual a zero
      if( confere == 0 ) break; // sair do programa

      // enquanto resp diferente de zero faça
      while( resp != 0 )
      {
         // atribuir a função perguntar a resp
         resp = perguntar( num1, num2 );

         // verificar se a resposta é igual a confere
         if( resp == confere )
         {
            // contar os acertos do aluno
            certo++;

            // verificar se certo é maior que 7
            if( certo > 7.5 )
            {
               // imprimir
               printf( "De 10 questões você acertou %d\n", certo );
               printf( "Parabéns, Você está pronto para o próximo nível!\n" );
               printf( "Dê a vez ao próximo aluno.\n" );
               // pausa o sistema
               system( "pause" );
               // limpar a tela
               system( "cls" );
               break; // sair do programa
            } // fim if

            // aleatórios
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
            // verificar se contere é igual a zero
            if( confere == 0 ) // se verdade
               break; // sair do programa

         } // fim if
         // se não
         else
         {
            // contar quantas vezes o aluno errou
            errado++;

            // verificar se errado é maior que 7
            if( errado >= 7 )
            {
               // imprimir
               printf( "De 10 questões você errou %d\n", errado );
               printf( "Por favor, peça ajuda a seu professor.\n" );
               printf( "Dê a vez ao próximo aluno.\n" );
               // pausar o sistema
               system( "pause" );
               // limpar a tela
               system( "cls" );
               break; // sair
            } // fim if

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

      } // fim while interno
   } // fim primeiro while

   // pular line
    printf( "\n" );

    // pausar o sistema
    system( "pause" );

    return 0; // fim do programa

} // fim da função main

// função multiplicar
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
