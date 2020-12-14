/*
   /* Fig. 7.7: fig07_07.c
   2 Cubo de uma variável usando chamada por referência.
   3 Exemplo mostra a utilização dos operadores ( * ) e ( & )
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 212). Edição do Kindle.
   Pedro Filho 13/12/2020
*/

// bibliotecas
#include <stdio.h>
#include <locale.h>

// protótipo USANDO PONTEIRO
int valorDoCubo( int *nPtr );

int main()
{
   // português
   setlocale( LC_ALL, "Portuguese" );

   // variável
   int num = 5; // VARIÁVEL RECEBE UM INTEIRO

   // mostra o valor do cubo
   // CHAMAR A FUNÇÃO VALOR DO CUBO E PASSAR
   // COMO PARÂMETRO O ENDEREÇO DA VARIÁVEL ATRÁVES DO OPERADOR ( & )
   printf( "\tO valor do cubo de 5 é %d\n ", valorDoCubo( &num ) );

}  // fim main

// função valor do cubo
int valorDoCubo( int *nPtr )
{
   // RETORNA O VALOR DA MULTIPLICAÇÃO PARA A FUNÇÃO
   return *nPtr * *nPtr * *nPtr;
} // fim função valor do cubo
