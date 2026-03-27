#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	double x, y, z;
	cout << "Digite 3 valores qualquer";
	cin >> x >> y >> z;
	
	int maior = x;

    if (y > maior) maior = y;
    if (z > maior) maior = z;
		   
    if (x == maior) cout << "Seu maior numero e:" << x;
    if (y == maior) cout << "Seu maior numero e:" << y;
    if (z == maior) cout << "Seu maior numero e:" << z;
    
    
	return 0;
}