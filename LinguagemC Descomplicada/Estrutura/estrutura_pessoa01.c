/*
   Estrutura:  1) Implemente um programa que leia o nome, a idade
   e o endereço de uma pessoa e armazene esses dados em uma estrutura.
   Em seguida, imprima na tela os dados da estrutura lida.
   Backes, André. Linguagem C (p. 157). GEN LTC. Edição do Kindle.
   Auto: Pedro Filho, 02/01/2021
*/

// biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

// cria estrutura pessoa
struct pessoa {
   char nome[ 50 ];
   char endereco[ 50 ];
   int idade;
};

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // cria objeto
   struct pessoa ps;

   // entrada de dados
   printf( "Nome: " );
   // limpa o buffer
   fflush( stdin );
   // entrada do usuário
   fgets( ps.nome, 50, stdin );

   // entrada da idade
   printf( "Idade: " );
   scanf( "%d", &ps.idade );

   // entrada do endereço
   printf( "Endereço: " );
   // limpar o buffer
   fflush( stdin );
   // entrada do usuário
   fgets( ps.endereco, 50, stdin );

   system( "cls" );
   // mostrar o resultado
   printf( "Cadastro de pessoas.\n" );
   printf( "Nome: %s", ps.nome );
   printf( "Endereço: %s", ps.endereco );
   printf( "Idade: %d\n", ps.idade );

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN
