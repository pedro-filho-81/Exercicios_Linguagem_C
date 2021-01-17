/*
   Quest�o: 3.22 Pr�-incrementando versus p�s-incrementando.  Escreva um
   programa que demonstre a diferen�a entre  pr�-decrementar e p�s-decrementar
   usando o operador  de decremento --.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 75). Edi��o do Kindle.
   Autor: Pedro Filho, 17/01/2021
*/

// Incluir Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// FUN��O PRINCIPAL
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // vari�vel
   int num = 10;

   // imprime pr�-Incremento
   printf( "\tPR�-INCREMENTO P�S-INCREMENTO\n" );
   printf( "int num = 10 - cria a vari�vel.\n" );
   printf( "Imprime a vari�vel num = %d\n", num );
   printf( "Imprimindo vari�vel usando o pr�-incremento ( ++num ) num = %d\n", ++num );
   printf( "Com o pr�-incremento a vari�vel come�a com +1\n\n" );

   // atribuindo 10 a num
   num = 10;
   // imprimindo
   printf( "int num = 10 - cria a vari�vel.\n" );
   printf( "Imprime a vari�vel num = %d\n", num );
   printf( "imprimindo vari�vel usando o p�s-incremento ( num++ ) num = %d\n", num++ );
   printf( "Com o p�s-incremento a vari�vel come�a com o mesmo valor.\n\n" );
   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN
