#include<iostream>
#include<math.h>
#include<locale.h>
#include<string>

using namespace std;

void cabecalho(){
		system("cls");
		cout << "\n---------------------------------";
		cout << "\n          HOTEL BRASIL           ";
		cout << "\n---------------------------------";
}

int main (){
	setlocale(LC_ALL, "Portuguese");
	cout << fixed;
	cout.precision(2);
	
	int diariasJV, mesJV;
	float valorDiariaJV, valorTotalJV;
	string RespostaJV;
	
	do{
	
	cabecalho();
	cout << "\nDigite o número de diárias: ";
	cin >> diariasJV;
	cout << "\nDigite o mês de hospedagem (1-12): ";
	cin >> mesJV;
	cout << "\n---------------------------------";
	
	switch (mesJV) {
		case 1: 
		case 12: valorDiariaJV = 300;
				valorTotalJV = valorDiariaJV * diariasJV;
				cout << "\nValor da diária: R$ " << valorDiariaJV;
				cout << "\nValor Total da hospedagem: R$ " << valorTotalJV;
				break;
					
		case 2: 
		case 8: valorDiariaJV = 250;
				valorTotalJV = valorDiariaJV * diariasJV;
				cout << "\nValor da diária: R$ " << valorDiariaJV;
				cout << "\nValor Total da hospedagem: R$ " << valorTotalJV;
				break;
			
		case 7: valorDiariaJV = 280;
				valorTotalJV = valorDiariaJV * diariasJV;
				cout << "\nValor da diária: R$ " << valorDiariaJV;
				cout << "\nValor Total da hospedagem: R$ " << valorTotalJV;
				break;
				
		case 3:
		case 4:
		case 5:
		case 6:
		case 9:
		case 10:
		case 11:valorDiariaJV = 200;
				valorTotalJV = valorDiariaJV * diariasJV;
				cout << "\nValor da diária: R$ " << valorDiariaJV;
				cout << "\nValor Total da hospedagem: R$ " << valorTotalJV;
				break;				
						 
		default: cout << "\nNão é um Mês valido!!";
				break;		
	} 
	cout << "\n\n---------------------------------"; 
	cout << "\nDeseja realizar novamente <S/N>? ";
	cin >> RespostaJV;
} while (RespostaJV == "s" || RespostaJV == "S");
	
	cout << "\nFIM DO PROGRAMA...\n";
return 0;
}
	
