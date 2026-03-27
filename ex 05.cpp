#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	double base, altura, area;
	
	cout << "Digite a base do retangulo";
	cin >> base;
	
	cout << "Digite a altura do retangulo";
	cin >> altura;
	
	area = base*altura;
	
	if (area > 100)
		cout <<"Terreno grande";
 
	else 
		cout << "Terreno pequeno";
	
	return 0;
}