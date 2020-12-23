/*
   String: fun��o strcat( destino, in�cio )
   Autor: Pedro Filho, 23/12/2020
*/

// biblioteca
#include <stdio.h>
#include <string.h>
#include <locale.h>

// fun��o principal
int main () {

   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // cria dois vetores fonte e destino
   char fonte[50];
   char destino[50];

   //strcpy copiar a string para o vetor fonte
   strcpy(fonte,  "Eu sou a fonte ");

   // mostrar a fonte
   printf( "\nFonte: %s\n", fonte );

   // copiar a string para o destino
   strcpy(destino, "Este � o destino <-- ");

   // imprimir o destino
   printf( "\nDestino: %s\n", destino );

   // concatenar a fonte ao destino
   // coloca a string fonte depois da string destino
   strcat(destino, fonte );

   // mostrar o destino ap�s a concatena��o
   printf( "\nDestino apos concatena��o:\n%s\n", destino  );

   // fim programa
   return(0);

} // fim main
