/* Exercício 5.32 Descubra o número. Escreva um programa em C
  que contenha o jogo ‘descubra o número’, da seguinte forma:
  seu programa escolhe o número a ser descoberto, selecionando
  um inteiro aleatório na faixa de 1 a 1000. O programa então exibe:
  Deitel, Paul; Deitel, Harvey. C  Como Programar (Página 155).
  Edição do Kindle. Pedro Filho, 25/05/2020 */

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
      printf("Excelente! Você descobriu o número!\n");
      printf("Você jogou %d vezes para ganhar.\n", contador);
      printf("Quer continuar? [1-SIM / 2-NÃO] ");
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

        // gera números aleatórios
        numero = descubra_numero();

        printf("{ DESCUBRA QUE NÚMERO EU ESTOU 'PENSANDO' }\n");
        //entrada de dados
        printf("Digite sua primeira tentativa.");
        scanf("%d", &opc);

      } // fim else if rand
    }// fim if

    if(opc < numero){
      printf("Muito baixo. Tente novamente.");
      contador++; // conta às tentativas
      // entre com a nova opção
      scanf("%d", &opc);
    } // fim if
    else if(opc > numero) {
      printf("Muito alto. Tente novemente.");
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
