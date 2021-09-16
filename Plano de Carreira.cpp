#include<iostream>
#include<locale.h>
#include<string>

using namespace std;

//Função Cabecalho
void cabecalho(){ 
	system("cls");
	cout<<"\n-------------------------------------";
	cout<<"\n         Plano de Carreira           ";
	cout<<"\n          JOAO V S SANTOS            ";
	cout<<"\n-------------------------------------";	
}

//Função Principal
int main(){
	
	//Casas Decimais e Localização para Strings
	cout.precision(2);
	cout<<fixed;
	setlocale(LC_ALL, "Portuguese");
	
	//Campo de Variaveis
	string FuncionarioJV, ClasseJV, RespostaJV;
	float Salario_BaseJV, Salario_BrutoJV;
	int Tempo_TrabalhoJV, EscolaridadeJV;
	
	//Inicio do Loop
	do {
	
	//Tela de Entrada
	cabecalho();
	cout << "\n\tENTRADAS:\n";
	
	cout << "\nNome do Funcionário: ";
	cin >> FuncionarioJV;
	
	cout << "\nSalário Base: R$";
	cin >> Salario_BaseJV;
	
	cout << "\nTempo de Trabalho: ";
	cin >> Tempo_TrabalhoJV;
	
	cout << "\nGrau de Escolaridade (1-6): ";
	cin >> EscolaridadeJV;
	
	
	//Tabela de Classes
	if ((EscolaridadeJV < 3) + (Tempo_TrabalhoJV < 3)){
		ClasseJV = "JUNIOR";
		Salario_BrutoJV = Salario_BaseJV;
	} 
	
	if ((EscolaridadeJV >= 3) & (Tempo_TrabalhoJV >= 3)){
		ClasseJV = "PLENO";
		Salario_BrutoJV = Salario_BaseJV * 1.5;
	}
	
	if(((EscolaridadeJV >= 4 & Tempo_TrabalhoJV >= 15)) + (EscolaridadeJV == 6)){
		ClasseJV = "SENIOR";
		Salario_BrutoJV = Salario_BaseJV * 2.0;
	}
	
	//Tela de Saida
	cout << "\n-------------------------------------" << endl;
	cout << "\t SAÍDAS:" << endl;
	cout << "Classe: " << ClasseJV << endl;
	cout << "Salario Bruto: R$" << Salario_BrutoJV << endl;
	cout << "-------------------------------------" << endl;
	cout << "Deseja realizar uma nova Simulação <S/N> ? ";
	cin >> RespostaJV;
}	while (RespostaJV != "n" && RespostaJV != "N"); //Fim do Loop
 
	return 0;
	
}
