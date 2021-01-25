/*
   Quest�o: produtos diferentes cujos pre�os de revenda aparecem  na tabela a seguir:
   N�mero do produto Pre�o de revenda
   1 R$ 2,98
   2 R$ 4,50
   3 R$ 9,98
   4 R$ 4,49
   5 R$ 6,87
   Escreva um programa que leia uma s�rie de pares de n�-  meros da seguinte forma:
   a) N�mero do produto.
   b) Quantidade vendida durante um dia.
   Seu programa dever� usar uma estrutura switch para  ajudar a determinar
   o pre�o de revenda para cada produto. O programa dever� calcular e exibir
   o valor de revenda  total de todos os produtos vendidos na semana anterior.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 110). Edi��o do Kindle.
   Autor: @Pedro Filho, 25/01/2021
*/

// Incluir Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// FUN��O PRINCIPAL
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   //vari�vel
   int opcao = 1; // para selecionar a op��o do menu
   int a = 0, b = 0, c = 0, d = 0, e = 0; // para contagem de vendas dos produtos
   float valor1 = 0;
   float valor2 = 0;
   float valor3 = 0;
   float valor4 = 0;
   float valor5 = 0;

   // cabe�alho
   printf( "%38s", "=-= CALCULANDO VENDAS =-=\n" );

   // menu de op��es
   printf( "   *******************************************\n" );
   printf( "%23s%20s\n", "N�mero do produto", "Pre�o de revenda" );
   printf( "%18s%20s\n", "1", "R$2,98" );
   printf( "%18s%20s\n", "2", "R$4,50" );
   printf( "%18s%20s\n", "3", "R$9,98" );
   printf( "%18s%20s\n", "4", "R$4,49" );
   printf( "%18s%20s\n", "5", "R$6,87" );
   printf( "   *******************************************\n" );

   // loop enquanto op��o maior que zero e menor que 5
   while( opcao != -1 ) {

      // entrada de dados
      printf( "   Informe o produto vendido [-1 para sair]: " );
      scanf( "%d", &opcao );

      // contagem das vendas por produto
      switch( opcao ) {

         case 1: // caso op��o 1
            a++; // conte a
            valor1 += 2.98; // somar valor
            break; // pare

         case 2: //case op��o 2
            b++; // contar b
            valor2 += 4.5;  // somar
            break; // parar

         case 3: // caso op��o 3
            c++; // contar c
            valor3 += 9.98; // somar
            break; // parar

         case 4: // caso op��o 4
            d++; // contar d
            valor4 += 4.49; // somar
            break; // parar

         case 5: // caso op��o 5
            e++; // contar e
            valor5 += 6.87; // somar
            break; // parar

         default:
            printf( "Op��o inv�lida.\n" );
            break;

      } // fim switch

   } // fim while

   // limpar tela
   system( "cls" );

   // cabe�alho
   printf( "\n%55s", "=-= RESUMO DAS VENDAS =-=\n" );

   // resumo das vendas
   printf( "   **********************************************************************\n" );

   printf( "%23s%18s%15s%15s\n", "N�mero do produto", "Pre�o de revenda",
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

}  // FIM FUN��O MAIN
