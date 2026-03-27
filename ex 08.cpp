int main() {
    double a, b, c;
    cin >> a >> b >> c;


    double h = a;
    if (b > h) h = b;
    if (c > h) h = c;

    
    if (h == a && h*h == b*b + c*c ||
        h == b && h*h == a*a + c*c ||
        h == c && h*h == a*a + b*b) {
        cout << "Triangulo retangulo";
    } else {
        cout << "Nao e retangulo";
    }

    return 0;
}