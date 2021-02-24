/*
    Questão: 5.36 Torres de Hanói. Todo cientista da computação iniciante
    precisa lutar contra certos problemas clássicos, e as Torres  de Hanói
    (ver Figura 5.19) é um dos problemas mais famosos. A lenda diz que, em
    um templo no Extremo Oriente,  sacerdotes estão tentando mover uma pilha
    de discos de um  pino para outro. A pilha inicial tinha 64 discos dispostos em
    um pino e arrumados de baixo para cima por tamanho decrescente.
    Os sacerdotes estão tentando mover a pilha desse  pino para um segundo
    pino sob as restrições de que apenas  um disco é movido de cada vez, e em
    momento algum um  disco maior pode ser colocado sobre um disco menor.
    Um  terceiro pino está disponível para apoiar os discos temporariamente.
    Supostamente, o mundo terminará quando os  sacerdotes completarem sua
    tarefa, de modo que não temos  muito incentivo para facilitar seus esforços.
    Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 156). Edição do Kindle.
    Autor: Pedro Filho, 17/02/2021
*/

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

    // Pausa o sistema
    system("pause");

    // fim do programa
    return 0;

} // fim main

// função torreDeHanoi
void torreDeHanoi(int peso, char origem, char auxiliar, char destino)
{
    // verifica se peso é maior que zero
    if(peso > 0) { // se sim

        // chama a função e move o peso da origem para auxiliar
        torreDeHanoi(peso - 1, origem, destino, auxiliar);

        // imprime o movimento e pula uma linha
        printf("Mover de %c para %c\n", origem, destino);

        // chama a função e move o peso do auxiliar para origem
        torreDeHanoi(peso - 1, auxiliar, origem, destino);

    } // fim else

} // fim função
