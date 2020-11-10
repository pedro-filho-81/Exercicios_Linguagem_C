/* Função: 5.20 Exibindo o quadrado de um caractere. Modifique a função criada
   no Exercício 5.19 para formar um quadrado a partir de qualquer caractere contido
   no parâmetro de caractere fillCharacter. Assim, se side é 5 e fillCharacter é ‘#’,
   então essa função deverá imprimir:
   Deitel, Paul; Deitel, Harvey. C  Como Programar (Página 154).  . Edição do Kindle.
   Pedro Filho, 10/11/2020*/

// incluir bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// protótipo
void quadro_de_caracteres( int size, char c );

// função principal
int main()
{
   // seleciona o idioma Português
   setlocale(LC_ALL, "Portuguese" );

   // variáveis
   int tamanho = 0;
   char caracter;

   printf( "QUADRADO DE CARACTERES\n" );
   // entrada de dados
   printf( "Informe o tamanho do quadrado: " );
   scanf( "%d", &tamanho );

   printf( "Informe o caractere: " );
   setbuf(stdin, NULL );
   caracter = getchar();

   printf( "\n" ); // pular uma linha

   //cahamar a função quadro_de_caracteres
   quadro_de_caracteres( tamanho, caracter );

    printf( "\n" ); // pula linha

   system( "pause" ); // pausa o sistema

   return 0; // fim do programa

} // fim main

// função quadro_de_caracteres
void quadro_de_caracteres( int size, char c )
{  // loop para a coluna do quadrado
   for( int i = 1; i <= size; i++ )
   {  // loop para a linha do quadrado
      for( int j = 1; j <= size; j++ )
      {  // imprime o caractere e um espaço
         printf( "%c ", c );
      } // fim for interno
      // pula uma linha
      printf( "\n" );
   } // fim for externo
} // fim função
