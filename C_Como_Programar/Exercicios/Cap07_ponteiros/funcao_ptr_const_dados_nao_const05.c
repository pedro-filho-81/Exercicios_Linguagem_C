/*
   Fig. 7.12: fig07_12.c
   2 Tentando modificar dados por meio de um
   3 ponteiro n�o constante para dados constantes.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 218). Edi��o do Kindle.
   Pedro Filho 14/12/2020
*/

// bibliotecas
#include <stdio.h>
#include <locale.h>

// prot�tipo
void f( const int *xPtr );

int main()
{
   // aceita os caracteres do Portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // vari�vel
   int y = 5;

   // f tenta modifica��o ilegal
   f( &y );

   // pular uma linha
   printf( "\n" );

   return 0; // fim do programa

}// fim main

// fun��o f tenta mudar um objeto
void f( const char *xPtr )
{
   // xPtr n�o pode ser usado para modificar
   // o valor da vari�vel � qual ele aponta
   *xPtr = 100; // n�o pode modificar o objeto const
   // esta tentativa causa erro na compila��o

} // fim fun��o
