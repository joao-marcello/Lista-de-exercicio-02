#include <iostream>
using namespace std;

int main() {
    double p1, p2_necessaria;
    cout << "Digite o valor da P1:";
    cin >> p1;

    p2_necessaria = (15 - p1) / 3;

    cout << "Precisa tirar: " << p2_necessaria;

    return 0;
}
