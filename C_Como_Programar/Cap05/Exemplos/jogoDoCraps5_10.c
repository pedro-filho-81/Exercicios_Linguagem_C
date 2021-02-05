/*
   Questão: /* Fig. 5.10: fig05_10.c  2 Craps
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 130). Edição do Kindle.
   @Pedro Filho, 01/02/2021
*/

// Incluir Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

// enumeração representa o status do jogo
enum Status { CONTINUAR, VENCEU, PERDEU };

// PROTÓTIPO
int rolarDados( void );

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // variáveis
   int soma = 0;
   int meusPontos = 0;

   enum Status statusDoJogo;

   // cabeçalho
   printf( "JOGO DO CRAPS\n" );

   // gerador randômico
   srand( time( NULL ) );

   // soma recebe a função rolar dados
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
         printf( "Meus pontos são %d\n", meusPontos );
         break;

   } // fim switch

   // enquanto o status do jogo igual a continui faça
   while( statusDoJogo == CONTINUAR )
   {
      // SOMA recebe a função rolar dados
      soma = rolarDados();

      // determinar o status do jogo
      if( soma == meusPontos ) {
         // jogo termina e o jogador vence
         statusDoJogo = VENCEU;
      } // FIM IF

      // se não
      else {
         // se soma igual a sete
         if( soma == 7 ) {
            // fim do jogo o jogador perdeu
            statusDoJogo = PERDEU;
         } // FIM if
      } // fim else
   } // FIM WHIle

   // mostrar mensagem de vitória ou derrota
   if( statusDoJogo == VENCEU ) {
      // IMPRIMA
      printf( "Você VENCEU!\n" );
   } // fim if

   // se não
   else {
      // imprima
      printf( "Você PERDEU!\n" );
   }// fim se não

   // pular linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN

// cria a função rolarDados
int rolarDados( void )
{
   // variáveis
   int dado1 = 0;
   int dado2 = 0;
   int somaDosDados = 0;

   // dados recebem valores aleatórios entre 1 e 6
   dado1 = 1 + rand() % 6;
   dado2 = 1 + rand() % 6;

   // somar os dados
   somaDosDados = dado1 + dado2;

   // imprimir
   printf( "Jogador rolou: %d + %d = %d\n", dado1, dado2, somaDosDados );

   // retornar a soma
   return somaDosDados;

}  // fim função somaDosDados
