#pragma once
#include <string>

class Hayvan {
public:
    Hayvan(const std::string& ad, int yas);
    void sesCikar() const;

protected:
    std::string ad;
    int yas;
};
