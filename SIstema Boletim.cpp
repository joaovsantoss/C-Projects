#include<iostream>
#include<locale.h>
#include<math.h>
#include<string>
using namespace std;

int main(){
	//Localizaçao para Strings
	setlocale(LC_ALL, "Portuguese");
	
	//Numero de Casas Decimais
	std::cout.precision(2);
	std::cout<<std::fixed;

// Campo das Variaveis
char Resposta;
string SituacaoFinalJV, NomeJV;
float Prova1JV, Prova2JV, PreviasJV, AtividadesJV, MediaJV;
int FaltasJV;
//////////////////////

//Tela de Entrada
	cout<<"\n          Sistema BOLETIM          ";
	cout<<"\n-----------------------------------";
	cout<<"\nNome do Aluno: ";
    std::getline(std::cin, NomeJV); // Aceita Strings com Espaço
	cout<<"\nProva 1: ";
	cin>>Prova1JV;
	cout<<"\nProva 2: ";
	cin>>Prova2JV;
	cout<<"\nPrevias: ";
	cin>>PreviasJV;
	cout<<"\nAtividades: ";
	cin>>AtividadesJV;
	cout<<"\nFaltas: ";
	cin>>FaltasJV;
	cout<<"\n";
	cout<<"\n-----------------------------------";
	cout<<"\nTecle ENTER para gerar o Boletim!";
	cout<<"\n";
	system("Pause");
	system("cls");
	
//Calculos
MediaJV=(Prova1JV * 0.3)+(Prova2JV * 0.3)+(PreviasJV * 0.2)+(AtividadesJV * 0.2); // Calculo da Media

//Condiçoes 
if (MediaJV>=7 && FaltasJV<=10){
	SituacaoFinalJV="Aprovado";
}		
else if (MediaJV<7 && FaltasJV<=10){
	SituacaoFinalJV="Reprovado";
}
else if (FaltasJV>10){
	SituacaoFinalJV="Reprovado por Frequencia";
}

//Tela de Saida
	cout<<"\n          Sistema BOLETIM          ";
	cout<<"\n-----------------------------------";
	cout<<"\nNome do Aluno: "<<NomeJV;
	cout<<"\nMédia Final: "<<MediaJV;
	cout<<"\nFaltas: "<<FaltasJV;
	cout<<"\n";
	cout<<"\nSituação Final: "<<SituacaoFinalJV;
	cout<<"\n";
	cout<<"\n-----------------------------------";
	return 0;	
}
