//bibliotecas utilizadas
#include<iostream>
#include<locale.h>
#include<string>
#include<math.h>

using namespace std;

//Função de Cabeçalho - Tela/Saida
void cabecalho(){ 
	system("cls");
	cout<<"\n-------------------------------------";
	cout<<"\n      Sistema de Compra/Venda        ";
	cout<<"\n          JOAO V S SANTOS            ";
	cout<<"\n-------------------------------------";	
}

//Função Principal
int main(){
	
	//Localizaçao para Strings
	setlocale(LC_ALL, "Portuguese");
	
	//Numero de Casas Decimais
	cout.precision(2);
	cout<<fixed;

	//Campo de Variaveis
	string Produto, Resposta;
	float Preco_Unitario, Total_Parcial, Total_Compra, Total_Liquido, Desconto; 
	int Quantidade;
	
	//Inicio do Loop
	do{
		
	//Tela de Entrada do Usuário
	cabecalho();
	cout<<"\nProduto: ";
	cin>>Produto;
	cout<<"\nPreço Unitário: ";
	cin>>Preco_Unitario;
	cout<<"\nQuantidade: ";
	cin>>Quantidade;
	cout<<"\n\n";
	cout<<"\n-------------------------------------";
	
	//Operações
	Total_Parcial = Preco_Unitario*Quantidade;
	Total_Compra = Total_Compra + Total_Parcial;
	
	cout<<"\nTotal Parcial: R$"<<Total_Parcial;
	cout<<"\nTotal da Compra: R$"<<Total_Compra;
	cout<<"\n-------------------------------------";
	cout<<"\nDeseja outro Produto <s/n>? ";
	cin>>Resposta;
}
	while (Resposta == "s");	//Fim do Loop
	
	//Calculo Desconto/Total Liquido
	if (Total_Compra<100){
		Desconto = Total_Compra * 0.10;
	}
	if (Total_Compra>=100){
		Desconto = Total_Compra * 0.20;
	}
	Total_Liquido = Total_Compra - Desconto;
	
	//Tela de Saida do Usuário
	cabecalho();
	cout<<"\nTotal da Compra: R$"<<Total_Compra;
	cout<<"\n-------------------------------------";
	cout<<"\nDesconto: "<<Desconto;
	cout<<"\n\n";
	cout<<"\n-------------------------------------";
	cout<<"\nTotal Liquido: R$"<<Total_Liquido;
	cout<<"\n\n";
	cout<<"\n-------------------------------------";
	cout<<"\nFIM DE PROGRAMA";
return 0;
}
