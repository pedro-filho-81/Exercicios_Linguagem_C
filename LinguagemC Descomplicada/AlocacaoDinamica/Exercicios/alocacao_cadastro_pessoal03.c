/*
   Aloca��o: 3) Crie uma estrutura chamada Cadastro. Essa estrutura
   deve conter o nome, a idade e o endere�o de uma pessoa. Agora,
   escreva uma fun��o que receba um inteiro positivo N e retorne
   o ponteiro para um vetor de tamanho N, alocado dinamicamente,
   dessa estrutura. Solicite tamb�m que o usu�rio digite os dados
   desse vetor dentro da fun��o.
   Backes, Andr�. Linguagem C (p. 232). GEN LTC. Edi��o do Kindle.
   Auto: Pedro Filho, 09/01/2021
*/

// biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// cria estrutura
typedef struct{
   char nome[ 30 ], endereco[ 50 ];
   int idade;
} cadPessoas;

// prot�tipo
cadPessoas* iniciaEstrutura( int num );
void mostraCadastro( cadPessoas *pessoas, int num );

// FUN��O PRINCIPAL
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // vari�vel
   int numeroDePessoas;

   // cria ponteiro para o cadastro de pessoas
   cadPessoas *ptrCadPessoas;

   // entrada de dados
   printf( "Quantas pessoas deseja cadastrar? " );
   scanf( "%d", &numeroDePessoas );

   // imprima cabe�alho
   printf( "ENTRADA DE DADOS\n" );

   // ponteiro recebe a resposta da fun��o
   ptrCadPessoas = iniciaEstrutura( numeroDePessoas );

   // limpa a tela
   system( "cls" );

   // cabe�alho
   printf( "MOSTRA CADASTRO DE PESSOAS\n" );

   // chamar a fun��o mostra cadastro
   mostraCadastro( ptrCadPessoas, numeroDePessoas );

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // limpar memoria
   free( ptrCadPessoas );
   // zerar resto de memoria
   ptrCadPessoas = NULL;

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN

// fun��o inicia estrutura
cadPessoas* iniciaEstrutura( int num )
{
	//CRIA o ponteiro do cadastro
   cadPessoas *ptrCadastro;

   // alocando memoria com malloc()
	ptrCadastro = ( cadPessoas* ) malloc( num * sizeof( cadPessoas ) );

	// verifica se tem memoria suficiente
	if( ptrCadastro == NULL )
   {
      // imprime
		printf("ERRO! Memoria insuficiente!\n");
      system( "pause" );
		exit(1);
	} // fim if

	// loop para entrada de dados
	for( int i = 0; i < num; i++)
	{
      // Entrada de dados
      printf( "Informe o nome: " );
      // limpar o vuffer
		setbuf(stdin, NULL);
		// entrada do usu�rio
		fgets( ptrCadastro[ i ].nome, 30, stdin);

		// imprime
		printf( "Idade: " );
		scanf("%d", &ptrCadastro[ i ].idade);

		// imprime
		printf( "Endere�o: " );
		// limpa o buffer
		setbuf(stdin, NULL);
		// usu�rio
		fgets(ptrCadastro[ i ].endereco, 50, stdin);
	} // fim for

	// retornar os valores do ponteiro
	return ptrCadastro;
} // fim da fun��o iniciaEstrutura

// fun��o mostraCadastro
void mostraCadastro( cadPessoas *pessoas, int num )
{
   // loop para mostrar os cadastros
   for( int i = 0; i < num; i++ )
   {
      // mostrar cadastro
      printf( "Nome: %s", pessoas[ i ].nome );
      printf( "Idade: %d\n", pessoas[ i ].idade );
      printf( "Endere�o: %s\n", pessoas[ i ].endereco );
   } // fim for

}  // fim fun��o mostrar cadastro
