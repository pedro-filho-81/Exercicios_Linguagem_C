/*
   Fun��o: Este exerc�cio � a jun��o dos exercicios 5.50 a 5.53.
   5.54 Instru��o auxiliada por computador: variando  os tipos de
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
char sinal( int opc ); // retorna o sinal aritim�tico
int numero_1( int niv ); // retorna o primeiro n�mero do n�vel
int numero_2( int niv ); // retornar o segundo n�mero do n�vel
int alea1(); // retorna valores aleat�rios entre 1 e 9
int alea2(); // retorna valores aleat�rios entre 1 e 99
int alea3(); // retorna valores aleat�rios entre 1 e 999
int perguntar( int n1,int n2, char sinal ); // para saber qual a resposta do usu�rio
int verificar( int nv ); // para verificar qual o n�vel o usu�rio escolheu
int aritimetica( int opcao ); // para saber qual a op��o aritim�tica escolheu
int escolha( int n1, int n2, int opc ); // escolher a op��o aritim�tica ( +, -, ou x )
void menu(); // para saber em que n�vel de dificuldade o usu�rio quer jogar
void menu_misto(); // para saber qual a opera��o aritim�tica
void msg_boa( int msg ); // para mostras boas mensagens
void msg_ruim( int msg ); // para exibir as mensagens ruins
void acertados( int certos, int erros ); // para mostrar os acertos
void errados( int errou, int acertou ); // para mostrar os errados

// fun��o principal
int main()
{
    // seleciona o idioma portugu�s
    setlocale( LC_ALL, "Portuguese" );

   // gerador
    srand( time(NULL) );

   // vari�veis
   // recebem n�meros aleat�rios
   int n1 = 0, n2 = 0;
   int resp = 0; // para responder a pergunta
   int opc = 0; //qual a op��o aritim�tica
   int seg_opc = 0;
   int nivel = 1; // escolher o n�vel de dificuldade
   int confere = 0; // receber a fun��o multi
   int boa_msg = 0; // receber n�meros aleat�rios de 1 a 4
   int ruim_msg = 0; // receber n�meros aleat�rios entre 1 e 4
   int certo = 0; // fazer a contagem de acertos do aluno
   int errado = 0; // contar o n�mero de erros do aluno
   char sin = 0; // receber sinal aritim�tico

   // PRIMEIRO WHILE USADO PARA O PRIMEIRO C�LCULO
   // fa�a enquanto n�vel diferente de zero
   while( nivel != 0 ) // primeiro while
   {
      // chamar a fun��o menu principal
      menu();
      // Escolher o n�vel de dificuldade
      scanf( "%d", &nivel ); // entrada do usu�rio

      //VERIFICAR O N�VEL DE DIFICULDADE
      // se n�vel menor ou igual a zero ou maior que tr�s
      if( nivel <= 0 || nivel > 3 ) {
         // imprima
         printf( "\tVolte sempre!\n" );
         break; // sair do while
      } // fim if

      // MENU SECUNDARIO
      // chamar o menu da op��o aritim�tica
      menu_misto();
      // aguarda a escolha da op��o do usu�rio
      scanf( "%d", &opc );
      // se op��o igual a zero
      if( opc == 0 ) break;

      // LOOP USADO PARA A OP��O IGUAL A 4
      // FA�A ENQUANTO OPC IGUAL A 4
      while( opc == 4 ) { // se verdade

         // atribuir a fun��o n�mero 1 a vari�vel n1
         n1 = numero_1( nivel );
         // atribuir a fun��o n�mero 2 a vari�vel n2
         n2 = numero_2( nivel );

         // segunda op��o recebe um valor aleat�rio entre 1 e 3
         seg_opc = 1 + rand() % 3;

         // chamar a fun��o escolha e atribuir a segunda op��o
         escolha( n1, n2, seg_opc );

         // resposta recebe o valor da fun��o perguntar
         resp = perguntar( n1, n2, sinal( seg_opc ) );

         // se resposta igual a zero
         if( resp == 0 ) {
            nivel = 0;
            opc = 0;
            break;
         } // sair do programa

         // se a resposta for igual a escolha
         if( resp == escolha( n1, n2, seg_opc ) ) {

            // boa mensagem para o aluno recebe valor aleat�tio
            boa_msg = 1 + rand() % 4;
            // e chamar a fun��o boas mensagens
            msg_boa( boa_msg );

            // contar os certos
            certo += 1;
            // chamar a fun��o acertados
            acertados( certo,errado );

         } // fim if resposta igual a escolha
         else { // se n�o
            // mensagem ruim recebe valor aleat�rio entre 1 e 4
            ruim_msg = 1 + rand() % 4;
            // chamar a fun��o mensagens ruins que recebe como parametro um valor
            msg_ruim( ruim_msg );

            // enquanto a resposta for diferente da escolha repetir
            while( resp != escolha( n1, n2, seg_opc) ) {

               // resposta recebe o valor da fun��o perguntar
               resp = perguntar( n1, n2, sinal( seg_opc ) );

               // se resposta igual a zero
               if( resp == 0 ) {
                  nivel = 0;
                  opc = 0;
                  break;
               } // sair do programa

            } // fim while
         } // fim else
      } // fim while opc igual a 4

      // LOOP USADO PARA A OP��O entre 1 e 3
      // se op��o maior que zero e menor que 4
      while( opc > 0 && opc < 4 ) {

         //ATRIBUIR VALORES AS VARI�VEIS N1 e N2
         // atribuir a fun��o n�mero 1 a vari�vel n1
         n1 = numero_1( nivel );
         // atribuir a fun��o n�mero 2 a vari�vel n2
         n2 = numero_2( nivel );

         // atribuir a confere a op��o aritim�tica escolhida
         // escolha a op��o
         escolha( n1, n2, opc );

         // resposta rec=ebe o valor da pergunta
         resp = perguntar( n1, n2, sinal( opc ) );

         // se resposta igual a zero
         if( resp == 0 ) {
            nivel = 0;
            opc = 0;
            break;
         } // sair do programa

         // se a resposta for igual a escolha
         if( resp == escolha( n1, n2, opc ) ) {

            // contar certo
            certo += 1;

            // boa mensagem para o aluno recebe valor aleat�tio
            boa_msg = 1 + rand() % 4;
            // e chamar a fun��o boas mensagens
            msg_boa( boa_msg );

            // chamar a fun��o acertados
            acertados( certo, errado );
            // se certo maior que 7 sair do while
            if( certo > 7 ) {
               certo = 0;
               break;
            } // fim if

         } // fim if resposta igual a escolha
         else {
            // mensagem ruim recebe valor aleat�rio entre 1 e 4
            ruim_msg = 1 + rand() % 4;
            // chamar a fun��o mensagens ruins que recebe como parametro um valor
            msg_ruim( ruim_msg );

            // enquanto a resposta for diferente da escolha repita
            while( resp != escolha( n1, n2, opc) ) {

               // mensagem ruim recebe valor aleat�rio entre 1 e 4
               ruim_msg = 1 + rand() % 4;
               // chamar a fun��o mensagens ruins que recebe como parametro um valor
               msg_ruim( ruim_msg );

               // contar quantas vezes errou
               errado += 1;
               // chamar a fun��o errados
               errados( errado, certo );
               // se errado maior que 7 sair do while
               if( errado > 7 ) {
                  errado = 0;
                  opc = 0;
                  break;
               } // fim if

               // resposta recebe o valor da fun��o perguntar
               resp = perguntar( n1, n2, sinal( opc ) );

               // se resposta igual a zero
               if( resp == 0 ) {
                  nivel = 0;
                  opc = 0;
                  break;
               } // sair do programa

            } // fim while
         } // fim else
      } // fim while op��o entre 1 e 3

   } // fim primeiro while

    // pausar o sistema
    system( "pause" );

    return 0; // fim do programa

} // fim da fun��o main

// fun��o n�mero 1
// retorna o primeiro n�mero do n�vel
int numero_1( int niv )
{
   // vari�vel
   int n1 = 0;
   // se n�vel igual a 1
   if( niv == 1 ){
      // n1 e n2 recebe n�meros aleat�rios com um digito
      n1 = alea1();
   } // fim if
   // se n�vel igual a 2
   else if( niv == 2 ){
      // n1 e n2 recebe n�meros aleat�rios com dois digitos
      n1 = alea2();
   } // fim if
   // se n�vel igual a 3
   else if( niv == 3 ){
      // n1 e n2 recebe n�meros aleat�rios com tr�s digitos
      n1 = alea3();
   } // fim if
   // retornar o n�mero 1
   return n1;
} // fim fun��o n�mero 1

// fun��o n�mero 2
// retornar o segundo n�mero do n�vel
int numero_2( int niv )
{
   // vari�vel
   int n2 = 0;

   // se n�vel igual a 1
   if( niv == 1 ){
      // n1 e n2 recebe n�meros aleat�rios com um digito
      n2 = alea1();
   } // fim if
   // se n�vel igual a 2
   else if( niv == 2 ){
      // n1 e n2 recebe n�meros aleat�rios com dois digitos
      n2 = alea2();
   } // fim if
   // se n�vel igual a 3
   else if( niv == 3 ){
      // n1 e n2 recebe n�meros aleat�rios com tr�s digitos
      n2 = alea3();
   } // fim if
   // retornar o n�mero 2
   return n2;
} // fim da fun��o n�mero 2

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

// fun��o perguntar aguardando o n�vel
int perguntar( int n1, int n2, char sinal )
{
   // vari�vel
   int resp = 0; // receber resposta do usu�rio

   // se n1 igual a n2
   if( n1 == n2 && sinal == '-' )
      // n2 recebe menos 1
      n2 += -1;

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

// fun��o sinal
// retornar o sinal aritim�tico
char sinal( int opc )
{
   // vari�vel para o sinal aritim�tico
   char sn = ' ';

   // escolher o sinal com base na op��o
   switch( opc )
   {
      case 1:
         sn = '+';
         break;
      case 2:
         sn = '-';
         break;
      case 3:
         sn = 'x';
         break;
   } // fim switch
   // retornar o sinal
   return sn;
} // fim fun��o sinal

// fun��o escolha
int escolha( int n1, int n2, int opc )
{
   int confere = 0; // a escolha aritim�tica

   // chamar a vun��o sinal
   sinal( opc );

   // atribuir a confere a op��o aritim�tica escolhida
   // escolha a op��o
   switch( opc )
   {
      case 1: // caso um
         // o tipo � a soma
         confere = n1 + n2;
         break; // fim tipo
      case 2: // caso dois
         // se n1 igual a n2
         if( n1 == n2 )
            // n2 recebe menos 1
            n2 += -1;
         // o tipo � a subtra��o
         confere = n1 - n2;
         break; // fim tipo
      case 3: // caso tr�s
         // o tipo � a multiplica��o
         confere = n1 * n2;
         break; // fim tipo
      } // fim switch
      // retornar a escolha aritim�tica
      return confere;
} // fim fun��o

// fun��o acertados
void acertados( int certos, int erros )
{
   // verificar se certo � maior que 7
   if( certos > 7 ) // se verdade
   {
      // imprimir
      printf( "\nDe %d quest�es voc� acertou %d e errou %d\n",
             certos + erros, certos, erros );
      printf( "Parab�ns, Voc� est� pronto para o pr�ximo n�vel!\n" );
      printf( "D� a vez ao pr�ximo aluno.\n\ns" );
      // zerar o contador certo
      certos = 0;
      // pausa o sistema
      system( "pause" );
      // limpar a tela
      system( "cls" );

   } // fim if certo > 7

} // fim da fun��o acertados

// fun��o errados
void errados( int errou, int acertou )
{
   // verificar se errado � maior que 7
   if( errou > 7 )
   {
      // imprimir
      printf( "\nDe %d quest�es voc� acertou %d, errou %d\n",
               acertou + errou, acertou, errou );
      printf( "Por favor, pe�a ajuda a seu professor.\n" );
      printf( "D� a vez ao pr�ximo aluno.\n\n" );
      // zerar o contador errado
      errou = 0;
      // pausa o sistema
      system( "pause" );
      // limpar a tela
      system( "cls" );
   } // fim if

} // fim da fun��o errados
