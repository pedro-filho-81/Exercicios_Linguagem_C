/*
   Aloca��o: 2) Crie uma estrutura representando um aluno de uma
   disciplina. Essa estrutura deve conter o n�mero de matr�cula
   do aluno, seu nome e as notas de tr�s provas. Escreva um programa
   que mostre o tamanho em byte dessa estrutura.
   Backes, Andr�. Linguagem C (p. 232). GEN LTC. Edi��o do Kindle.
   Auto: Pedro Filho, 09/01/2021
*/

// biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>3

// cria uma estrutura para alunos
struct cadAlunos{
   int matricula;
   char nomeAluno[ 30 ];
   float nota[ 3 ];
};

// FUN��O PRINCIPAL
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // vari�vel
   struct cadAlunos alunos;

   // imprime
   printf( "A fun��o sizeof()\nMostra o tamanho da memoria usada "
          "pela estrutura cadAlunos.\n" );
   printf( "sizeof( struct cadAlunos ) - usa %d bytes da memoria do computador.\n",
          sizeof( struct cadAlunos ) );

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN
