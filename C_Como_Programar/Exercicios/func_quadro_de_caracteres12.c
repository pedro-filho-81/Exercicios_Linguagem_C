/* Fun��o: 5.20 Exibindo o quadrado de um caractere. Modifique a fun��o criada
   no Exerc�cio 5.19 para formar um quadrado a partir de qualquer caractere contido
   no par�metro de caractere fillCharacter. Assim, se side � 5 e fillCharacter � �#�,
   ent�o essa fun��o dever� imprimir:
   Deitel, Paul; Deitel, Harvey. C  Como Programar (P�gina 154).  . Edi��o do Kindle.
   Pedro Filho, 10/11/2020*/

// incluir bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// prot�tipo
void quadro_de_caracteres( int size, char c );

// fun��o principal
int main()
{
   // seleciona o idioma Portugu�s
   setlocale(LC_ALL, "Portuguese" );

   // vari�veis
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

   //cahamar a fun��o quadro_de_caracteres
   quadro_de_caracteres( tamanho, caracter );

    printf( "\n" ); // pula linha

   system( "pause" ); // pausa o sistema

   return 0; // fim do programa

} // fim main

// fun��o quadro_de_caracteres
void quadro_de_caracteres( int size, char c )
{  // loop para a coluna do quadrado
   for( int i = 1; i <= size; i++ )
   {  // loop para a linha do quadrado
      for( int j = 1; j <= size; j++ )
      {  // imprime o caractere e um espa�o
         printf( "%c ", c );
      } // fim for interno
      // pula uma linha
      printf( "\n" );
   } // fim for externo
} // fim fun��o
