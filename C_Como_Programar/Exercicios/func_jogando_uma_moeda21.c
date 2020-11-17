/* Exercício 5.31 Jogando uma moeda. Escreva um programa
  que simule o lançamento de uma moeda. Para cada lançamento
  da moeda, o programa deverá imprimir Cara ou Coroa.
  Deixe o programa jogar a moeda 100 vezes e conte o número
  de vezes que cada lado da moeda aparece. Imprima os resultados.
  Deitel, Paul; Deitel, Harvey. C  Como Programar (Página 155).
  Edição do Kindle. Pedro Filho, 16/11/2020 */

//bibliotecas
#include <stdio.h>
#include <stdlib.h> //para system
#include <locale.h> // Para setlocale
#include <time.h>

// protótipo de função
int cara_coroa( int jogar );

//Função principal
int main() { // início main

	//Define para Português Brasil
	setlocale(LC_ALL, "Portuguese");

	//variáveis
  int cara = 0;
  int coroa = 0;
  int contador = 1;
  int num = 0;

  srand(time(NULL));

  // faça enquanto contador menro ou igual a 100
  while(contador <= 100)
  {
    num = 1 + rand() % 2; // gera números aleatórios

    //se função cara ou coroa igual a 0 deu cara
    if( cara_coroa( num ) == 0 ) { // deu cara
      cara++; // conta as repetições de cara
      printf("Cara ");
    } // fim if
    else { // se não
      coroa++; // conta as repetições de coroa
      printf("Coroa "); // deu coroa
    } // fim else

    contador++; // conta a repetição do while

  } // fim while

  // mostra resultado
  printf("\n\nCara aparaceu %d veses e Coroa %d\n", cara, coroa);

	// Pausa o sistema
	system("pause");

	 // fim do programa
	return 0;

} // fim main

// função caraOuCoroa
int cara_coroa( int jogar )
{
   //se jogar igual a 1 deu cara
    if(jogar == 1) { // deu cara
      return 0;
    } // fim if
    else { // se não
      return 1; // deu coroa
    } // fim else

} // fim caraOuCoroa
