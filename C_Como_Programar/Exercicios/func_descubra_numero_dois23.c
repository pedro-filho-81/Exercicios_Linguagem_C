/*
   Função: 5.33 Modificação de ‘Descubra o número’. Modifique  o programa
   do Exercício 5.32 para contar o número  de tentativas que o jogador fez.
   Se o número for 10  ou menos, imprima Ou você conhece o segredo  ou teve
   sorte! Se o jogador acertar o número em  10 tentativas, então imprima Ahah!
   Você conhece  o segredo! Se o jogador conseguir em mais de 10  tentativas,
   então imprima Você deveria se sair  melhor! Por que não deveria passar
   de 10 tentativas?  Bem, com cada ‘escolha boa’, o jogador deveria poder
   eliminar metade dos números. Agora, mostre por que  qualquer número de
   1 a 1000 pode ser descoberto em  10 ou menos tentativas.  5.34
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 155). Edição do Kindle.
   Autor: Pedro Filho, /11/2020.
*/

//bibliotecas
#include <stdio.h>
#include <stdlib.h> //para system
#include <locale.h> // Para setlocale
#include <time.h>

// protótipo função
int descubra_numero();

//Função principal
int main() { // início main

	//Define para Português Brasil
	setlocale(LC_ALL, "Portuguese");

  // variáveis
  int opc = 0;
  int resp = 1;
  int numero = 0;
  int contador = 1;

  // chamar a função descubra o número
  numero = descubra_numero(); // gera número aleatório

   printf("{ DESCUBRA QUE NÚMERO EU ESTOU 'PENSANDO' }\n");
	// entrada de dados
	printf("Eu tenho um número entre 1 e 1000.\n");
	printf("Você consegue adivinhar qual é?\n");
   printf("Digite sua primeira tentativa.");
	scanf("%d", &opc);

  //faça enquanto resp for igual a 1
  while(resp == 1)
  {
    //verifica se a opção é igual ao número aleatório
    if(opc == numero)
    {
      // imprime
      printf("\nExcelente! Você descobriu o número!\n");
      printf("Você jogou %d vezes para ganhar.\n", contador);

      // se o contador menor que 10 imprima
      if( contador < 10 )
         printf( "Ou você conhece o segredo ou teve sorte!\n" );
      else if( contador == 10 )
         printf( "Ahah você conhece o segredo!\n" );
      else if( contador > 10 )
         printf( "Bem que você poderia se sair melhor!\n" );

      // mostrar você quer continuar
      printf("\nQuer continuar? [1-SIM / 2-NÃO] ");
      scanf("%d", &resp);

      // se a resposta for igual a 2
      if(resp == 2)
      {
        // sair do programa
        break;
      } // fim if break
      // se a resposta for igual a um
      else if(resp == 1)
      {
        system("cls"); // limpa a tela

        // reiniciando o contador
        contador = 1;

        // gera números aleatórios
        numero = descubra_numero();

        printf("{ DESCUBRA QUE NÚMERO EU ESTOU 'PENSANDO' }\n");
        //entrada de dados
        printf("Digite sua primeira tentativa.");
        scanf("%d", &opc);

      } // fim else if rand
    }// fim if

    if(opc < numero){
      printf("Muito baixo. Tente um número maior.");
      contador++; // conta às tentativas
      // entre com a nova opção
      scanf("%d", &opc);
    } // fim if
    else if(opc > numero) {
      printf("Muito alto. Tente um número menor.");
      contador++; // conta às tentativas
      // entre com a nova opção
      scanf("%d", &opc);
    } // fim else if

  } // fim while

	// Pausa o sistema
	system("pause");

	 // fim do programa
	return 0;

} // fim main

// função descubraONumero
int descubra_numero()
{
   int numero = 0;
   // gerador aleatório
   srand(time(NULL));
   // gera números aleatórios
   numero = 1 + rand() % 1000;
   return numero;

} // fim função
