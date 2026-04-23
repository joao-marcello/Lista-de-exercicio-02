#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char** argv)
{
	double peso, altura, relacao;
	cout << "Digite seu peso";
	cin >> peso;
	
	cout << "Digite sua altura";
	cin >> altura;
	
	relacao = peso / pow(altura,2);
	
	
	if (relacao < 20) 
		cout << "Abaixo do peso";
	
    else if(relacao <= 20 && relacao < 25)
		cout << "Peso ideal";
	
	else
		cout << "Acima do peso";
	
	return 0;
}
