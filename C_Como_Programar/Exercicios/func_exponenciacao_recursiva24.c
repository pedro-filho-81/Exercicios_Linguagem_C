/*
   Função: 5.34 Exponenciação recursiva. Escreva uma função recursiva power
   ( base, expoente) que, quando chamada, retorna  baseexpoente  Por exemplo,
   power( 3, 4) = 3 * 3 * 3 * 3.  Suponha que expoente seja um inteiro maior
   ou igual  a 1. Dica: a etapa de recursão usaria o relacionamento  baseexpoente
   = base * baseexpoente–1  e a condição de término ocorre quando expoente é
   igual a 1, pois  base1 = base
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 155). Edição do Kindle.
    Autor: Pedro Filho, 17/11/2020.
*/

//bibliotecas
#include <stdio.h>
#include <stdlib.h> //para system
#include <locale.h> // Para setlocale

// protótipo de função
int power(int bs, int expo);

//Função principal
int main() { // início main

	//Define para Português Brasil
	setlocale(LC_ALL, "Portuguese");
	// variáveis
	int base = 0;
	int expoente = 0;

	// entrada de dados
	printf("{ POTÊNCIAÇÃO }\n");
	printf("Digite a base: ");
	scanf("%d", &base);
	printf("Digite o expoente: ");
	scanf("%d", &expoente);

	// mostrar resultado
   printf("O valor da potência da base %d com expoente %d é %d\n",
         base, expoente, power(base, expoente));

	// Pausa o sistema
	system("pause");

	 // fim do programa
	return 0;

} // fim main

// função power
int power(int bs, int expo)
{
  // verificar se o expoente é igual a zero
  if( expo == 0 ) // se verdade
   return 1; // retornar 1
  else // se falso
  // retornar base vezes a função
  return bs * power( bs, expo - 1 );
  // return potencia;
} // fim função power
