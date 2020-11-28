/*
   Função: Este exercício é a junção dos exercicios 5.50 a 5.53.
   5.54 Instrução auxiliada por computador: variando  os tipos de
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
char sinal( int opc ); // retorna o sinal aritimético
int numero_1( int niv ); // retorna o primeiro número do nível
int numero_2( int niv ); // retornar o segundo número do nível
int alea1(); // retorna valores aleatórios entre 1 e 9
int alea2(); // retorna valores aleatórios entre 1 e 99
int alea3(); // retorna valores aleatórios entre 1 e 999
int perguntar( int n1,int n2, char sinal ); // para saber qual a resposta do usuário
int verificar( int nv ); // para verificar qual o nível o usuário escolheu
int aritimetica( int opcao ); // para saber qual a opção aritimética escolheu
int escolha( int n1, int n2, int opc ); // escolher a opção aritimética ( +, -, ou x )
void menu(); // para saber em que nível de dificuldade o usuário quer jogar
void menu_misto(); // para saber qual a operação aritimética
void msg_boa( int msg ); // para mostras boas mensagens
void msg_ruim( int msg ); // para exibir as mensagens ruins
void acertados( int certos, int erros ); // para mostrar os acertos
void errados( int errou, int acertou ); // para mostrar os errados

// função principal
int main()
{
    // seleciona o idioma português
    setlocale( LC_ALL, "Portuguese" );

   // gerador
    srand( time(NULL) );

   // variáveis
   // recebem números aleatórios
   int n1 = 0, n2 = 0;
   int resp = 0; // para responder a pergunta
   int opc = 0; //qual a opção aritimética
   int seg_opc = 0;
   int nivel = 1; // escolher o nível de dificuldade
   int confere = 0; // receber a função multi
   int boa_msg = 0; // receber números aleatórios de 1 a 4
   int ruim_msg = 0; // receber números aleatórios entre 1 e 4
   int certo = 0; // fazer a contagem de acertos do aluno
   int errado = 0; // contar o número de erros do aluno
   char sin = 0; // receber sinal aritimético

   // PRIMEIRO WHILE USADO PARA O PRIMEIRO CÁLCULO
   // faça enquanto nível diferente de zero
   while( nivel != 0 ) // primeiro while
   {
      // chamar a função menu principal
      menu();
      // Escolher o nível de dificuldade
      scanf( "%d", &nivel ); // entrada do usuário

      //VERIFICAR O NÍVEL DE DIFICULDADE
      // se nível menor ou igual a zero ou maior que três
      if( nivel <= 0 || nivel > 3 ) {
         // imprima
         printf( "\tVolte sempre!\n" );
         break; // sair do while
      } // fim if

      // MENU SECUNDARIO
      // chamar o menu da opção aritimética
      menu_misto();
      // aguarda a escolha da opção do usuário
      scanf( "%d", &opc );
      // se opção igual a zero
      if( opc == 0 ) break;

      // LOOP USADO PARA A OPÇÃO IGUAL A 4
      // FAÇA ENQUANTO OPC IGUAL A 4
      while( opc == 4 ) { // se verdade

         // atribuir a função número 1 a variável n1
         n1 = numero_1( nivel );
         // atribuir a função número 2 a variável n2
         n2 = numero_2( nivel );

         // segunda opção recebe um valor aleatório entre 1 e 3
         seg_opc = 1 + rand() % 3;

         // chamar a função escolha e atribuir a segunda opção
         escolha( n1, n2, seg_opc );

         // resposta recebe o valor da função perguntar
         resp = perguntar( n1, n2, sinal( seg_opc ) );

         // se resposta igual a zero
         if( resp == 0 ) {
            nivel = 0;
            opc = 0;
            break;
         } // sair do programa

         // se a resposta for igual a escolha
         if( resp == escolha( n1, n2, seg_opc ) ) {

            // boa mensagem para o aluno recebe valor aleatótio
            boa_msg = 1 + rand() % 4;
            // e chamar a função boas mensagens
            msg_boa( boa_msg );

            // contar os certos
            certo += 1;
            // chamar a função acertados
            acertados( certo,errado );

         } // fim if resposta igual a escolha
         else { // se não
            // mensagem ruim recebe valor aleatório entre 1 e 4
            ruim_msg = 1 + rand() % 4;
            // chamar a função mensagens ruins que recebe como parametro um valor
            msg_ruim( ruim_msg );

            // enquanto a resposta for diferente da escolha repetir
            while( resp != escolha( n1, n2, seg_opc) ) {

               // resposta recebe o valor da função perguntar
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

      // LOOP USADO PARA A OPÇÃO entre 1 e 3
      // se opção maior que zero e menor que 4
      while( opc > 0 && opc < 4 ) {

         //ATRIBUIR VALORES AS VARIÁVEIS N1 e N2
         // atribuir a função número 1 a variável n1
         n1 = numero_1( nivel );
         // atribuir a função número 2 a variável n2
         n2 = numero_2( nivel );

         // atribuir a confere a opção aritimética escolhida
         // escolha a opção
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

            // boa mensagem para o aluno recebe valor aleatótio
            boa_msg = 1 + rand() % 4;
            // e chamar a função boas mensagens
            msg_boa( boa_msg );

            // chamar a função acertados
            acertados( certo, errado );
            // se certo maior que 7 sair do while
            if( certo > 7 ) {
               certo = 0;
               break;
            } // fim if

         } // fim if resposta igual a escolha
         else {
            // mensagem ruim recebe valor aleatório entre 1 e 4
            ruim_msg = 1 + rand() % 4;
            // chamar a função mensagens ruins que recebe como parametro um valor
            msg_ruim( ruim_msg );

            // enquanto a resposta for diferente da escolha repita
            while( resp != escolha( n1, n2, opc) ) {

               // mensagem ruim recebe valor aleatório entre 1 e 4
               ruim_msg = 1 + rand() % 4;
               // chamar a função mensagens ruins que recebe como parametro um valor
               msg_ruim( ruim_msg );

               // contar quantas vezes errou
               errado += 1;
               // chamar a função errados
               errados( errado, certo );
               // se errado maior que 7 sair do while
               if( errado > 7 ) {
                  errado = 0;
                  opc = 0;
                  break;
               } // fim if

               // resposta recebe o valor da função perguntar
               resp = perguntar( n1, n2, sinal( opc ) );

               // se resposta igual a zero
               if( resp == 0 ) {
                  nivel = 0;
                  opc = 0;
                  break;
               } // sair do programa

            } // fim while
         } // fim else
      } // fim while opção entre 1 e 3

   } // fim primeiro while

    // pausar o sistema
    system( "pause" );

    return 0; // fim do programa

} // fim da função main

// função número 1
// retorna o primeiro número do nível
int numero_1( int niv )
{
   // variável
   int n1 = 0;
   // se nível igual a 1
   if( niv == 1 ){
      // n1 e n2 recebe números aleatórios com um digito
      n1 = alea1();
   } // fim if
   // se nível igual a 2
   else if( niv == 2 ){
      // n1 e n2 recebe números aleatórios com dois digitos
      n1 = alea2();
   } // fim if
   // se nível igual a 3
   else if( niv == 3 ){
      // n1 e n2 recebe números aleatórios com três digitos
      n1 = alea3();
   } // fim if
   // retornar o número 1
   return n1;
} // fim função número 1

// função número 2
// retornar o segundo número do nível
int numero_2( int niv )
{
   // variável
   int n2 = 0;

   // se nível igual a 1
   if( niv == 1 ){
      // n1 e n2 recebe números aleatórios com um digito
      n2 = alea1();
   } // fim if
   // se nível igual a 2
   else if( niv == 2 ){
      // n1 e n2 recebe números aleatórios com dois digitos
      n2 = alea2();
   } // fim if
   // se nível igual a 3
   else if( niv == 3 ){
      // n1 e n2 recebe números aleatórios com três digitos
      n2 = alea3();
   } // fim if
   // retornar o número 2
   return n2;
} // fim da função número 2

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

// função perguntar aguardando o nível
int perguntar( int n1, int n2, char sinal )
{
   // variável
   int resp = 0; // receber resposta do usuário

   // se n1 igual a n2
   if( n1 == n2 && sinal == '-' )
      // n2 recebe menos 1
      n2 += -1;

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

// função sinal
// retornar o sinal aritimético
char sinal( int opc )
{
   // variável para o sinal aritimético
   char sn = ' ';

   // escolher o sinal com base na opção
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
} // fim função sinal

// função escolha
int escolha( int n1, int n2, int opc )
{
   int confere = 0; // a escolha aritimética

   // chamar a vunção sinal
   sinal( opc );

   // atribuir a confere a opção aritimética escolhida
   // escolha a opção
   switch( opc )
   {
      case 1: // caso um
         // o tipo é a soma
         confere = n1 + n2;
         break; // fim tipo
      case 2: // caso dois
         // se n1 igual a n2
         if( n1 == n2 )
            // n2 recebe menos 1
            n2 += -1;
         // o tipo é a subtração
         confere = n1 - n2;
         break; // fim tipo
      case 3: // caso três
         // o tipo é a multiplicação
         confere = n1 * n2;
         break; // fim tipo
      } // fim switch
      // retornar a escolha aritimética
      return confere;
} // fim função

// função acertados
void acertados( int certos, int erros )
{
   // verificar se certo é maior que 7
   if( certos > 7 ) // se verdade
   {
      // imprimir
      printf( "\nDe %d questões você acertou %d e errou %d\n",
             certos + erros, certos, erros );
      printf( "Parabéns, Você está pronto para o próximo nível!\n" );
      printf( "Dê a vez ao próximo aluno.\n\ns" );
      // zerar o contador certo
      certos = 0;
      // pausa o sistema
      system( "pause" );
      // limpar a tela
      system( "cls" );

   } // fim if certo > 7

} // fim da função acertados

// função errados
void errados( int errou, int acertou )
{
   // verificar se errado é maior que 7
   if( errou > 7 )
   {
      // imprimir
      printf( "\nDe %d questões você acertou %d, errou %d\n",
               acertou + errou, acertou, errou );
      printf( "Por favor, peça ajuda a seu professor.\n" );
      printf( "Dê a vez ao próximo aluno.\n\n" );
      // zerar o contador errado
      errou = 0;
      // pausa o sistema
      system( "pause" );
      // limpar a tela
      system( "cls" );
   } // fim if

} // fim da função errados
