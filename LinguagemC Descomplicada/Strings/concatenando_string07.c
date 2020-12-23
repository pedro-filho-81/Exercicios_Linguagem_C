/*
   String: função strcat( destino, início )
   Autor: Pedro Filho, 23/12/2020
*/

// biblioteca
#include <stdio.h>
#include <string.h>
#include <locale.h>

// função principal
int main () {

   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // cria dois vetores fonte e destino
   char fonte[50];
   char destino[50];

   //strcpy copiar a string para o vetor fonte
   strcpy(fonte,  "Eu sou a fonte ");

   // mostrar a fonte
   printf( "\nFonte: %s\n", fonte );

   // copiar a string para o destino
   strcpy(destino, "Este é o destino <-- ");

   // imprimir o destino
   printf( "\nDestino: %s\n", destino );

   // concatenar a fonte ao destino
   // coloca a string fonte depois da string destino
   strcat(destino, fonte );

   // mostrar o destino após a concatenação
   printf( "\nDestino apos concatenação:\n%s\n", destino  );

   // fim programa
   return(0);

} // fim main
