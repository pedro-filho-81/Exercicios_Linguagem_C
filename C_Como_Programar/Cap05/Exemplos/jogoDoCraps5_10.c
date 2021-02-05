/*
   Quest�o: /* Fig. 5.10: fig05_10.c  2 Craps
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 130). Edi��o do Kindle.
   @Pedro Filho, 01/02/2021
*/

// Incluir Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

// enumera��o representa o status do jogo
enum Status { CONTINUAR, VENCEU, PERDEU };

// PROT�TIPO
int rolarDados( void );

// FUN��O PRINCIPAL
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // vari�veis
   int soma = 0;
   int meusPontos = 0;

   enum Status statusDoJogo;

   // cabe�alho
   printf( "JOGO DO CRAPS\n" );

   // gerador rand�mico
   srand( time( NULL ) );

   // soma recebe a fun��o rolar dados
   soma = rolarDados();

   // determina o status do jogo conforme o resultado da soma
   switch( soma )
   {
      // vence na primeira jogada quem tirar
      case 7:
      case 11:
         statusDoJogo = VENCEU;
         break;   // SAIR

      // perde na primeira jogada
      case 2:
      case 3:
      case 12:
         statusDoJogo + PERDEU;
         break;

      // lembrar os pontos
      default:
         statusDoJogo = CONTINUAR;
         meusPontos = soma;
         printf( "Meus pontos s�o %d\n", meusPontos );
         break;

   } // fim switch

   // enquanto o status do jogo igual a continui fa�a
   while( statusDoJogo == CONTINUAR )
   {
      // SOMA recebe a fun��o rolar dados
      soma = rolarDados();

      // determinar o status do jogo
      if( soma == meusPontos ) {
         // jogo termina e o jogador vence
         statusDoJogo = VENCEU;
      } // FIM IF

      // se n�o
      else {
         // se soma igual a sete
         if( soma == 7 ) {
            // fim do jogo o jogador perdeu
            statusDoJogo = PERDEU;
         } // FIM if
      } // fim else
   } // FIM WHIle

   // mostrar mensagem de vit�ria ou derrota
   if( statusDoJogo == VENCEU ) {
      // IMPRIMA
      printf( "Voc� VENCEU!\n" );
   } // fim if

   // se n�o
   else {
      // imprima
      printf( "Voc� PERDEU!\n" );
   }// fim se n�o

   // pular linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN

// cria a fun��o rolarDados
int rolarDados( void )
{
   // vari�veis
   int dado1 = 0;
   int dado2 = 0;
   int somaDosDados = 0;

   // dados recebem valores aleat�rios entre 1 e 6
   dado1 = 1 + rand() % 6;
   dado2 = 1 + rand() % 6;

   // somar os dados
   somaDosDados = dado1 + dado2;

   // imprimir
   printf( "Jogador rolou: %d + %d = %d\n", dado1, dado2, somaDosDados );

   // retornar a soma
   return somaDosDados;

}  // fim fun��o somaDosDados
