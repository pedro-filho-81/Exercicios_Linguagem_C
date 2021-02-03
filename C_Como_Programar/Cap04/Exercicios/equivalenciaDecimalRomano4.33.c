/*
   Questão: 4.33 Equivalente de valores decimais em números romanos. Escreva
   um programa que imprima uma tabela  de todos os equivalentes em números
   romanos dos nú-  meros decimais no intervalo de 1 a 100.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 111). Edição do Kindle.
   Autor: @Pedro Filho, 02/02/2021
*/

// Incluir Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // variável
   int i, j, k;

   // cabeçalho
   printf( "EQUIVALÊNCIA DECIMAL ROMANOS\n" );
   printf( "%10s%10s\n", "Decimal", "Romano" );

   for( i = 1; i <= 100; i++ ) {

      // imprime
      printf( "%8d", i );
      // enquanto
      switch( i ) {
         case 1:
         case 2:
         case 3:

            // imprime oito espaços em branco
            printf( "%8s", " " );
            for( j = 1; j <= i; j++ ) {

               // imprime
               printf( "I" );

            } // fim for j
      } // fim switch

      // se i igual a quatro imprima iv
      if( i == 4 ) printf( "%8s", "IV" );

      // se i igual a quatro imprima iv
      if( i == 5 ) printf( "%9s\n", "V" );

      // enquanto
      switch( i ) {
         case 6:
         case 7:
         case 8:

            // imprime nove espaços em branco
            printf( "%8s", "V" );
            for( j = 6; j <= i; j++ ) {

               // imprime
               printf( "I" );
            } // fim for j
      } // fim switch

      // se i igual a quatro imprima iv
      if( i == 9 ) printf( "%8s", "IX" );

      // se i igual a quatro imprima iv
      if( i == 10 ) printf( "%9s\n", "X" );

      // enquanto
      switch( i ) {
         case 11:
         case 12:
         case 13:

            // imprime nove espaços
            printf( "%8s", "X" );
            for( j = 11; j <= i; j++ ) {

               // imprime
               printf( "I" );
            } // fim for j
      } // fim switch

      // se i igual a quatro imprima iv
      if( i == 14 ) printf( "%8s", "XIV" );

      // se i igual a quatro imprima iv
      if( i == 15 ) printf( "%9s\n", "XV" );

      // enquanto
      switch( i ) {
         case 16:
         case 17:
         case 18:

            // imprime nove espaços
            printf( "%8s", "XV" );
            for( j = 16; j <= i; j++ ) {

               // imprime
               printf( "I" );
            } // fim for j
      } // fim switch

      // se i igual a quatro imprima iv
      if( i == 19 ) printf( "%8s", "XIX" );

      // se i igual a quatro imprima iv
      if( i == 20 ) printf( "%9s\n", "XX" );

      // enquanto
      switch( i ) {
         case 21:
         case 22:
         case 23:

            // imprime nove espaços
            printf( "%8s", "XX" );
            for( j = 21; j <= i; j++ ) {

               // imprime
               printf( "I" );
            } // fim for j
      } // fim switch

      // se i igual a quatro imprima iv
      if( i == 24 ) printf( "%8s", "XXIV" );

      // se i igual a quatro imprima iv
      if( i == 25 ) printf( "%9s\n", "XXV" );

      // enquanto
      switch( i ) {
         case 26:
         case 27:
         case 28:

            // imprime nove espaços
            printf( "%8s", "XXV" );
            for( j = 26; j <= i; j++ ) {

               // imprime
               printf( "I" );
            } // fim for j
      } // fim switch

      // se i igual a quatro imprima iv
      if( i == 29 ) printf( "%8s", "XXIX" );

      // se i igual a quatro imprima iv
      if( i == 30 ) printf( "%9s\n", "XXX" );

      // enquanto
      switch( i ) {
         case 31:
         case 32:
         case 33:

            // imprime nove espaços
            printf( "%8s", "XXX" );
            for( j = 31; j <= i; j++ ) {

               // imprime
               printf( "I" );
            } // fim for j
      } // fim switch

      // se i igual a quatro imprima iv
      if( i == 34 ) printf( "%8s", "XXXIV" );

      // se i igual a quatro imprima iv
      if( i == 35 ) printf( "%9s\n", "XXXV" );

      // enquanto
      switch( i ) {
         case 36:
         case 37:
         case 38:

            // imprime nove espaços
            printf( "%8s", "XXXV" );
            for( j = 36; j <= i; j++ ) {

               // imprime
               printf( "I" );
            } // fim for j
      } // fim switch

      // se i igual a quatro imprima iv
      if( i == 39 ) printf( "%8s", "XXXIX" );

      // se i igual a quatro imprima iv
      if( i == 40 ) printf( "%9s\n", "XL" );

      // enquanto
      switch( i ) {
         case 41:
         case 42:
         case 43:

            // imprime nove espaços
            printf( "%8s", "XL" );
            for( j = 41; j <= i; j++ ) {

               // imprime
               printf( "I" );
            } // fim for j
      } // fim switch

      // se i igual a quatro imprima iv
      if( i == 44 ) printf( "%8s", "XLIV" );

      // se i igual a quatro imprima iv
      if( i == 45 ) printf( "%9s\n", "XLV" );

      // enquanto
      switch( i ) {
         case 46:
         case 47:
         case 48:

            // imprime nove espaços
            printf( "%8s", "XLV" );
            for( j = 46; j <= i; j++ ) {

               // imprime
               printf( "I" );
            } // fim for j
      } // fim switch

      // se i igual a quatro imprima iv
      if( i == 49 ) printf( "%8s", "XLIX" );

      // se i igual a quatro imprima iv
      if( i == 50 ) printf( "%9s\n", "L" );

      // enquanto
      switch( i ) {
         case 51:
         case 52:
         case 53:

            // imprime nove espaços
            printf( "%8s", "L" );
            for( j = 51; j <= i; j++ ) {

               // imprime
               printf( "I" );
            } // fim for j
      } // fim switch

      // se i igual a quatro imprima iv
      if( i == 54 ) printf( "%8s", "LIV" );

      // se i igual a quatro imprima iv
      if( i == 55 ) printf( "%9s\n", "LV" );

      // enquanto
      switch( i ) {
         case 56:
         case 57:
         case 58:

            // imprime nove espaços
            printf( "%8s", "LV" );
            for( j = 56; j <= i; j++ ) {

               // imprime
               printf( "I" );
            } // fim for j
      } // fim switch

      // se i igual a quatro imprima iv
      if( i == 59 ) printf( "%8s", "LIX" );

      // se i igual a quatro imprima iv
      if( i == 60 ) printf( "%9s \n", "LX" );

      // enquanto
      switch( i ) {
         case 61:
         case 62:
         case 63:

            // imprime nove espaços
            printf( "%8s", "LX" );
            for( j = 61; j <= i; j++ ) {

               // imprime
               printf( "I" );
            } // fim for j
      } // fim switch

      // se i igual a quatro imprima iv
      if( i == 64 ) printf( "%8s", "LXIV" );

      // se i igual a quatro imprima iv
      if( i == 65 ) printf( "%9s \n", "LXV" );

      // enquanto
      switch( i ) {
         case 66:
         case 67:
         case 68:

            // imprime nove espaços
            printf( "%8s", "LXV" );
            for( j = 66; j <= i; j++ ) {

               // imprime
               printf( "I" );
            } // fim for j
      } // fim switch

      // se i igual a quatro imprima iv
      if( i == 69 ) printf( "%8s", "LXIX" );

      // se i igual a quatro imprima iv
      if( i == 70 ) printf( "%9s \n", "LXX" );

      // enquanto
      switch( i ) {
         case 71:
         case 72:
         case 73:

            // imprime nove espaços
            printf( "%8s", "LXX" );
            for( j = 71; j <= i; j++ ) {

               // imprime
               printf( "I" );
            } // fim for j
      } // fim switch

      // se i igual a quatro imprima iv
      if( i == 74 ) printf( "%8s", "LXIV" );

      // se i igual a quatro imprima iv
      if( i == 75 ) printf( "%9s \n", "LXXV" );

      // enquanto
      switch( i ) {
         case 76:
         case 77:
         case 78:

            // imprime nove espaços
            printf( "%8s", "LXXV" );
            for( j = 76; j <= i; j++ ) {

               // imprime
               printf( "I" );
            } // fim for j
      } // fim switch

      // se i igual a quatro imprima iv
      if( i == 79 ) printf( "%8s", "LXXIX" );

      // se i igual a quatro imprima iv
      if( i == 80 ) printf( "%9s \n", "LXXX" );

      // enquanto
      switch( i ) {
         case 81:
         case 82:
         case 83:

            // imprime nove espaços
            printf( "%8s", "LXXX" );
            for( j = 81; j <= i; j++ ) {

               // imprime
               printf( "I" );
            } // fim for j
      } // fim switch

      // se i igual a quatro imprima iv
      if( i == 84 ) printf( "%8s", "LXXXIV" );

      // se i igual a quatro imprima iv
      if( i == 85 ) printf( "%9s \n", "LXXXV" );

      // enquanto
      switch( i ) {
         case 86:
         case 87:
         case 88:

            // imprime nove espaços
            printf( "%8s", "LXXX" );
            for( j = 86; j <= i; j++ ) {

               // imprime
               printf( "I" );
            } // fim for j
      } // fim switch

      // se i igual a quatro imprima iv
      if( i == 89 ) printf( "%8s", "LXXXIX" );

      // se i igual a quatro imprima iv
      if( i == 90 ) printf( "%9s \n", "XC" );

      // enquanto
      switch( i ) {
         case 91:
         case 92:
         case 93:

            // imprime nove espaços
            printf( "%8s", "LXXX" );
            for( j = 91; j <= i; j++ ) {

               // imprime
               printf( "I" );
            } // fim for j
      } // fim switch

      // se i igual a quatro imprima iv
      if( i == 94 ) printf( "%8s", "XC" );

      // se i igual a quatro imprima iv
      if( i == 95 ) printf( "%9s \n", "XCV" );

      // enquanto
      switch( i ) {
         case 96:
         case 97:
         case 98:

            // imprime nove espaços
            printf( "%8s", "LXXX" );
            for( j = 96; j <= i; j++ ) {

               // imprime
               printf( "I" );
            } // fim for j
      } // fim switch

      // se i igual a quatro imprima iv
      if( i == 99 ) printf( "%8s", "XCIX" );

      // se i igual a quatro imprima iv
      if( i == 100 ) printf( "%9s \n", "C" );


   } // fim for até 10



   // pular linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN
