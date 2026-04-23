
#include <iostream>
using namespace std;

int main() {
    double p1, p2, media;
    cout<< "Digite o valor da P1 e P2:";
    cin >> p1 >> p2;

    media = (p1 + 2*p2) / 3;

    cout << "Media: " << media;

    if (media >= 5)
        cout << "Aprovado";
    else
        cout << "Reprovado";

    return 0;
}
