#include<iostream>
#include<locale.h>

using namespace std;

//Função Principal
int main(){

int a[4][4]; // Utilizaremos apenas 3x3
float detJV; //Determinante
int i; // Contador de Linhas
int j; // Contador de Colunas

	//Localização
	setlocale(LC_ALL, "Portuguese");
	
	//Tela de Entrada
	cout << "\n--------------------------------------------";
	cout << "\n          DETERMINANTE DE MATRIZES          ";
	cout << "\n--------------------------------------------";
	
	//Inicio do Laço FOR
	for (i = 1; i <= 3; i++){
		for (j = 1; j <= 3; j++){
			cout << "\nDigite o elemento A[" << i << j << "] : ";
			cin >> a[i][j];
		}
	}
	//Fim do Laço FOR
	
	//Calculo do Determinante
detJV =	 a[1][1]*a[2][2]*a[3][3]
        +a[1][2]*a[2][3]*a[3][1]
		+a[1][3]*a[2][1]*a[3][2]
		-a[1][3]*a[2][2]*a[3][1]
		-a[1][1]*a[2][3]*a[3][2]
		-a[1][2]*a[2][1]*a[3][3];      
	//Fim do Calculo do Determinante
		
	//Tela de Saída	        
	cout<<"\n--------------------------------------------"; 
	cout<<"\n O Determinante é : "<< detJV;
	cout<<"\n--------------------------------------------";
	cout<<"\n FIM DO PROGRAMA !!!";
	return 0;
}
