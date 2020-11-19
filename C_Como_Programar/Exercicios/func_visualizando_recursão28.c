/*
   Fun��o: 5.38 Visualizando a recurs�o. � interessante observar a  recurs�o
   �em a��o�. Modifique a fun��o fatorial da Figura 5.14 para imprimir sua
   vari�vel local e o par�metro de  chamada recursiva. Para cada chamada
   recursiva, apresente as sa�das em uma linha separada e acrescente um  n�vel
   e recuo. Fa�a o m�ximo para tornar as sa�das claras,  interessantes e
   significativas. Seu objetivo aqui � projetar e  implementar um formato de
   sa�da que ajude uma pessoa  a entender melhor a recurs�o. Voc� pode querer
   acrescentar essas capacidades de exibi��o a muitos outros exemplos e
   exerc�cios de recurs�o no decorrer do livro.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 157). Edi��o do Kindle.
   Autor: Pedro Filho, 19/11/2020.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// prot�tipo de fun��o
int fatorial(int n);

// fun��o principal
int main() {

  // promove o uso da acentua��o
  setlocale(LC_ALL, "Portuguese");

  // vari�veis
  int num = 0;
  int resp = 1;

  // fa�a enquanto resp igual a um
  while(resp == 1){

    system("cls"); // limpa a tela

    // entrada de dadps
    printf("Digite um n�mero para ver seu fatorial: ");
    scanf("%d", &num);

   printf( "Fatorial de %d!\n", num );

    // mostra resultado
    printf("Total ( %d ) \n", fatorial(num));

    // pergunta para continuar ou encerrar.
    printf("Deseja continuar? [1-Sim / 2-N�o] ");
    scanf("%d", &resp);

  } // fim while

  // pausa o sistema
  //system("pause");

  // fim do programa
  return 0;

} // fim main

// fun��o recursiva fatorial
int fatorial(int n)
{
   // mostrando �s repeti��es recursiva
  printf( "\t%2d x %2d!\n", n, n - 1 );

  // verificar se o n�mero � igual a um
  if( n == 1)
  {
   // retornar um
    return 1;
  } // fim if
  else {
   // recursividade
   // parametro vezes fun��o
   return n * fatorial(n - 1);

  } // fim else

} // fim fun��o
