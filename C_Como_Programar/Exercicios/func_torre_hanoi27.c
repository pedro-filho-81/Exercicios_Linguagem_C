/* Exercício 5.36 Torres de Hanói. Todo cientista da computação
  iniciante precisa lutar contra certos problemas clássicos,
  e as Torres de Hanói é um dos problemas mais famosos.
  Deitel, Paul; Deitel, Harvey. C  Como Programar (Página 156).
  Edição do Kindle. Pedro Filho, 29/05/2020 */

//bibliotecas
#include <stdio.h>
#include <stdlib.h> //para system
#include <locale.h> // Para setlocale

// protótipo de função
void torreDeHanoi(int peso, char origem, char auxiliar, char destino);

//Função principal
int main() { // início main
  // variáveis
  int n = 0;
	//Define para Português Brasil
	setlocale(LC_ALL, "Portuguese");
	// entrada de dados
	printf("Digite a quantidade de pesos: ");
	scanf("%d", &n);
	system("cls"); // limpe a tela
	// cabeçalho
	printf("{ TORRE DE HANOI }\n");
  printf("torreDeHanoi(%d, 'A', 'B', 'C');\n", n);
  // passando valores para função torre de hanoi
  torreDeHanoi(n, 'A', 'B', 'C');

  /* Esplicação dos movimentos para 4 anilhas.
  4 = NÚMERO DE ANILHAS NA ORIGEM
  CADA UMA MAIOR QUE A OUTRA,
  A MAIOR É SEMPRE A ÚLTIMA
  REGRA - A MAIOR NÃO PODE FICAR EM CIMA DA MENOR.
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

// função torreDeHanoi
void torreDeHanoi(int peso, char origem, char auxiliar, char destino) {
  // verifica se peso é maior que zero
  if(peso > 0) { // se sim

   /*
       PROCESSO PARA 3 DISCOS
       1º - A para C,  ( origem para destino )
       3º - C para B, ( destino para auxiliar )
       5º - B PARA A, ( auxiliar para origem )
       7º - A para C, ( origem para destino
   */
    // chama a função e move o peso da origem para o destino
    torreDeHanoi(peso - 1, origem, destino, auxiliar);

    // imprime o movimento e pula uma linha
    printf("Mover de %c para %c\n", origem, destino);

    /*
        2º - A para B ( origem para auxiliar )
        4º - A para C ( origem para destino )
        6º - B para C ( auxiliar para destino )
    */

    //chama a função e move o peso do auxiliar para origem
    torreDeHanoi(peso - 1, auxiliar, origem, destino);

     } // fim else

   } // fim função
