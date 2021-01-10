/*
   Alocação: 2) Crie uma estrutura representando um aluno de uma
   disciplina. Essa estrutura deve conter o número de matrícula
   do aluno, seu nome e as notas de três provas. Escreva um programa
   que mostre o tamanho em byte dessa estrutura.
   Backes, André. Linguagem C (p. 232). GEN LTC. Edição do Kindle.
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

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // variável
   struct cadAlunos alunos;

   // imprime
   printf( "A função sizeof()\nMostra o tamanho da memoria usada "
          "pela estrutura cadAlunos.\n" );
   printf( "sizeof( struct cadAlunos ) - usa %d bytes da memoria do computador.\n",
          sizeof( struct cadAlunos ) );

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN
