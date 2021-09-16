//BIBLIOTECAS
#include<iostream>
#include<string>
#include<locale.h>
#include<time.h>

//NAMESAPCE
using namespace std;


	
//CABEÇALHO DO PROGRAMA

void cabecalho(){ 
	system("cls");
	cout << "\n-------------------------------------";
	cout << "\n          SERVIÇO DE TAXI            ";
	cout << "\n            JOAO VITOR               ";
	cout << "\n-------------------------------------";	
}	

int main (){
	
	//Campo de Variaveis	
	string ClienteJV, Servico_TipoJV, RespostaJV;
	float KM_InicialJV, KM_FinalJV, Valor_CorridaJV;
	int BandeiraJV;
	time_t horaJV;
	
	//Localizaçao e Casas Decimais
	cout.precision(2);
	cout<<fixed;
	setlocale(LC_ALL, "Portuguese");
	
	//Get Time
	struct tm*Hora_AtualJV;
	time(&horaJV);
	Hora_AtualJV = localtime(&horaJV);
	


	//Inicio do Loop
	do {
		//Tela de Entrada
		cabecalho();
		cout << "\nCliente: ";
		cin >> ClienteJV;
		
		cout << "\nTipo de Serviço: ";
		cin >> Servico_TipoJV;
		
		cout << "\nQuilometragem: ";
		cin >> KM_InicialJV;	
		
			horaJV = Hora_AtualJV -> tm_hour;
		cout << "\nHorário do Serviço (1-24): " << horaJV;
	
		
		
		//Quilometragem Calculada
		if (KM_InicialJV>100) KM_FinalJV = KM_InicialJV * 2;
				else KM_FinalJV = KM_InicialJV;
		
		// Bandeira e Valor da Corrida
		if (horaJV >= 6 && horaJV < 22){
			BandeiraJV = 1;
			Valor_CorridaJV = 7 + 1.40 * KM_FinalJV;
		} else {	
			BandeiraJV = 2;
			Valor_CorridaJV = 10 + 1.55 * KM_FinalJV;
		}
		
		//Tipo de Serviço
		if (Servico_TipoJV == "P" || Servico_TipoJV == "p") Valor_CorridaJV = Valor_CorridaJV * 1.15;
		if (Servico_TipoJV == "B" || Servico_TipoJV == "b") Valor_CorridaJV = Valor_CorridaJV;
		
		//Tela de Saida
		cout << "\n-------------------------------------";
		cout <<	"\nBandeira: " << BandeiraJV;
		cout << "\nQuilometragem Calculada: " << KM_FinalJV << "km";
		cout << "\nValor total da Corrida: R$" << Valor_CorridaJV;
		cout << "\n-------------------------------------";	
		cout << "\n Tecle S para nova Consulta: ";
		cin >> RespostaJV;		
		
	} while (RespostaJV == "s" || RespostaJV == "S"); //Fim do Loop
	
	
	return 0;
}
