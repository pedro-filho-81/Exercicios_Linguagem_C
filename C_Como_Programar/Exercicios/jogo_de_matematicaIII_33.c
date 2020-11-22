/*
   Fun��o: 5.52 Instru��o auxiliada por computador: monitorando o desempenho
   do estudante. Sistemas mais sofisticados de instru��o auxiliada por
   computador monitoram  o desempenho do estudante por um per�odo.
   A decis�o de  iniciar um novo t�pico normalmente � baseada no sucesso
   do estudante com os t�picos anteriores. Modifique o programa do
   Exerc�cio 5.51 para contar o n�mero de respostas corretas e incorretas
   digitadas pelo estudante. Depois  que o estudante digitar 10 respostas,
   seu programa dever�  calcular sua porcentagem correta. Se a porcentagem
   for  menor que 75 por cento, mostre a mensagem �Por favor, pe�a ajuda
   a seu professor.�, depois reinicie o  programa para que outro estudante
   possa responder. Se a  porcentagem for 75 por cento ou maior, mostre
   a mensagem �Parab�ns, voc� est� pronto para o pr�ximo  n�vel!�,
   e depois reinicie o programa para que outro estudante possa responder.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 159). Edi��o do Kindle.
   Autor: Pedro Filho, 22/11/2020.
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
   int resp = 1; // para entrada dos valores do usu�rio
   int confere = 0; // para receber a fun��o multi
   int boa_msg = 0; // para receber n�meros aleat�rios de 1 a 4
   int msg_ruim = 0; // para receber n�meros aleat�rios entre 1 e 4
   int certo = 0; // para fazer a contagem de acertos do aluno
   int errado = 0; // para contar o n�mero de erros do aluno

   // fa�a enquanto resp diferente de zero
   while( resp != 0 ) // primeiro while
   {

      // Cabe�alho
      printf( "{ Tabuada de Multiplicar [0 = sair]}\n" );

      // chamar a fun��o multi e atribuir a confere
      confere = multi( num1 , num2 );
      // verificar se contere � igual a zero
      if( confere == 0 ) break; // sair do programa

      // enquanto resp diferente de zero fa�a
      while( resp != 0 )
      {
         // atribuir a fun��o perguntar a resp
         resp = perguntar( num1, num2 );

         // verificar se a resposta � igual a confere
         if( resp == confere )
         {
            // contar os acertos do aluno
            certo++;

            // verificar se certo � maior que 7
            if( certo > 7.5 )
            {
               // imprimir
               printf( "De 10 quest�es voc� acertou %d\n", certo );
               printf( "Parab�ns, Voc� est� pronto para o pr�ximo n�vel!\n" );
               printf( "D� a vez ao pr�ximo aluno.\n" );
               // pausa o sistema
               system( "pause" );
               // limpar a tela
               system( "cls" );
               break; // sair do programa
            } // fim if

            // aleat�rios
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
            // verificar se contere � igual a zero
            if( confere == 0 ) // se verdade
               break; // sair do programa

         } // fim if
         // se n�o
         else
         {
            // contar quantas vezes o aluno errou
            errado++;

            // verificar se errado � maior que 7
            if( errado >= 7 )
            {
               // imprimir
               printf( "De 10 quest�es voc� errou %d\n", errado );
               printf( "Por favor, pe�a ajuda a seu professor.\n" );
               printf( "D� a vez ao pr�ximo aluno.\n" );
               // pausar o sistema
               system( "pause" );
               // limpar a tela
               system( "cls" );
               break; // sair
            } // fim if

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

      } // fim while interno
   } // fim primeiro while

   // pular line
    printf( "\n" );

    // pausar o sistema
    system( "pause" );

    return 0; // fim do programa

} // fim da fun��o main

// fun��o multiplicar
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
