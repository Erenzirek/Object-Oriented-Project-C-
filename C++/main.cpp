#include <iostream>
#include "Hayvan.h"
#include "Kedi.h"

int main() {
    Hayvan hayvan("Genel Hayvan", 5);
    Kedi kedi("Minnoþ", 3, "Beyaz");

    std::cout << "Hayvan Bilgileri:" << std::endl;
    hayvan.sesCikar();

    std::cout << "\nKedi Bilgileri:" << std::endl;
    kedi.sesCikar();

    return 0;
}
