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
void torreDeHanoi(int peso, char origem[6], char auxiliar[8], char destino[7] );

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
	printf("\t{ TORRE DE HANOI }\n");
   printf( "\t  Com %d anilhas.\n", n );
   printf("(\"ORIGEM\", \"AUXILIAR\", \"DESTINO\" );\n\n", n);

  // passando valores para função torre de hanoi
  torreDeHanoi(n, "origem", "auxiliar", "destino");

  // pular uma linha
  printf( "\n" );

	// Pausa o sistema
	system("pause");

	 // fim do programa
	return 0;

} // fim main

// função torreDeHanoi
void torreDeHanoi(int peso, char origem[6], char auxiliar[8], char destino[7]) {
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
    printf("Mover de %s para %s\n", origem, destino);

    /*
        2º - A para B ( origem para auxiliar )
        4º - A para C ( origem para destino )
        6º - B para C ( auxiliar para destino )
    */

    //chama a função e move o peso do auxiliar para origem
    torreDeHanoi(peso - 1, auxiliar, origem, destino);

     } // fim else

   } // fim função
