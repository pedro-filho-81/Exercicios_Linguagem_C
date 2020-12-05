/*
   2.16 Aritm�tica. Escreva um programa que pe�a ao usu�-  rio que digite
   dois n�meros, obtenha esses n�meros e  imprima a soma, o produto,
   a diferen�a, o quociente e o  m�dulo (resto da divis�o).
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 41). Edi��o do Kindle.
   Autor: Pedro Filho, 05/12/2020.
*/
// Inclua biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//funcao inicio()
int main(void)
{ // inicio de main


   setlocale(LC_ALL, "Portuguese" );

   //vari�veis
   int num01;
   int num02;

   //entrada de dados
   printf( "Digite um n�mero: " );
   scanf( "%d", &num01 );
   printf("Digite outro n�mero: ");
   scanf( "%d", &num02 );

   // Calcular
   int soma = num01 + num02;
   int produto = num01 * num02;
   int diferenca = num01 - num02;
   int quociente = num01 / num02;
   int modulo = num01 % num02;

   //Mostra resultaado
   printf("\nOs numeros digitados foram %d e %d.", num01, num02);
   printf( "\nResultado das opera��es aritim�ticas:");
   printf( "\nSoma = %d, \nProduto = %d, \nDiferenca = %d, \nQuociente = %d, \nModulo %d.\n",
      soma, produto, diferenca, quociente, modulo);

  return 0; // Programa executado com sucesso

} //fim de main
