#include "Kedi.h"
#include <iostream>

Kedi::Kedi(const std::string& ad, int yas, const std::string& tuyRengi) : Hayvan(ad, yas), tuyRengi(tuyRengi) {}

void Kedi::sesCikar() const {
    std::cout << "Miyav! Kedi sesi çýkarýyor." << std::endl;
}
