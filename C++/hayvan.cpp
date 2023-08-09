#include "Hayvan.h"
#include <iostream>

Hayvan::Hayvan(const std::string& ad, int yas) : ad(ad), yas(yas) {}

void Hayvan::sesCikar() const {
    std::cout << "Hayvan sesi çıkarıyor." << std::endl;
}
