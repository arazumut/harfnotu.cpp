#include <iostream>

int main() {
    int sinavPuani;

    // Kullanıcıdan sınav puanını alma
    std::cout << "Sınav puanınızı girin: ";
    std::cin >> sinavPuani;

    // Puanı harfe çevirme
    if (sinavPuani >= 90) {
        std::cout << "Harf notunuz: A" << std::endl;
    }
    else if (sinavPuani >= 80) {
        std::cout << "Harf notunuz: B" << std::endl;
    }
    else if (sinavPuani >= 70) {
        std::cout << "Harf notunuz: C" << std::endl;
    }
    else if (sinavPuani >= 60) {
        std::cout << "Harf notunuz: D" << std::endl;
    }
    else {
        std::cout << "Harf notunuz: F" << std::endl;
    }

    return 0;
}
