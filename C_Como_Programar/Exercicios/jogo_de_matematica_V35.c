/*
   Função: 5.54 Instrução auxiliada por computador: variando  os tipos de
   problemas. Modifique o programa do  Exercício 5.53 de modo a permitir que
   o usuário escolha  um tipo de problema aritmético para estudar. Uma opção
   1 significa problemas de adição, 2 significa problemas  de subtração,
   3 significa problemas de multiplicação e 4  significa uma mistura aleatória
   de todos esses tipos.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 159). Edição do Kindle.
   Autor: Pedro Filho, 25/11/2020.
*/

// incluir bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

// protótipos de função
int alea1(); // retorna valores aleatórios entre 1 e 9
int alea2(); // retorna valores aleatórios entre 1 e 99
int alea3(); // retorna valores aleatórios entre 1 e 999
int somar( int n1, int n2 ); // faz a soma de dois valores
int subtrair( int n1, int n2 ); // faz a subtração entre dois valores
int multi( int n1, int n2 ); // faz a multiplicação entre dois valores
int perguntar( int n1,int n2, char sinal ); // para saber qual a resposta do usuário
int verificar( int nv ); // para verificar qual o nível o usuário escolheu
int aritimetica( int opcao ); // para saber qual a opção aritimética escolheu
void menu(); // para saber em que nível de dificuldade o usuário quer jogar
void menu_misto(); // para saber qual a operação aritimética
void msg_boa( int msg ); // para mostras boas mensagens
void msg_ruim( int msg ); // para exibir as mensagens ruins

// função principal
int main()
{
    // seleciona o idioma português
    setlocale( LC_ALL, "Portuguese" );

   // gerador
    srand( time(NULL) );

   // variáveis
   // variáveis recebem números aleatórios
   int n1 = 0, n2 = 0;
   int resp = 0; // para responder a pergunta
   int opc = 0; //qual a opção aritimética
   int nivel = 1; // para escolher o nível de dificuldade
   int confere = 0; // para receber a função multi
   int boa_msg = 0; // para receber números aleatórios de 1 a 4
   int ruim_msg = 0; // para receber números aleatórios entre 1 e 4
   int certo = 0; // para fazer a contagem de acertos do aluno
   int errado = 0; // para contar o número de erros do aluno
   char sinal = ' '; // para receber o sinal aritimético

   // PRIMEIRO WHILE
   // faça enquanto nível diferente de zero
   while( nivel != 0 ) // primeiro while
   {
      // chamar a função menu
      menu();
      // Escolher o nível de dificuldade
      scanf( "%d", &nivel ); // entrada do usuário

      //VERIFICAR O NÍVEL
      // se nível menor ou igual a zero ou maior que três
      if( nivel <= 0 || nivel > 3 ) {
         // imprima
         printf( "\tVolte sempre!\n" );
         break; // sair do while
      } // fim if

      // se nível igual a 1
      else if( nivel == 1 ){
         // n1 e n2 recebe números aleatórios com um digito
         n1 = alea1();
         n2 = alea1();
      } // fim if
      // se nível igual a 2
      else if( nivel == 2 ){
         // n1 e n2 recebe números aleatórios com dois digitos
         n1 = alea2();
         n2 = alea2();
      } // fim if
      // se nível igual a 3
      else if( nivel == 3 ){
         // n1 e n2 recebe números aleatórios com três digitos
         n1 = alea3();
         n2 = alea3();
      } // fim if

      // chamar o menu da aritimética
      menu_misto();
      // aguarda a escolha da opção do usuário
      scanf( "%d", &opc );

      // atribuir a confere a opção aritimética escolhida
      // escolha a opção
      switch( opc )
      {
         case 1: // caso um
            sinal = '+';
            // o tipo é a soma
            confere = somar( n1, n2 );
            break; // fim tipo
         case 2: // caso dois
            sinal = '-';
            // o tipo é a subtração
            confere = subtrair( n1, n2 );
            break; // fim tipo
         case 3: // caso três
            sinal = 'x';
            // o tipo é a multiplicação
            confere = multi( n1, n2 );
            break; // fim tipo
         case 4:
            break;
      } // fim switch

      // Cabeçalho
      printf( "\n{ Tabuada de nível %d [0 = sair]}\n", nivel );

      // resposta recebe o valor da pergunta
      resp = perguntar( n1, n2, sinal );

      // se resposta igual a zero
      if( resp == 0 ) break; // sair do programa

      // SEGUNDO WHILE
      // enquanto nível diferente de zero faça
      while( nivel != 0 )
      {
         // verificar se a resposta é igual a confere
         if( resp == confere )
         { // se verdade

            // contar certo
            certo += 1;

            // verificar se certo é maior que 7
            if( certo > 7 ) // se verdade
            {
               // imprimir
               printf( "\nDe %d questões você acertou %d, errou %d\n",
                      certo + errado, certo, errado );
               printf( "Parabéns, Você está pronto para o próximo nível!\n" );
               printf( "Dê a vez ao próximo aluno.\n\ns" );
               // zerar o contador certo
               certo = 0;
               // pausa o sistema
               system( "pause" );
               // limpar a tela
               system( "cls" );
               break; // sair do programa
            } // fim if

            // gerador
            srand( time( NULL ) );
            // boa mensagem para o aluno recebe valor aleatótio
            boa_msg = 1 + rand() % 4;
            // e chamar a função boas mensagens
            msg_boa( boa_msg );

            //VERIFICAR O NÍVEL
            // se nível igual a zero
            if( nivel == 0 ) {
               break; // sair do while
            }
            // se nível igual a 1
            if( nivel == 1 ){
               // receber números aleatórios com um digito
               n1 = alea1();
               n2 = alea1();
            } // fim if
            // se nível igual a 2
            else if( nivel == 2 ){
               // receber números aleatórios com dois digitos
               n1 = alea2();
               n2 = alea2();
            } // fim if
            // se nível igual a 3
            else if( nivel == 3 ){
               // receber números aleatórios com três digitos
               n1 = alea3();
               n2 = alea3();
            } // fim if

            // gerador
            srand( time( NULL ) );

            // atribuir a confere a opção aritimética escolhida
            // escolha a opção
            switch( opc )
            {
               case 1: // caso um
                  sinal = '+'; // sinal da adição
                  // o tipo é a soma
                  confere = somar( n1, n2 );
                  break; // fim tipo
               case 2: // caso dois
                  sinal = '-'; // sinal da subtração
                  // o tipo é a subtração
                  confere = subtrair( n1, n2 );
                  break; // fim tipo
               case 3: // caso três
                  sinal = 'x'; // sinal da multiplicação
                  // o tipo é a multiplicação
                  confere = multi( n1, n2 );
                  break; // fim tipo
               case 4:
                  break;
            } // fim switch

            // resposta recebe o valor da pergunta
            resp = perguntar( n1, n2, sinal );

            // se resposta igual a zero
            if( resp == 0 ) nivel = 0; // sair do programa
         } // fim if

         // se a resposta for diferente de convere
         else
         {
            // errado somar 1
            errado +=1;

            // verificar se errado é maior que 7
            if( errado > 7 )
            {
               // imprimir
               printf( "\nDe %d questões você acertou %d, errou %d\n",
                      certo + errado, certo, errado );
               printf( "Por favor, peça ajuda a seu professor.\n" );
               printf( "Dê a vez ao próximo aluno.\n\n" );
               // zerar o contador errado
               errado = 0;
               // pausa o sistema
               system( "pause" );
               // limpar a tela
               system( "cls" );
               break; // sair do programa
            } // fim if

            // mensagem ruim recebe valor aleatório entre 1 e 4
            ruim_msg = 1 + rand() % 4;
            // chamar a função mensagens ruins que recebe como parametro um valor
            msg_ruim( ruim_msg );

            // resposta recebe o valor da pergunta
            resp = perguntar( n1, n2, sinal );
            // se resposta igual a zero
            if( resp == 0 ) nivel = 0; // sair do programa

         } // fim else if

      } // fim segundo while

   } // fim while

    // pausar o sistema
    system( "pause" );

    return 0; // fim do programa

} // fim da função main

// função mensagens ruins
void msg_ruim( int msg )
{
   // escolher a mensagem
   switch( msg )
   {
      case 1:
         printf( "Não. Tente novamente!\n" );
         break;
      case 2:
         printf( "Errado. Tente mais uma vez.\n" );
         break;
      case 3:
         printf( "Não desista!\n" );
         break;
      case 4:
         printf( "Não. continue tentando.\n" );
         break;
   } // fim switch mensagem ruim
} // fim da função msnsagens ruins

// função boas mensagens
void msg_boa( int msg )
{
   // escolha o caso
   switch( msg )
   {
      case 1:
         printf( "Muito bom!\n" );
         break;
      case 2:
         printf( "Excelente!\n" );
         break;
      case 3:
         printf( "Bom trabalho!\n" );
         break;
      case 4:
         printf( "Continue assim!\n" );
         break;
   } // fim switch
} // fim função boas mensagens

// função alea1
int alea1()
{
   // retorna valores sntre 1 e 0
   return 1 + rand() % 9;
} // fim função

// função alea2
int alea2()
{
   // retorna valores sntre 1 e 99
   return 1 + rand() % 99;
} // fim função

// função alea3
int alea3()
{
   // retorna valores sntre 1 e 0
   return 1 + rand() % 999;
} // fim função

// função somar
int somar( int n1, int n2 )
{
   // retornar o valor da soma
   return n1 + n2;
} // fim função somar

// função subtrair
int subtrair( int n1, int n2 )
{
   // retornar o valor da subtração
   return n1 - n2;
} // fim função subtrair

// função multiplicar
int multi( int n1, int n2 )
{
   // retornar o valor da multiplicação
   return n1 * n2;
} // fim função num_aleatorio

// função perguntar aguardando o nível
int perguntar( int n1, int n2, char sinal )
{
   int resp = 0; // receber resposta do usuário

   // entrada de dados
   printf( "\tQuanto é %d %c %d = ", n1, sinal, n2 );
   scanf( "%d", &resp );

   // retornar a resposta
   return resp;
} // fim da função

// função menu
void menu()
{
   // limpar a tela
   system( "cls" );
   // mostrar
   printf( "      { DESAFIO DE MATEMÁTICA }\n" );
   printf( "   =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n" );
   printf( "    1-Fácil, 2-Médio, 3-Difícil\n" );
   printf( "   *******************************\n" );
   printf( "   *     Tabuada de 1 digito     *\n" );
   printf( "   *     Tabuada de 2 digito     *\n" );
   printf( "   *     Tabuada de 3 digito     *\n" );
   printf( "   *          0 - Sair.          *\n" );
   printf( "   *******************************\n" );
   printf( "   Em que nível você quer jogar? " );
} // fim função menu

// função menu aritimético
void menu_misto()
{
   // limpar a tela
   system( "cls" );
   // mostrar
   printf( "      { DESAFIO DE MATEMÁTICA }\n" );
   printf( "   =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n" );
   printf( "            ARITIMÉTICA\n");+
   printf( "   *******************************\n" );
   printf( "   *          1 - Somar          *\n" );
   printf( "   *          2 - Sibtrair       *\n" );
   printf( "   *          3 - Multiplicar    *\n" );
   printf( "   *          4 - Misto          *\n" );
   printf( "   *          0 - Sair           *\n" );
   printf( "   *******************************\n" );
   printf( "   Qual a sua opção? " );
} // fim função menu misto

// função verificar nível
int verificar( int nv )
{
   int confere = 0;

      // se nível igual a 1
      if( nv == 1 ){
         confere = multi( alea1(), alea1() );
      } // fim if
      // se nível igual a 2
      else if( nv == 2 ){
         confere = multi( alea2(), alea2() );
      } // fim if
      // se nível igual a 3
      else if( nv == 3 ){
         confere = multi( alea3(), alea3() );
      } // fim if

      return confere;

} // fim função verificar

// função aritimética
int aritimetica( int opcao )
{
   // variável
   int tipo = 0;
   // retornar tipo
   return tipo;
} // fim da função aritimética
