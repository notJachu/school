#ifndef PREDKOSC_H
#define PREDKOSC_H
#include "Wektor.h"

class Predkosc : public Wektor
{
    public:
    Predkosc();
    Predkosc(Punkt poczatek, Wartosc wartosc);
    Predkosc(double x, double y, double dx, double dy);
    virtual ~Predkosc();
    std::string pokazWartosc();
    void naKMnaH();
    std::string info();

    Predkosc operator+(Predkosc& p);

};

#endif // PREDKOSC_H
