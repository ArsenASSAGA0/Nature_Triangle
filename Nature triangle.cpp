#include <iostream>

int main() {
    float a, b, c;

    std::cout << "Entrez la longueur du premier côté : ";
    std::cin >> a;
    std::cout << "Entrez la longueur du deuxième côté : ";
    std::cin >> b;
    std::cout << "Entrez la longueur du troisième côté : ";
    std::cin >> c;

    if (a <= 0 || b <= 0 || c <= 0) {
        std::cout << "Les longueurs doivent être positives.\n";
    } else if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            std::cout << "Le triangle est équilatéral.\n";
        } else if (a == b || b == c || a == c) {
            std::cout << "Le triangle est isocèle.\n";
        } else {
            std::cout << "Le triangle est quelconque.\n";
        }
    } else {
        std::cout << "Les longueurs ne forment pas un triangle.\n";
    }

    return 0;
}
