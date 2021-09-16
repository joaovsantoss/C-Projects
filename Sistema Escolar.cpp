#include<iostream>
#include<locale.h>
#include<string>
#include<math.h>

using namespace std;

// Função Cabecalho
void cabecalho(){
	cout << "\n-----------------------------------";
	cout << "\n          SISTEMA ESCOLAR          ";
	cout << "\n-----------------------------------";
}

// Função Principal
int main(){
	
	// Variaveis Declaradas
	string NomeJV[10], SituacaoJV[10];
	float Nota1JV[10], Nota2JV[10], MediaJV[10], Maior_NotaJV = 0, Menor_NotaJV = 0, Media_GeralJV = 0, SMediasJV = 0;
	int FaltasJV[10], AprovadosJV = 0, RNotasJV = 0, RFreqJV = 0, AlunosAcimaJV = 0, AlunosAbaixoJV = 0;
	int i; // Contador de Posições
	
	// Localização e Casas Decimais
	setlocale(LC_ALL, "Portuguese");
	cout << fixed;
	cout.precision(3);
	
	for (i = 0; i < 10; i++){ // Inicio do Laço FOR
		
		system("cls");
		cabecalho();
		cout << "\n\nINSIRA OS DADOS DO ALUNO [" << i + 1 << "]";
		cout << "\n-----------------------------------";
		cout << "\n\nNome do Aluno: ";
		cin >> NomeJV[i];
		cout << "\nNota 1 do Aluno: ";
		cin >> Nota1JV[i];
		cout << "\nNota 2 do Aluno: ";
		cin >> Nota2JV[i];
		cout << "\nQuantidade de Faltas: ";
		cin >> FaltasJV[i];
		
		
		MediaJV[i] = (Nota1JV[i] + Nota2JV[i]) / 2; // Calculo da Média
		SMediasJV = SMediasJV + MediaJV[i]; // Somatoria das Médias da TURMA
		
		if (MediaJV[i] >= 7 && FaltasJV[i] <= 10) {
			SituacaoJV[i] = "APROVADO";
			AprovadosJV = AprovadosJV + 1;
		}
		if (MediaJV[i] < 7 && FaltasJV[i] <= 10) {
			SituacaoJV[i] = "REPROVADO POR NOTA";
			RNotasJV = RNotasJV + 1;
		} else if (FaltasJV[i] > 10) {
		SituacaoJV[i] = "REPROVADO POR FREQUÊNCIA";
		RFreqJV = RFreqJV + 1;
	}
	
		cout << "\n-----------------------------------";
		cout << "\nMédia Final: " << MediaJV[i];
		cout << "\nSituação Final: " << SituacaoJV[i];
		cout << "\n-----------------------------------\n";
		system("Pause");
		}	// Fim do Laço FOR
				
		// Calculo das Estatisticas da TURMA
		Maior_NotaJV = MediaJV[0];
		Menor_NotaJV = MediaJV[0];
		
		// Calculo da Media Geral
		Media_GeralJV = SMediasJV / 10;
		
		for (i = 0; i < 10; i++){

			if (MediaJV[i] >= Maior_NotaJV){
				Maior_NotaJV = MediaJV[i];
				}
				
			if (MediaJV[i] <= Menor_NotaJV){
				Menor_NotaJV = MediaJV[i];
				}
									
			if (MediaJV[i] >= Media_GeralJV) {
			AlunosAcimaJV = AlunosAcimaJV + 1;
				}
				
			if (MediaJV[i] < Media_GeralJV) {
			AlunosAbaixoJV = AlunosAbaixoJV + 1;
				}
			}
			// Fim dos Calculos das Estatisticas
		
		// Tela de Saida
		system("cls");
		cabecalho();
		cout << "\nRESUMO FINAL DOS ALUNOS";
		cout << "\n\nAprovados: " << AprovadosJV;
		cout << "\nReprovados por NOTA: " << RNotasJV;
		cout << "\nReprovados por FREQUÊNCIA: " << RFreqJV;
		cout << "\nMaior Nota da TURMA: " << Maior_NotaJV;
		cout << "\nMenor Nota da TURMA: " << Menor_NotaJV;
		cout << "\nMédia Geral da TURMA: " << Media_GeralJV;
		cout << "\nAlunos acima da MÉDIA: " << AlunosAcimaJV;
		cout << "\nAlunos abaixo da MÉDIA: " << AlunosAbaixoJV;
		cout << "\n-----------------------------------\n";
		system("pause");
		
		system("cls");
		cabecalho();
		cout << "\nLISTA DOS ALUNOS DA TURMA:";
		cout << "\n-----------------------------------";
		
		for (i = 0; i < 10; i++){
			cout << "\nAluno [" << i + 1 << "] " << "\tNome: " << NomeJV[i] << "\tMédia Final: " << MediaJV[i] << "\tFaltas: " << FaltasJV[i];
			cout << "\nSituação Final: " << SituacaoJV[i];
			cout << "\n----------------------------------------------------------------------\n";
		}
		system("pause");
return 0;	
}
