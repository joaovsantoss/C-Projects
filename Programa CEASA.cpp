include<iostream>
#include<locale.h>
#include<math.h>
#include<string>

using namespace std;

void cabecalho(){
	system("cls");
	cout << "\n----------------------------------";
	cout << "\n          PROGRAMA CEASA          ";
	cout << "\n----------------------------------";	
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	cout << fixed;
	cout.precision(2);
	
	//Variaveis	
	int Codigo_ProdutoJV;
	string ProdutoJV, RespostaJV;
	float Peso_ProdutoJV, PrecoJV, Total_ProdutoJV, Total_CompraJV, Peso_TotalJV, FreteJV, ImpostoJV, Total_NotaJV;	
	
	//Loop Final	
	do { 
	
	//Loop Inicial
	do{
		
	//Tela de Entrada
	cabecalho();
	cout << "\n1 - BANANA \t4 - GOIABA\n2 - MAÇÃ \t5 - ABACAXI\n3 - UVAS \t6 - MELANCIA\n";
	cout << "\nDigite o Código do Produto (1-6): ";
	cin >> Codigo_ProdutoJV;
	cout << "\nDigite o peso (kg): ";
	cin >> Peso_ProdutoJV;
	cout << "\n----------------------------------";
	
	//Verificando o Tipo do Produto
	switch (Codigo_ProdutoJV){
		case 1: ProdutoJV = "Banana";
				PrecoJV = 0.85;
				break;
		case 2: ProdutoJV = "Maçã";
				PrecoJV = 1.39;
				break;
		case 3: ProdutoJV = "Uvas";
				PrecoJV = 3.96;
				break;		
		case 4: ProdutoJV = "Goiaba";
				PrecoJV = 1.21;
				break;		
		case 5: ProdutoJV = "Abacaxi";
				PrecoJV = 1.06;
				break;
		case 6: ProdutoJV = "Melancia";
				PrecoJV = 0.35;
				break;
		default: ProdutoJV = "Produto não CADASTRADO!!";
				 PrecoJV = 0;
				 Peso_ProdutoJV = 0;														
	}
	
	//Calculo dos Totais
	Total_ProdutoJV = PrecoJV * Peso_ProdutoJV;	
	Total_CompraJV = Total_CompraJV + Total_ProdutoJV;
	Peso_TotalJV = Peso_TotalJV + Peso_ProdutoJV;
	
	cout << "\nProduto: " << ProdutoJV;
	cout << "\nTotal do Produto: R$" << Total_ProdutoJV;
	cout << "\nTotal da Compra: R$" << Total_CompraJV;
	cout << "\nPeso Total: " << Peso_TotalJV << "kg";
	cout << "\n----------------------------------";
	cout << "\nOutro produto (S/N) ?";
	cin >> RespostaJV;
} while (RespostaJV == "S" || RespostaJV == "s");
	//Fim do Loop Inicial

	//Calculando o Frete
	if (Peso_TotalJV <= 1400 ) FreteJV = 100 + (0.14 * Peso_TotalJV);
	if (Peso_TotalJV > 1400 && Peso_TotalJV <= 2800) FreteJV = 200 + (0.12 * Peso_TotalJV);
	if (Peso_TotalJV > 2800) FreteJV = 600;
	if (Peso_TotalJV == 0 ) FreteJV = 0;
	
	//Calculo do Imposto e da Nota Fiscal
	ImpostoJV = 0.116 * Total_CompraJV;
	Total_NotaJV = Total_CompraJV + FreteJV + ImpostoJV;
	
	//Tela de Saida
	cabecalho();
	cout << "\nTotal da Compra: R$ " << Total_CompraJV;
	cout << "\nFrete: R$ " << FreteJV;
	cout << "\nImposto: R$ " << ImpostoJV;
	cout << "\n----------------------------------";
	cout << "\nTotal da Nota: R$ " << Total_NotaJV;Program
	cout << "\n\n----------------------------------";
	cout << "\nDeseja reiniciar o SISTEMA (S/N) ? ";
	cin >> RespostaJV;
	
	//Reset Dos VALORES
	Total_CompraJV = 0;
	Peso_TotalJV = 0;
	
} while (RespostaJV == "S" || RespostaJV == "s");	 
	//Fim do Loop Final
	cout << "\nFIM DE PROGRAMA...\n";
	
	
	return 0;	
}
