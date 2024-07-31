/*
    2.32 Calculadora de Índice de Massa Corporal. 
    Apresentamos a calculadora do índice de massa corporal  (IMC) no Exercício 1.11. A fórmula para calcular o IMC é  IMC pesoEmQuilos  alturaEmMetros alturaEmMetros  =  ×  Crie uma aplicação para a calculadora de IMC que leia o  peso do usuário em quilogramas e a altura em metros, e  que depois calcule e apresente o seu índice de massa corporal. Além disso, a aplicação deverá exibir as seguintes  informações do Ministério da Saúde para que o usuário  possa avaliar seu IMC:  VALORES DE IMC  Abaixo do peso: menor que 18,5  Normal: entre 18,5 e 24,9  Acima do peso: entre 25 e 29,9  Obeso: 30 ou mais  [Nota: neste capítulo, você aprendeu a usar o tipo int  para representar números inteiros. Os cálculos de IMC,  quando feitos com valores int, produzirão resultados  em números inteiros. No Capítulo 4, você aprenderá a usar  o tipo double para representar números fracionários.  Quando os cálculos de IMC são realizados com doubles,  eles produzem números com pontos decimais; estes  são os chamados números de ‘ponto flutuante’.] 
    Deitel, Paul; Deitel, Harvey. C Como Programar (Portuguese Edition) (p. 43). Edição do Kindle. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {

    // configura para o português do brasil
    setlocale(LC_ALL, "portuguese");
    //  limpa a tela
    system("cls");

    // variáveis
    int pesoQuilos = 0;
    int alturaEmMetros = 0;

    // seu código aqui
    // entrada de dados
    printf("Informe sua altura em (metros): ");
    scanf("%d", &alturaEmMetros);
    printf("Altura ao quadrado: %d\n", alturaEmMetros * alturaEmMetros);

    printf("Informe seu peso em Kg: ");
    scanf("%d", &pesoQuilos);
    printf("Peso: %d\n", pesoQuilos);

    // calcula Imc
    int imc = pesoQuilos / (alturaEmMetros * alturaEmMetros);
 
    // imprime o resultado
    printf("CALCULADORA DE ImC\n");
    printf("Seu ImC %d / %d = %d\n", pesoQuilos, (alturaEmMetros * alturaEmMetros), imc);
    printf("\nVALOR DO ImC:\n");
    printf("Abaixo do peso: menor que 18,5;\n");
    printf("Normal: \tentre 18,5 e 24,9;\n");
    printf("Acima do peso:\tentre 25 e 29,9\n");
    printf("Obeso:\t\t30 ou mais.\n");
    system("pause"); // pausa a execução

    return 0;
    
} // end main