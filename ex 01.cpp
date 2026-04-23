#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	double x, y;
	cout << "Digite 2 valores qualquer";
	cin >> x >> y;
	
	if (x>y)
		cout << "O maior valor é:"  << x;
	
	else 
		cout << "O maior valor é:"  << y;
	
	return 0;
}
