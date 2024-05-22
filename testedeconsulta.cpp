
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	char nome[10][50]; //declaração de um vetor de String no qual armazenaremos os nomes dos alunos
	char consulta[50]; //declaração da variável que usaremos para consulta
	int idade[10], AlunoExiste, ind; //declaração do vetor no qual armazenaremos as idades dos alunos
	double media[10];
	
	//
	for (int i=0;i<2;i++){
		printf("DIGITE O NOME DO ALUNO: \n");
		scanf("%s", nome[i]);
		printf("DIGITE A IDADE DO ALUNO: \n");
		scanf("%d", &idade[i]);
		printf("DIGITE A MEDIA DO ALUNO: \n");
		scanf("%lf", &media[i]);
	}
	
		//Pede ao usuario para digitar o nome que deseja pesquisar e guarda na variável "consulta"
		printf("Consultar aluno por nome: ");
		scanf("%s", &consulta);
		
		for (int i=0;i<5;i++){
			
			if(strcmp(consulta,nome[i]) == 0){//percorre o vetor e compara "consulta" com todos os nomes cadastrados
				//se encontrar um nome compativel vai puxar as informaçoes associadas a ele pelo indice "i".
				printf("Aluno: %s\n", nome[i]);
				printf("Idade: %d\n", idade[i]);
				printf("Media: %.2f\n", media[i]);
				
				AlunoExiste = 1;//por fim vai guardar a informação "AlunoExiste = 1" para a proxima etapa
			}
			
		}
			//caso a consulta nao retorne nenhum nome, vamos usar o AlunoExiste != 1 (diferente);
			//Não coloquei um Else pois dentro do For ele retornaria a mensagem em todas as posições que o nome não fosse encontrado
			if(AlunoExiste != 1){
				printf("Aluno nao encontrado.");
			}
}