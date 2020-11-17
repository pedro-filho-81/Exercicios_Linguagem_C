/* Exerc�cio 5.31 Jogando uma moeda. Escreva um programa
  que simule o lan�amento de uma moeda. Para cada lan�amento
  da moeda, o programa dever� imprimir Cara ou Coroa.
  Deixe o programa jogar a moeda 100 vezes e conte o n�mero
  de vezes que cada lado da moeda aparece. Imprima os resultados.
  Deitel, Paul; Deitel, Harvey. C  Como Programar (P�gina 155).
  Edi��o do Kindle. Pedro Filho, 16/11/2020 */

//bibliotecas
#include <stdio.h>
#include <stdlib.h> //para system
#include <locale.h> // Para setlocale
#include <time.h>

// prot�tipo de fun��o
int cara_coroa( int jogar );

//Fun��o principal
int main() { // in�cio main

	//Define para Portugu�s Brasil
	setlocale(LC_ALL, "Portuguese");

	//vari�veis
  int cara = 0;
  int coroa = 0;
  int contador = 1;
  int num = 0;

  srand(time(NULL));

  // fa�a enquanto contador menro ou igual a 100
  while(contador <= 100)
  {
    num = 1 + rand() % 2; // gera n�meros aleat�rios

    //se fun��o cara ou coroa igual a 0 deu cara
    if( cara_coroa( num ) == 0 ) { // deu cara
      cara++; // conta as repeti��es de cara
      printf("Cara ");
    } // fim if
    else { // se n�o
      coroa++; // conta as repeti��es de coroa
      printf("Coroa "); // deu coroa
    } // fim else

    contador++; // conta a repeti��o do while

  } // fim while

  // mostra resultado
  printf("\n\nCara aparaceu %d veses e Coroa %d\n", cara, coroa);

	// Pausa o sistema
	system("pause");

	 // fim do programa
	return 0;

} // fim main

// fun��o caraOuCoroa
int cara_coroa( int jogar )
{
   //se jogar igual a 1 deu cara
    if(jogar == 1) { // deu cara
      return 0;
    } // fim if
    else { // se n�o
      return 1; // deu coroa
    } // fim else

} // fim caraOuCoroa
