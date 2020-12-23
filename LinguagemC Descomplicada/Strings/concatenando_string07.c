/*
   String: fun��o strcat( destino, in�cio )
   Autor: Pedro Filho, 23/12/2020
*/

// biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// fun��o principal
int main () {

   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // cria dois vetores fonte e destino
   char origem[50];
   char destino[50];

   //strcpy copiar a string para o vetor fonte
   strcpy(origem,  "Eu sou a origem ");

   // mostrar a fonte
   printf( "\nOrigem: %s\n", origem );

   // copiar a string para o destino
   strcpy(destino, "Eu sou o destino <-- ");

   // imprimir o destino
   printf( "\nDestino: %s\n", destino );

   // concatenar a fonte ao destino
   // coloca a string fonte depois da string destino
   strcat( destino, origem );

   // mostrar o destino ap�s a concatena��o
   printf( "\nDestino depois concatena��o:\n%s\n", destino  );

   // pausar o sistema
   system( "pause" );

   // fim programa
   return(0);

} // fim main
