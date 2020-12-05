/*
   2.16 Aritmética. Escreva um programa que peça ao usuá-  rio que digite
   dois números, obtenha esses números e  imprima a soma, o produto,
   a diferença, o quociente e o  módulo (resto da divisão).
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 41). Edição do Kindle.
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

   //variáveis
   int num01;
   int num02;

   //entrada de dados
   printf( "Digite um número: " );
   scanf( "%d", &num01 );
   printf("Digite outro número: ");
   scanf( "%d", &num02 );

   // Calcular
   int soma = num01 + num02;
   int produto = num01 * num02;
   int diferenca = num01 - num02;
   int quociente = num01 / num02;
   int modulo = num01 % num02;

   //Mostra resultaado
   printf("\nOs numeros digitados foram %d e %d.", num01, num02);
   printf( "\nResultado das operações aritiméticas:");
   printf( "\nSoma = %d, \nProduto = %d, \nDiferenca = %d, \nQuociente = %d, \nModulo %d.\n",
      soma, produto, diferenca, quociente, modulo);

  return 0; // Programa executado com sucesso

} //fim de main
