#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	double x, y;
	cout << "Digite 2 valores qualquer";
	cin >> x >> y;
	
	if (x>y)
		cout << x;
	
	else 
		cout << y;
	
	return 0;
}