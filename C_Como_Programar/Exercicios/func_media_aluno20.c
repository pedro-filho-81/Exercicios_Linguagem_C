/*
    Função: 5.30 Escreva uma função qualityPoints que peça a média  de um
    estudante e retorne 4 se a média for 90-100, 3 se  a média for 80-89,
    2 se a média for 70-79, 1 se a média  for 60-69 e 0 se a média for menor que 60.
    Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 155). Edição do Kindle.
    Autor: Pedro Filho, 16/11/2020.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// protótipo
int media( int med );

int main()
{
    // seleciona o idioma português
    setlocale( LC_ALL, "Portuguese" );

	// variável
	int med = 0;
   int contador = 1;

  //faça enquanto contador igual a 1
  while( contador == 1) {

    // entrada de dados
    printf("Informe a média do aluno entre 0 e 100: ");
    scanf("%d", &med);

    switch( media( med ) )
    {
      case 4:
         printf( "Média: 4\n" );
         break;
      case 3:
         printf( "Média: 3\n" );
         break;
      case 2:
         printf( "Média: 2\n" );
         break;
      case 1:
         printf( "Média: 1\n" );
         break;
      case 0:
         printf( "Média: 0\n" );
         break;
    } // fim switch

    //Deseja continuar?
    printf("Deseja continuar: [1-SIM / 2-NÃO]? ");
    scanf("%d", &contador);

  } // fim while

    // pula linha
    printf( "\n" );

    // pausa o sistema
    system( "pause" );

    return 0; // fim do programa

} // fim da função main

// function media
int media( int med )
{
   // se média entre 90 e cem
   if( med >=90 && med <= 100 )
      return 4; // retornar 4
   // se entre 80 e 89
   else if( med >=80 && med <= 89 )
      return 3; // retornar 3
   // se entre 70 e 79
   else if( med >= 70 && med <= 79 )
      return 2; // retornar 2
   // se entre 60 e 69
   else if( med >= 60 && med <= 69 )
      return 1; // retornar 1
   else // se não
      return 0; // retornar 0
} // fim função
