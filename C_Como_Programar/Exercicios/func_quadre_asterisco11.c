/* Fun��o: Exibindo um quadrado de asteriscos. Escreva uma fun��o que apresente
   um quadrado s�lido de asteriscos cujo lado � especificado no par�metro inteiro side.
   Por exemplo, se side � 4, a fun��o exibe:
   Deitel, Paul; Deitel, Harvey. C  Como Programar (P�gina 154).  . Edi��o do Kindle.
   Pedro Filho, /11/2020*/

// incluir bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// prot�tipo
void quadro( int side );

// fun��o principal
int main()
{
   // seleciona o idioma Portugu�s
   setlocale(LC_ALL, "Portuguese" );

   // vari�vel
   int tamanho = 4;

   // chamar a fun��o quadrado
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
      {  // imprime asterisco e espa�o vazio
         // espa�o para melhorar o visual
         printf( "* " );
      } // fim for interno
      // pular uma linha
      printf( "\n" );
   } // fim for externo
} // fim fun��o quadro
