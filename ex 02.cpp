#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	int x, y;
	cout << "Digite 2 valores qualquer";
    cin >> x >> y;

    if (x > y) {
        cout << "Maior: " << x;
    } else if (y > x) {
        cout << "Maior: " << y;
    } else {
        cout << "Os valores sao iguais";
    }

	
	return 0;
}