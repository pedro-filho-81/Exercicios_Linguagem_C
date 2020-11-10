/* Função: Exibindo um quadrado de asteriscos. Escreva uma função que apresente
   um quadrado sólido de asteriscos cujo lado é especificado no parâmetro inteiro side.
   Por exemplo, se side é 4, a função exibe:
   Deitel, Paul; Deitel, Harvey. C  Como Programar (Página 154).  . Edição do Kindle.
   Pedro Filho, /11/2020*/

// incluir bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// protótipo
void quadro( int side );

// função principal
int main()
{
   // seleciona o idioma Português
   setlocale(LC_ALL, "Portuguese" );

   // variável
   int tamanho = 4;

   // chamar a função quadrado
   quadro( tamanho );

    printf( "\n" ); // pula linha

   system( "pause" ); // pausa o sistema

   return 0; // fim do programa

} // fim main

// function quadro
void quadro( int side )
{  // loop para a coluna
   for( int i = 1; i <= side; i++ )
   { // loop para a linha
      for( int j = 1; j <= side; j++ )
      {  // imprime asterisco e espaço vazio
         // espaço para melhorar o visual
         printf( "* " );
      } // fim for interno
      // pular uma linha
      printf( "\n" );
   } // fim for externo
} // fim função quadro
