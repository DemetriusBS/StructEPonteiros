#include <stdio.h>
#include<stdlib.h>

int main() {

	struct dados_do_aluno { //Criando a Struct

		char nome[50]; //Vari�vel de armazenamento do nome
		int RU; //Vari�vel de armazenamento do RU
	}; struct dados_do_aluno aluno, * pAluno; //Criando a vari�vem que referenciar� a struct e criando o ponteiro

	pAluno = &aluno; //Declarando o ponteiro para a estrutura de dados

	printf("Digite o nome do aluno: ");
	fflush(stdin);
	fgets(aluno.nome, 50, stdin); //Coletando e armazenando o nome

	printf("\n"); //Quebra de linha

	printf("Digite o RU do aluno: ");
	fflush(stdin);
	scanf_s("%d", &aluno.RU); //Coletando e armazenando o RU

	printf("\n\n");//Quebra de linha

	printf("O nome do aluno e: %s \n", pAluno->nome); //Impress�o na tela utilizando o ponteiro
	printf("O RU do aluno e: %d \n\n", pAluno->RU); //Impress�o na tela utilizando o ponteiro

    system("pause");
	return 0;
}