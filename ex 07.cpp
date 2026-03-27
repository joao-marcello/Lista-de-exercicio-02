#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char** argv)
{
	double a, b, c;
	cout << "Digite 3 valores qualquer";
    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a) {

        if (a == b && b == c) {
            cout << "Equilatero";
        }
        else if (a == b || a == c || b == c) {
            cout << "Isosceles";
        }
        else {
            cout << "Escaleno";
        }

    } else {
        cout << "Nao forma triangulo";
    }

	
	return 0;
}