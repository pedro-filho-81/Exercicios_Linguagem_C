/*
   Função: 5.38 Visualizando a recursão. É interessante observar a  recursão
   ‘em ação’. Modifique a função fatorial da Figura 5.14 para imprimir sua
   variável local e o parâmetro de  chamada recursiva. Para cada chamada
   recursiva, apresente as saídas em uma linha separada e acrescente um  nível
   e recuo. Faça o máximo para tornar as saídas claras,  interessantes e
   significativas. Seu objetivo aqui é projetar e  implementar um formato de
   saída que ajude uma pessoa  a entender melhor a recursão. Você pode querer
   acrescentar essas capacidades de exibição a muitos outros exemplos e
   exercícios de recursão no decorrer do livro.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 157). Edição do Kindle.
   Autor: Pedro Filho, 19/11/2020.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// protótipo de função
int fatorial(int n);

// função principal
int main() {

  // promove o uso da acentuação
  setlocale(LC_ALL, "Portuguese");

  // variáveis
  int num = 0;
  int resp = 1;

  // faça enquanto resp igual a um
  while(resp == 1){

    system("cls"); // limpa a tela

    // entrada de dadps
    printf("Digite um número para ver seu fatorial: ");
    scanf("%d", &num);

   printf( "Fatorial de %d!\n", num );

    // mostra resultado
    printf("Total ( %d ) \n", fatorial(num));

    // pergunta para continuar ou encerrar.
    printf("Deseja continuar? [1-Sim / 2-Não] ");
    scanf("%d", &resp);

  } // fim while

  // pausa o sistema
  //system("pause");

  // fim do programa
  return 0;

} // fim main

// função recursiva fatorial
int fatorial(int n)
{
   // mostrando ás repetições recursiva
  printf( "\t%2d x %2d!\n", n, n - 1 );

  // verificar se o número é igual a um
  if( n == 1)
  {
   // retornar um
    return 1;
  } // fim if
  else {
   // recursividade
   // parametro vezes função
   return n * fatorial(n - 1);

  } // fim else

} // fim função
