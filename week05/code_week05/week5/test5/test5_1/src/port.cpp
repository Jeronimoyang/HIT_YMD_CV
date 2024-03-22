#include "test5_1.h"

Port::Port(const char *br, const char *st, int b) {
    brand = new char[strlen(br) + 1];
    strcpy(brand, br);
    strcpy(style, st);
    bottles = b;
}

Port::Port(const Port &p) {
    brand = new char[strlen(p.brand) + 1];
    strcpy(brand, p.brand);
    strcpy(style, p.style);
    bottles = p.bottles;
}

Port &Port::operator=(const Port &p) {
    brand = new char[strlen(p.brand) + 1];
    strcpy(brand, p.brand);
    strcpy(style, p.style);
    bottles = p.bottles;
    return *this;
}

Port &Port::operator+=(int b) {
    bottles = bottles + b;
    return *this;
}

Port &Port::operator-=(int b) {
    bottles = bottles - b;
    return *this;
}

void Port::Show() const {
    std::cout << "Brand: " << brand << std::endl;
    std::cout << "Kind: " << style << std::endl;
    std::cout << "Bottle: " << bottles << std::endl;
}

std::ostream &operator<<(std::ostream &os, const Port &p) {
    os << p.brand << "," << p.style << "," << p.bottles;
    return os;
}