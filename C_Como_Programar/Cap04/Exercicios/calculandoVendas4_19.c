/*
   Questão: produtos diferentes cujos preços de revenda aparecem  na tabela a seguir:
   Número do produto Preço de revenda
   1 R$ 2,98
   2 R$ 4,50
   3 R$ 9,98
   4 R$ 4,49
   5 R$ 6,87
   Escreva um programa que leia uma série de pares de nú-  meros da seguinte forma:
   a) Número do produto.
   b) Quantidade vendida durante um dia.
   Seu programa deverá usar uma estrutura switch para  ajudar a determinar
   o preço de revenda para cada produto. O programa deverá calcular e exibir
   o valor de revenda  total de todos os produtos vendidos na semana anterior.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 110). Edição do Kindle.
   Autor: @Pedro Filho, 25/01/2021
*/

// Incluir Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   //variável
   int opcao = 1; // para selecionar a opção do menu
   int a = 0, b = 0, c = 0, d = 0, e = 0; // para contagem de vendas dos produtos
   float valor1 = 0;
   float valor2 = 0;
   float valor3 = 0;
   float valor4 = 0;
   float valor5 = 0;

   // cabeçalho
   printf( "%38s", "=-= CALCULANDO VENDAS =-=\n" );

   // menu de opções
   printf( "   *******************************************\n" );
   printf( "%23s%20s\n", "Número do produto", "Preço de revenda" );
   printf( "%18s%20s\n", "1", "R$2,98" );
   printf( "%18s%20s\n", "2", "R$4,50" );
   printf( "%18s%20s\n", "3", "R$9,98" );
   printf( "%18s%20s\n", "4", "R$4,49" );
   printf( "%18s%20s\n", "5", "R$6,87" );
   printf( "   *******************************************\n" );

   // loop enquanto opção maior que zero e menor que 5
   while( opcao != -1 ) {

      // entrada de dados
      printf( "   Informe o produto vendido [-1 para sair]: " );
      scanf( "%d", &opcao );

      // contagem das vendas por produto
      switch( opcao ) {

         case 1: // caso opção 1
            a++; // conte a
            valor1 += 2.98; // somar valor
            break; // pare

         case 2: //case opção 2
            b++; // contar b
            valor2 += 4.5;  // somar
            break; // parar

         case 3: // caso opção 3
            c++; // contar c
            valor3 += 9.98; // somar
            break; // parar

         case 4: // caso opção 4
            d++; // contar d
            valor4 += 4.49; // somar
            break; // parar

         case 5: // caso opção 5
            e++; // contar e
            valor5 += 6.87; // somar
            break; // parar

         default:
            printf( "Opção inválida.\n" );
            break;

      } // fim switch

   } // fim while

   // limpar tela
   system( "cls" );

   // cabeçalho
   printf( "\n%55s", "=-= RESUMO DAS VENDAS =-=\n" );

   // resumo das vendas
   printf( "   **********************************************************************\n" );

   printf( "%23s%18s%15s%15s\n", "Número do produto", "Preço de revenda",
          "Quantidade", "Total vendas" );

   printf( "%18s%18s%15d%15.2f\n", "1", "R$2,98", a, valor1 );

   printf( "%18s%18s%15d%15.2f\n", "2", "R$4,50", b, valor2 );

   printf( "%18s%18s%15d%15.2f\n", "3", "R$9,98", c, valor3 );

   printf( "%18s%18s%15d%15.2f\n", "4", "R$4,49", d, valor4 );

   printf( "%18s%18s%15d%15.2f\n", "5", "R$6,87", e, valor5 );

   printf( "   **********************************************************************\n" );

   // pular linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN
