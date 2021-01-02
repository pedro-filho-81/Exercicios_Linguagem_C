/*
   Estrutura: 2) Crie uma estrutura para representar as coordenadas
   de um ponto no plano (posições X e Y). Em seguida, declare e leia
   do teclado um ponto e exiba a distância dele até a origem das
   coordenadas, isto é, a posição (0,0).
   Backes, André. Linguagem C (p. 157). GEN LTC. Edição do Kindle.
   Auto: Pedro Filho, 31/12/2020
*/

// biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// cria estrutura
struct ponto {
   int x;
   int y;
};

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // inicializando a estrutura
   struct ponto p, origem = {0, 0};
   int distancia = 0;

   printf("Digite os valores de x e y: ");
   scanf("%d%d", &p.x, &p.y);

   // calcular
   distancia = sqrt( pow( ( p.x - origem.x ), 2 ) + pow( (p.y - origem.y ), 2 ) );

   // mostrar resultado
   printf("A distância entre \no ponto x = %d e o ponto y = %d é %d\n",
          p.x, p.y, distancia);

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN
