/*
   Fun��o: 5.33 Modifica��o de �Descubra o n�mero�. Modifique  o programa
   do Exerc�cio 5.32 para contar o n�mero  de tentativas que o jogador fez.
   Se o n�mero for 10  ou menos, imprima Ou voc� conhece o segredo  ou teve
   sorte! Se o jogador acertar o n�mero em  10 tentativas, ent�o imprima Ahah!
   Voc� conhece  o segredo! Se o jogador conseguir em mais de 10  tentativas,
   ent�o imprima Voc� deveria se sair  melhor! Por que n�o deveria passar
   de 10 tentativas?  Bem, com cada �escolha boa�, o jogador deveria poder
   eliminar metade dos n�meros. Agora, mostre por que  qualquer n�mero de
   1 a 1000 pode ser descoberto em  10 ou menos tentativas.  5.34
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 155). Edi��o do Kindle.
   Autor: Pedro Filho, /11/2020.
*/

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
      printf("\nExcelente! Voc� descobriu o n�mero!\n");
      printf("Voc� jogou %d vezes para ganhar.\n", contador);

      // se o contador menor que 10 imprima
      if( contador < 10 )
         printf( "Ou voc� conhece o segredo ou teve sorte!\n" );
      else if( contador == 10 )
         printf( "Ahah voc� conhece o segredo!\n" );
      else if( contador > 10 )
         printf( "Bem que voc� poderia se sair melhor!\n" );

      // mostrar voc� quer continuar
      printf("\nQuer continuar? [1-SIM / 2-N�O] ");
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

        // gera n�meros aleat�rios
        numero = descubra_numero();

        printf("{ DESCUBRA QUE N�MERO EU ESTOU 'PENSANDO' }\n");
        //entrada de dados
        printf("Digite sua primeira tentativa.");
        scanf("%d", &opc);

      } // fim else if rand
    }// fim if

    if(opc < numero){
      printf("Muito baixo. Tente um n�mero maior.");
      contador++; // conta �s tentativas
      // entre com a nova op��o
      scanf("%d", &opc);
    } // fim if
    else if(opc > numero) {
      printf("Muito alto. Tente um n�mero menor.");
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
