//Bibliotecas Utilizadas
#include<iostream>
#include<locale.h>
#include<math.h>
#include<string>

using namespace std;

//Cabecalho do Programa
void cabecalho(){
	system("cls");
	cout << "\n--------------------------------------";
	cout << "\n          SISTEMA FINANCEIRO          ";
	cout << "\n            João's Bank               ";
	cout << "\n--------------------------------------";
}

//Função Principal
int main(){
	
	//Localização e Casas Decimais
	setlocale(LC_ALL, "Portuguese");
	cout.precision(2);
	cout<<fixed;
	
	//Variaveis do Programa
	string ClienteJV, RespostaJV;
	float Valor_EmprestimoJV, TaxaJV, Valor_TotalJV, Valor_ParceladoJV;
	int Numero_ParcelasJV;


	//Tela de Entrada
	do{	
	cabecalho();
	cout << "\nTipo de Cliente (F/J): ";
	cin >> ClienteJV; //Cliente
	
	cout << "\nValor do Empréstimo: R$ ";
	cin >> Valor_EmprestimoJV; //Emprestimo
	
	cout << "\nNúmero de Parcelas: ";
	cin >> Numero_ParcelasJV; //Parcelas
	
	cout << "\n\n--------------------------------------";
	cout << "\nTecle ENTER para SIMULAR...\n"; //Pausando o Processamento...
	system("pause");
	
	//Verificando o tipo de CLIENTE e aplicando os Juros
	if ((ClienteJV == "F" || ClienteJV == "f") && Valor_EmprestimoJV <= 10000) {
	TaxaJV = 1.5;
} else if ((ClienteJV == "F" || ClienteJV == "f") && Valor_EmprestimoJV <= 50000) {
	TaxaJV = 1.4;
}
	if (((ClienteJV == "J" || ClienteJV == "j") && Valor_EmprestimoJV <= 50000) || (ClienteJV == "F" && Valor_EmprestimoJV >= 50000)) {
	TaxaJV == 1.3;
}
	if ((ClienteJV == "J" || ClienteJV == "j") && Valor_EmprestimoJV > 50000) {
	TaxaJV = 1.0;
}
	//Calculo do Valor Total
	Valor_TotalJV = Valor_EmprestimoJV*pow((1+TaxaJV/100),Numero_ParcelasJV);
	
	//Calculo do Valor Parcelado
	Valor_ParceladoJV = Valor_TotalJV / Numero_ParcelasJV;	
	
	//Tela de Saida
	cabecalho();
	cout << "\nValor do Emprestimo: R$ " << Valor_EmprestimoJV;
	cout << "\nTAXA Operacional: " << TaxaJV << " % a.m";
	cout << "\nNumero de Parcelas: " << Numero_ParcelasJV;
	cout << "\nValor Total: R$" << Valor_TotalJV;
	cout << "\nValor Parcelado: R$ " << Valor_ParceladoJV;
	cout << "\n--------------------------------------";
	cout << "\nTecle S para nova SIMULAÇÂO: ";
	cin >> RespostaJV;
} while (RespostaJV == "s" || RespostaJV == "S");
	
	return 0;
	
}
