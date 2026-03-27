#include <iostream>
using namespace std;

int main() {
    double peso, altura, R;
    char sexo;

    cin >> peso >> altura >> sexo;

    R = peso / (altura * altura);

    if (sexo == 'F' || sexo == 'f') {
        if (R < 19)
            cout << "Abaixo do peso";
        else if (R < 24)
            cout << "Peso ideal";
        else
            cout << "Acima do peso";
    }
    else {
        if (R < 20)
            cout << "Abaixo do peso";
        else if (R < 25)
            cout << "Peso ideal";
        else
            cout << "Acima do peso";
    }

    return 0;
}