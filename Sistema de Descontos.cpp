#include<iostream>
#include<locale.h>
#include<math.h>

using namespace std;

int main(){
	//Localização (usado para definir o idioma das strings)
	setlocale(LC_ALL, "Portuguese");
	
	// Quantidade de casas decimais (Para alterar, apenas trocar o 2 por outro valor)
	std::cout.precision(3);
	std::cout<<std::fixed;
	
	// Variveis utilizadas 
	char NomeJV[20], ProdutoJV[20];
	float PrecoUnitarioJV, DescontoJV, ValorTotalJV, TotalLiquidoJV;
	int QuantidadeJV;
	
	// Tela de Entrada do Usuário
	cout<<"\n          Sistema de Descontos          ";
	cout<<"\n           João Vitor Souza             ";
	cout<<"\n----------------------------------------";
	cout<<"\n ";
	cout<<"\nInforme os DADOS abaixo: ";
	cout<<"\n ";
	cout<<"\nNome do Cliente: ";
	cin>>NomeJV;
	cout<<"\nProduto Escolhido: ";
	cin>>ProdutoJV;
	cout<<"\nPreço Unitário: ";
	cin>>PrecoUnitarioJV;
	cout<<"\nQuantidade: ";
	cin>>QuantidadeJV;	
    cout<<"\n----------------------------------------";
    cout<<"\nTecle ENTER para gerar a NOTA FISCAL!";
    cout<<"\n";
    system("pause");
	
	//Inicio dos Cálculos
	ValorTotalJV = PrecoUnitarioJV * QuantidadeJV;
	if (ValorTotalJV<=10){
		DescontoJV = ValorTotalJV*0.05; // Desconto de 5%
	}
	else if(ValorTotalJV<=50){
		DescontoJV = ValorTotalJV*0.10; // Desconto de 10%
	}
	else if(ValorTotalJV>=50){
		DescontoJV = ValorTotalJV*0.20; // Desconto de 20%
	}
	
	TotalLiquidoJV = ValorTotalJV - DescontoJV; // Total Liquido
	system("cls"); // Limpa a Tela do Usuário
	
	//Tela de Saída do Usuário
	cout<<"\n          Sistema de Descontos          ";
	cout<<"\n           João Vitor Souza             ";
	cout<<"\n----------------------------------------";
	cout<<"\n ";
	cout<<"\nConfira os DADOS abaixo: ";
	cout<<"\n ";
	cout<<"\nCliente: "<<NomeJV;
	cout<<"\nTotal: "<<ValorTotalJV;
	cout<<"\nDesconto: "<<DescontoJV;
	cout<<"\nTotal Liquido: "<<TotalLiquidoJV;
    cout<<"\n----------------------------------------";
	return 0;
}
