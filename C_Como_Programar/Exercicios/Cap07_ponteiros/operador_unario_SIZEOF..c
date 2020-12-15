// Fig. 7.16: fig07_16.c
// A aplica��o de sizeof a um nome de array retorna
// o n�mero de bytes no array
// Exemplo do livro C como Programrar dos Deitel

// biblioteca
#include <stdio.h>
#include <locale.h>
#define SIZE 20

// prot�tipo
size_t getSize(float *ptr);

int main(void)
{
   // configura para Portugu�s Brasil
   setlocale(LC_ALL, "Portuguese" );

   // array
   float array[ SIZE ];

   // imprimir
   printf("O n�mero de bytes no array � %d"
          "\nO n�mero de bytes retornado por getSize � %d\n",
          sizeof(array), getSize(array));

   puts( "" );

   return 0; // fim do programa
} // fim main

// fun��o para retornar o tamanho do ponteiro
size_t getSize(float *ptr)
{
   return sizeof(ptr);
}
