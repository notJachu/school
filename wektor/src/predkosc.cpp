#include "Predkosc.h"
#include <sstream>
#include "Wektor.h"

Predkosc::Predkosc() : Wektor()
{
   jednostka = "m/s";
}

Predkosc::Predkosc(Punkt poczatek, Wartosc wartosc) : Wektor(poczatek, wartosc)
{
   jednostka = "m/s";
}

Predkosc::Predkosc(double x, double y, double dx, double dy) : Wektor(x, y, dx, dy)
{
    jednostka = "m/s";
}

Predkosc::~Predkosc()
{
    //dtor
}

std::string Predkosc::pokazWartosc()
{
    Wartosc w = pobierzWartosc();
    std::ostringstream s;
    s << "(" << w.dx << ", " << w.dy << ") " << jednostka;
    return s.str();
}

void Predkosc::naKMnaH()
{
    jednostka = "km/h";
    wartosc.dx *= 3.6;
    wartosc.dy *= 3.6;
}

Predkosc Predkosc::operator+(Predkosc& p)
{
    Wartosc w;
    w.dx = this->wartosc.dx + p.wartosc.dx;
    w.dy = this->wartosc.dy + p.wartosc.dy;
    Predkosc wynik(this->poczatek, w);
    return wynik;
}

std::string Predkosc::info()
{
    return "Predkosc w " + jednostka;
}
