/*
   Fig. 7.12: fig07_12.c
   2 Tentando modificar dados por meio de um
   3 ponteiro não constante para dados constantes.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 218). Edição do Kindle.
   Pedro Filho 14/12/2020
*/

// bibliotecas
#include <stdio.h>
#include <locale.h>

// protótipo
void f( const int *xPtr );

int main()
{
   // aceita os caracteres do Português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // variável
   int y = 5;

   // f tenta modificação ilegal
   f( &y );

   // pular uma linha
   printf( "\n" );

   return 0; // fim do programa

}// fim main

// função f tenta mudar um objeto
void f( const char *xPtr )
{
   // xPtr não pode ser usado para modificar
   // o valor da variável à qual ele aponta
   *xPtr = 100; // não pode modificar o objeto const
   // esta tentativa causa erro na compilação

} // fim função
