/*
   Fun��o: 5.34 Exponencia��o recursiva. Escreva uma fun��o recursiva power
   ( base, expoente) que, quando chamada, retorna  baseexpoente  Por exemplo,
   power( 3, 4) = 3 * 3 * 3 * 3.  Suponha que expoente seja um inteiro maior
   ou igual  a 1. Dica: a etapa de recurs�o usaria o relacionamento  baseexpoente
   = base * baseexpoente�1  e a condi��o de t�rmino ocorre quando expoente �
   igual a 1, pois  base1 = base
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 155). Edi��o do Kindle.
    Autor: Pedro Filho, 17/11/2020.
*/

//bibliotecas
#include <stdio.h>
#include <stdlib.h> //para system
#include <locale.h> // Para setlocale

// prot�tipo de fun��o
int power(int bs, int expo);

//Fun��o principal
int main() { // in�cio main

	//Define para Portugu�s Brasil
	setlocale(LC_ALL, "Portuguese");
	// vari�veis
	int base = 0;
	int expoente = 0;

	// entrada de dados
	printf("{ POT�NCIA��O }\n");
	printf("Digite a base: ");
	scanf("%d", &base);
	printf("Digite o expoente: ");
	scanf("%d", &expoente);

	// mostrar resultado
   printf("O valor da pot�ncia da base %d com expoente %d � %d\n",
         base, expoente, power(base, expoente));

	// Pausa o sistema
	system("pause");

	 // fim do programa
	return 0;

} // fim main

// fun��o power
int power(int bs, int expo)
{
  // verificar se o expoente � igual a zero
  if( expo == 0 ) // se verdade
   return 1; // retornar 1
  else // se falso
  // retornar base vezes a fun��o
  return bs * power( bs, expo - 1 );
  // return potencia;
} // fim fun��o power
