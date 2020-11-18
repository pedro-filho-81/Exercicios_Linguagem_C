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
void torreDeHanoi(int peso, char origem, char auxiliar, char destino);

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
	printf("{ TORRE DE HANOI }\n");
  printf("torreDeHanoi(%d, 'A', 'B', 'C');\n", n);
  // passando valores para fun��o torre de hanoi
  torreDeHanoi(n, 'A', 'B', 'C');

  /* Esplica��o dos movimentos para 4 anilhas.
  4 = N�MERO DE ANILHAS NA ORIGEM
  CADA UMA MAIOR QUE A OUTRA,
  A MAIOR � SEMPRE A �LTIMA
  REGRA - A MAIOR N�O PODE FICAR EM CIMA DA MENOR.
  A = ORIGEM; B = AUXILIAR; C = DESTINO;
  MOVIMENTOS:
  1 - A -> B // ORIGEM PARA AUXILIAR
  2 - A -> C // ORIGEM PARA DESTINO
  3 - B -> C // AUXILIAR PARA DESTINO
  4 - A -> B // ORIGEM PARA AIXILIAR
  5 - C -> A // DESTINO PARA ORIGEM
  6 - C -> B // DESTINO PARA AUXILIAR
  7 - A -> B // ORIGEM PARA AUXILIAR
  8 - A -> C // ORIGEM PARA DESTINO
  9 - B -> C // AUXILIAR PARA DESTINO
  10- B -> A // AUXILIAR PARA ORIGEM
  11- C -> A // DESTINO PARA ORIGEM
  12- B -> C // AUXILIAR PARA DESTINO
  13- A -> B // ORIGEM PARA AUXILIAR
  14- A -> C // ORIGEM PARA DESTINO
  15- B -> C // AUXILIAR PARA DESTINO - FIM DO JOGO
  COM 4 ANILHAS PRECISA-SE DE 15 MOVIMENTOS PARA
  COLOCAR TODAS AS ANILHAS EM ORDEM DA ORIGEM PARA O
  DESTINO. */

	// Pausa o sistema
	system("pause");

	 // fim do programa
	return 0;

} // fim main

// fun��o torreDeHanoi
void torreDeHanoi(int peso, char origem, char auxiliar, char destino) {
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
    printf("Mover de %c para %c\n", origem, destino);

    /*
        2� - A para B ( origem para auxiliar )
        4� - A para C ( origem para destino )
        6� - B para C ( auxiliar para destino )
    */

    //chama a fun��o e move o peso do auxiliar para origem
    torreDeHanoi(peso - 1, auxiliar, origem, destino);

     } // fim else

   } // fim fun��o
