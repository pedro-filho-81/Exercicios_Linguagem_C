/* Exerc�cio 5.36 Torres de Han�i. Todo cientista da computa��o
  iniciante precisa lutar contra certos problemas cl�ssicos,
  e as Torres de Han�i � um dos problemas mais famosos.
  Deitel, Paul; Deitel, Harvey. C  Como Programar (P�gina 156).
  Edi��o do Kindle. Pedro Filho, 29/05/2020 */

//bibliotecas
#include <stdio.h>
#include <stdlib.h> //para system
#include <locale.h> // Para setlocale

// prot�tipo de fun��o
void torreDeHanoi(int peso, char origem[6], char auxiliar[8], char destino[7] );

//Fun��o principal
int main() { // in�cio main

  // vari�veis
  int n = 0;

	//Define para Portugu�s Brasil
	setlocale(LC_ALL, "Portuguese");

	// entrada de dados
	printf("Digite a quantidade de pesos: ");
	scanf("%d", &n);

	system("cls"); // limpe a tela

	// cabe�alho
	printf("\t{ TORRE DE HANOI }\n");
   printf( "\t  Com %d anilhas.\n", n );
   printf("(\"ORIGEM\", \"AUXILIAR\", \"DESTINO\" );\n\n", n);

  // passando valores para fun��o torre de hanoi
  torreDeHanoi(n, "origem", "auxiliar", "destino");

  // pular uma linha
  printf( "\n" );

	// Pausa o sistema
	system("pause");

	 // fim do programa
	return 0;

} // fim main

// fun��o torreDeHanoi
void torreDeHanoi(int peso, char origem[6], char auxiliar[8], char destino[7]) {
  // verifica se peso � maior que zero
  if(peso > 0) { // se sim

   /*
       PROCESSO PARA 3 DISCOS
       1� - A para C,  ( origem para destino )
       3� - C para B, ( destino para auxiliar )
       5� - B PARA A, ( auxiliar para origem )
       7� - A para C, ( origem para destino
   */
    // chama a fun��o e move o peso da origem para o destino
    torreDeHanoi(peso - 1, origem, destino, auxiliar);

    // imprime o movimento e pula uma linha
    printf("Mover de %s para %s\n", origem, destino);

    /*
        2� - A para B ( origem para auxiliar )
        4� - A para C ( origem para destino )
        6� - B para C ( auxiliar para destino )
    */

    //chama a fun��o e move o peso do auxiliar para origem
    torreDeHanoi(peso - 1, auxiliar, origem, destino);

     } // fim else

   } // fim fun��o
