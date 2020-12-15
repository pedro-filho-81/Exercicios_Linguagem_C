// Fig. 7.16: fig07_16.c
// A aplicação de sizeof a um nome de array retorna
// o número de bytes no array
// Exemplo do livro C como Programrar dos Deitel

// biblioteca
#include <stdio.h>
#include <locale.h>
#define SIZE 20

// protótipo
size_t getSize(float *ptr);

int main(void)
{
   // configura para Português Brasil
   setlocale(LC_ALL, "Portuguese" );

   // array
   float array[ SIZE ];

   // imprimir
   printf("O número de bytes no array é %d"
          "\nO número de bytes retornado por getSize é %d\n",
          sizeof(array), getSize(array));

   puts( "" );

   return 0; // fim do programa
} // fim main

// função para retornar o tamanho do ponteiro
size_t getSize(float *ptr)
{
   return sizeof(ptr);
}
