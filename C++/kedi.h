#pragma once
#include "Hayvan.h"

class Kedi : public Hayvan {
public:
    Kedi(const std::string& ad, int yas, const std::string& tuyRengi);
    void sesCikar() const;

private:
    std::string tuyRengi;
};
