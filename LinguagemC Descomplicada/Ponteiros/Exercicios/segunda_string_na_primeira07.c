/*
   Ponteiros: 7) Elabore uma função que receba duas strings como
   parâmetros e verifique se a segunda string ocorre dentro da primeira.
   Use aritmética de ponteiros para acessar os caracteres das strings.
   Backes, André. Linguagem C (p. 213). GEN LTC. Edição do Kindle.
   Auto: Pedro Filho, 05/01/2021
*/

// biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// protótipo
int pesquisar( char *string1, char *string2 );

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // cria as strings
   char string1[ 100 ];
   char string2[ 50 ];
   int resposta;

   // entrada de dados
   printf( "Digite uma palavra ou uma frase: " );
   // limpa o buffer
   fflush( stdin );
   // entrada do usuário até 100 caracteres incluindo espaços
   fgets( string1, 100, stdin );

   // entrada da segunda string
   printf( "Digite outra palavra ou frase para verificar se tem na primeira: " );
   // limpa o buffer
   fflush( stdin );
   // entrada do usuário até 100 caracteres incluindo espaços
   fgets( string2, 50, stdin );

   // chamar a função pesquisar e adicionar a resposta
   resposta = pesquisar( string1, string2 );

   // se a resposta for 1
   if( resposta == 1)
   {
      // imprima
      printf( "A string %s está contida na primeira string.\n", string2 );
   } // fim if

   // se não
   else
   {
      printf( "A string NÃO está contida na primeira strind.\n" );
   } // fim else

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN

// função pesquisar
int pesquisar(char *string1, char *string2)
{
   // cria variáveis
   int i, j, aux = 0;

   // loop para percorrer a primeira string até o final
   for(i = 0, j = 0; (*(string1 + i)) != '\0'; i++ )
   {
      // enquanto string um igual a string dois faça
      while( (*(string1 + i)) == (*(string2 + j)) )
      {
         // incrementa i e j inicializados no for
         // e servem como os contadores dos ponteiros
         i++;
         j++;

         // se a segunda string  igual a pula linha ou fim da string
         if( (*(string2 + j)) == '\n' || (*(string2 + j)) == '\0')
            // retorne 1
            return 1;

         // se  a primeira string diferente da segunda
         else if( (*(string1 + i)) != (*(string2 + j)) )

            // auxiliar recebe zero
            aux = 0;
      } // fim while
   } // fim for

   // retorne auxiliar
   return aux;
} // fim função pesquisar
