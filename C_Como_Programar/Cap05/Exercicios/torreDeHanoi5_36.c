/*
    Quest�o: 5.36 Torres de Han�i. Todo cientista da computa��o iniciante
    precisa lutar contra certos problemas cl�ssicos, e as Torres  de Han�i
    (ver Figura 5.19) � um dos problemas mais famosos. A lenda diz que, em
    um templo no Extremo Oriente,  sacerdotes est�o tentando mover uma pilha
    de discos de um  pino para outro. A pilha inicial tinha 64 discos dispostos em
    um pino e arrumados de baixo para cima por tamanho decrescente.
    Os sacerdotes est�o tentando mover a pilha desse  pino para um segundo
    pino sob as restri��es de que apenas  um disco � movido de cada vez, e em
    momento algum um  disco maior pode ser colocado sobre um disco menor.
    Um  terceiro pino est� dispon�vel para apoiar os discos temporariamente.
    Supostamente, o mundo terminar� quando os  sacerdotes completarem sua
    tarefa, de modo que n�o temos  muito incentivo para facilitar seus esfor�os.
    Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 156). Edi��o do Kindle.
    Autor: Pedro Filho, 17/02/2021
*/

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

    // Pausa o sistema
    system("pause");

    // fim do programa
    return 0;

} // fim main

// fun��o torreDeHanoi
void torreDeHanoi(int peso, char origem, char auxiliar, char destino)
{
    // verifica se peso � maior que zero
    if(peso > 0) { // se sim

        // chama a fun��o e move o peso da origem para auxiliar
        torreDeHanoi(peso - 1, origem, destino, auxiliar);

        // imprime o movimento e pula uma linha
        printf("Mover de %c para %c\n", origem, destino);

        // chama a fun��o e move o peso do auxiliar para origem
        torreDeHanoi(peso - 1, auxiliar, origem, destino);

    } // fim else

} // fim fun��o
