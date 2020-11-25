/*
   Fun��o: 5.54 Instru��o auxiliada por computador: variando  os tipos de
   problemas. Modifique o programa do  Exerc�cio 5.53 de modo a permitir que
   o usu�rio escolha  um tipo de problema aritm�tico para estudar. Uma op��o
   1 significa problemas de adi��o, 2 significa problemas  de subtra��o,
   3 significa problemas de multiplica��o e 4  significa uma mistura aleat�ria
   de todos esses tipos.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 159). Edi��o do Kindle.
   Autor: Pedro Filho, 25/11/2020.
*/

// incluir bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

// prot�tipos de fun��o
int alea1(); // retorna valores aleat�rios entre 1 e 9
int alea2(); // retorna valores aleat�rios entre 1 e 99
int alea3(); // retorna valores aleat�rios entre 1 e 999
int somar( int n1, int n2 ); // faz a soma de dois valores
int subtrair( int n1, int n2 ); // faz a subtra��o entre dois valores
int multi( int n1, int n2 ); // faz a multiplica��o entre dois valores
int perguntar( int n1,int n2, char sinal ); // para saber qual a resposta do usu�rio
int verificar( int nv ); // para verificar qual o n�vel o usu�rio escolheu
int aritimetica( int opcao ); // para saber qual a op��o aritim�tica escolheu
void menu(); // para saber em que n�vel de dificuldade o usu�rio quer jogar
void menu_misto(); // para saber qual a opera��o aritim�tica
void msg_boa( int msg ); // para mostras boas mensagens
void msg_ruim( int msg ); // para exibir as mensagens ruins

// fun��o principal
int main()
{
    // seleciona o idioma portugu�s
    setlocale( LC_ALL, "Portuguese" );

   // gerador
    srand( time(NULL) );

   // vari�veis
   // vari�veis recebem n�meros aleat�rios
   int n1 = 0, n2 = 0;
   int resp = 0; // para responder a pergunta
   int opc = 0; //qual a op��o aritim�tica
   int nivel = 1; // para escolher o n�vel de dificuldade
   int confere = 0; // para receber a fun��o multi
   int boa_msg = 0; // para receber n�meros aleat�rios de 1 a 4
   int ruim_msg = 0; // para receber n�meros aleat�rios entre 1 e 4
   int certo = 0; // para fazer a contagem de acertos do aluno
   int errado = 0; // para contar o n�mero de erros do aluno
   char sinal = ' '; // para receber o sinal aritim�tico

   // PRIMEIRO WHILE
   // fa�a enquanto n�vel diferente de zero
   while( nivel != 0 ) // primeiro while
   {
      // chamar a fun��o menu
      menu();
      // Escolher o n�vel de dificuldade
      scanf( "%d", &nivel ); // entrada do usu�rio

      //VERIFICAR O N�VEL
      // se n�vel menor ou igual a zero ou maior que tr�s
      if( nivel <= 0 || nivel > 3 ) {
         // imprima
         printf( "\tVolte sempre!\n" );
         break; // sair do while
      } // fim if

      // se n�vel igual a 1
      else if( nivel == 1 ){
         // n1 e n2 recebe n�meros aleat�rios com um digito
         n1 = alea1();
         n2 = alea1();
      } // fim if
      // se n�vel igual a 2
      else if( nivel == 2 ){
         // n1 e n2 recebe n�meros aleat�rios com dois digitos
         n1 = alea2();
         n2 = alea2();
      } // fim if
      // se n�vel igual a 3
      else if( nivel == 3 ){
         // n1 e n2 recebe n�meros aleat�rios com tr�s digitos
         n1 = alea3();
         n2 = alea3();
      } // fim if

      // chamar o menu da aritim�tica
      menu_misto();
      // aguarda a escolha da op��o do usu�rio
      scanf( "%d", &opc );

      // atribuir a confere a op��o aritim�tica escolhida
      // escolha a op��o
      switch( opc )
      {
         case 1: // caso um
            sinal = '+';
            // o tipo � a soma
            confere = somar( n1, n2 );
            break; // fim tipo
         case 2: // caso dois
            sinal = '-';
            // o tipo � a subtra��o
            confere = subtrair( n1, n2 );
            break; // fim tipo
         case 3: // caso tr�s
            sinal = 'x';
            // o tipo � a multiplica��o
            confere = multi( n1, n2 );
            break; // fim tipo
         case 4:
            break;
      } // fim switch

      // Cabe�alho
      printf( "\n{ Tabuada de n�vel %d [0 = sair]}\n", nivel );

      // resposta recebe o valor da pergunta
      resp = perguntar( n1, n2, sinal );

      // se resposta igual a zero
      if( resp == 0 ) break; // sair do programa

      // SEGUNDO WHILE
      // enquanto n�vel diferente de zero fa�a
      while( nivel != 0 )
      {
         // verificar se a resposta � igual a confere
         if( resp == confere )
         { // se verdade

            // contar certo
            certo += 1;

            // verificar se certo � maior que 7
            if( certo > 7 ) // se verdade
            {
               // imprimir
               printf( "\nDe %d quest�es voc� acertou %d, errou %d\n",
                      certo + errado, certo, errado );
               printf( "Parab�ns, Voc� est� pronto para o pr�ximo n�vel!\n" );
               printf( "D� a vez ao pr�ximo aluno.\n\ns" );
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
            // boa mensagem para o aluno recebe valor aleat�tio
            boa_msg = 1 + rand() % 4;
            // e chamar a fun��o boas mensagens
            msg_boa( boa_msg );

            //VERIFICAR O N�VEL
            // se n�vel igual a zero
            if( nivel == 0 ) {
               break; // sair do while
            }
            // se n�vel igual a 1
            if( nivel == 1 ){
               // receber n�meros aleat�rios com um digito
               n1 = alea1();
               n2 = alea1();
            } // fim if
            // se n�vel igual a 2
            else if( nivel == 2 ){
               // receber n�meros aleat�rios com dois digitos
               n1 = alea2();
               n2 = alea2();
            } // fim if
            // se n�vel igual a 3
            else if( nivel == 3 ){
               // receber n�meros aleat�rios com tr�s digitos
               n1 = alea3();
               n2 = alea3();
            } // fim if

            // gerador
            srand( time( NULL ) );

            // atribuir a confere a op��o aritim�tica escolhida
            // escolha a op��o
            switch( opc )
            {
               case 1: // caso um
                  sinal = '+'; // sinal da adi��o
                  // o tipo � a soma
                  confere = somar( n1, n2 );
                  break; // fim tipo
               case 2: // caso dois
                  sinal = '-'; // sinal da subtra��o
                  // o tipo � a subtra��o
                  confere = subtrair( n1, n2 );
                  break; // fim tipo
               case 3: // caso tr�s
                  sinal = 'x'; // sinal da multiplica��o
                  // o tipo � a multiplica��o
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

            // verificar se errado � maior que 7
            if( errado > 7 )
            {
               // imprimir
               printf( "\nDe %d quest�es voc� acertou %d, errou %d\n",
                      certo + errado, certo, errado );
               printf( "Por favor, pe�a ajuda a seu professor.\n" );
               printf( "D� a vez ao pr�ximo aluno.\n\n" );
               // zerar o contador errado
               errado = 0;
               // pausa o sistema
               system( "pause" );
               // limpar a tela
               system( "cls" );
               break; // sair do programa
            } // fim if

            // mensagem ruim recebe valor aleat�rio entre 1 e 4
            ruim_msg = 1 + rand() % 4;
            // chamar a fun��o mensagens ruins que recebe como parametro um valor
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

} // fim da fun��o main

// fun��o mensagens ruins
void msg_ruim( int msg )
{
   // escolher a mensagem
   switch( msg )
   {
      case 1:
         printf( "N�o. Tente novamente!\n" );
         break;
      case 2:
         printf( "Errado. Tente mais uma vez.\n" );
         break;
      case 3:
         printf( "N�o desista!\n" );
         break;
      case 4:
         printf( "N�o. continue tentando.\n" );
         break;
   } // fim switch mensagem ruim
} // fim da fun��o msnsagens ruins

// fun��o boas mensagens
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
} // fim fun��o boas mensagens

// fun��o alea1
int alea1()
{
   // retorna valores sntre 1 e 0
   return 1 + rand() % 9;
} // fim fun��o

// fun��o alea2
int alea2()
{
   // retorna valores sntre 1 e 99
   return 1 + rand() % 99;
} // fim fun��o

// fun��o alea3
int alea3()
{
   // retorna valores sntre 1 e 0
   return 1 + rand() % 999;
} // fim fun��o

// fun��o somar
int somar( int n1, int n2 )
{
   // retornar o valor da soma
   return n1 + n2;
} // fim fun��o somar

// fun��o subtrair
int subtrair( int n1, int n2 )
{
   // retornar o valor da subtra��o
   return n1 - n2;
} // fim fun��o subtrair

// fun��o multiplicar
int multi( int n1, int n2 )
{
   // retornar o valor da multiplica��o
   return n1 * n2;
} // fim fun��o num_aleatorio

// fun��o perguntar aguardando o n�vel
int perguntar( int n1, int n2, char sinal )
{
   int resp = 0; // receber resposta do usu�rio

   // entrada de dados
   printf( "\tQuanto � %d %c %d = ", n1, sinal, n2 );
   scanf( "%d", &resp );

   // retornar a resposta
   return resp;
} // fim da fun��o

// fun��o menu
void menu()
{
   // limpar a tela
   system( "cls" );
   // mostrar
   printf( "      { DESAFIO DE MATEM�TICA }\n" );
   printf( "   =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n" );
   printf( "    1-F�cil, 2-M�dio, 3-Dif�cil\n" );
   printf( "   *******************************\n" );
   printf( "   *     Tabuada de 1 digito     *\n" );
   printf( "   *     Tabuada de 2 digito     *\n" );
   printf( "   *     Tabuada de 3 digito     *\n" );
   printf( "   *          0 - Sair.          *\n" );
   printf( "   *******************************\n" );
   printf( "   Em que n�vel voc� quer jogar? " );
} // fim fun��o menu

// fun��o menu aritim�tico
void menu_misto()
{
   // limpar a tela
   system( "cls" );
   // mostrar
   printf( "      { DESAFIO DE MATEM�TICA }\n" );
   printf( "   =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n" );
   printf( "            ARITIM�TICA\n");+
   printf( "   *******************************\n" );
   printf( "   *          1 - Somar          *\n" );
   printf( "   *          2 - Sibtrair       *\n" );
   printf( "   *          3 - Multiplicar    *\n" );
   printf( "   *          4 - Misto          *\n" );
   printf( "   *          0 - Sair           *\n" );
   printf( "   *******************************\n" );
   printf( "   Qual a sua op��o? " );
} // fim fun��o menu misto

// fun��o verificar n�vel
int verificar( int nv )
{
   int confere = 0;

      // se n�vel igual a 1
      if( nv == 1 ){
         confere = multi( alea1(), alea1() );
      } // fim if
      // se n�vel igual a 2
      else if( nv == 2 ){
         confere = multi( alea2(), alea2() );
      } // fim if
      // se n�vel igual a 3
      else if( nv == 3 ){
         confere = multi( alea3(), alea3() );
      } // fim if

      return confere;

} // fim fun��o verificar

// fun��o aritim�tica
int aritimetica( int opcao )
{
   // vari�vel
   int tipo = 0;
   // retornar tipo
   return tipo;
} // fim da fun��o aritim�tica
