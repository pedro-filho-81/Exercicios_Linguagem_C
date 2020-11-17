/* Exerc�cio 5.32 Descubra o n�mero. Escreva um programa em C
  que contenha o jogo �descubra o n�mero�, da seguinte forma:
  seu programa escolhe o n�mero a ser descoberto, selecionando
  um inteiro aleat�rio na faixa de 1 a 1000. O programa ent�o exibe:
  Deitel, Paul; Deitel, Harvey. C  Como Programar (P�gina 155).
  Edi��o do Kindle. Pedro Filho, 25/05/2020 */

//bibliotecas
#include <stdio.h>
#include <stdlib.h> //para system
#include <locale.h> // Para setlocale
#include <time.h>

// prot�tipo fun��o
int descubra_numero();

//Fun��o principal
int main() { // in�cio main

	//Define para Portugu�s Brasil
	setlocale(LC_ALL, "Portuguese");

  // vari�veis
  int opc = 0;
  int resp = 1;
  int numero = 0;
  int contador = 1;

  // chamar a fun��o descubra o n�mero
  numero = descubra_numero(); // gera n�mero aleat�rio

   printf("{ DESCUBRA QUE N�MERO EU ESTOU 'PENSANDO' }\n");
	// entrada de dados
	printf("Eu tenho um n�mero entre 1 e 1000.\n");
	printf("Voc� consegue adivinhar qual �?\n");
   printf("Digite sua primeira tentativa.");
	scanf("%d", &opc);

  //fa�a enquanto resp for igual a 1
  while(resp == 1)
  {
    //verifica se a op��o � igual ao n�mero aleat�rio
    if(opc == numero)
    {
      // imprime
      printf("Excelente! Voc� descobriu o n�mero!\n");
      printf("Voc� jogou %d vezes para ganhar.\n", contador);
      printf("Quer continuar? [1-SIM / 2-N�O] ");
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

        // gera n�meros aleat�rios
        numero = descubra_numero();

        printf("{ DESCUBRA QUE N�MERO EU ESTOU 'PENSANDO' }\n");
        //entrada de dados
        printf("Digite sua primeira tentativa.");
        scanf("%d", &opc);

      } // fim else if rand
    }// fim if

    if(opc < numero){
      printf("Muito baixo. Tente novamente.");
      contador++; // conta �s tentativas
      // entre com a nova op��o
      scanf("%d", &opc);
    } // fim if
    else if(opc > numero) {
      printf("Muito alto. Tente novemente.");
      contador++; // conta �s tentativas
      // entre com a nova op��o
      scanf("%d", &opc);
    } // fim else if

  } // fim while

	// Pausa o sistema
	system("pause");

	 // fim do programa
	return 0;

} // fim main

// fun��o descubraONumero
int descubra_numero()
{
   int numero = 0;
   // gerador aleat�rio
   srand(time(NULL));
   // gera n�meros aleat�rios
   numero = 1 + rand() % 1000;
   return numero;

} // fim fun��o
