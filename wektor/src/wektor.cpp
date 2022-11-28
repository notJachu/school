#include "Wektor.h"
#include <cmath>

Wektor::Wektor()
{
    poczatek.x = 0.0;
    poczatek.y = 0.0;
    wartosc.dx = 1.0;
    wartosc.dy = 1.0;
}

Wektor::Wektor(Punkt poczatek, Punkt koniec)
{
    this->poczatek = poczatek;
    this->wartosc.dx = koniec.x - poczatek.x;
    this->wartosc.dy = koniec.y - poczatek.y;
}

Wektor::Wektor(double x, double y, double dx, double dy)
{
    poczatek.x = x;
    poczatek.y = y;
    wartosc.dx = dx;
    wartosc.dy = dy;
}

Wektor::Wektor(Punkt  poczatek, Wartosc wartosc)
{
    this->poczatek = poczatek;
    this->wartosc = wartosc;
}

Wektor::~Wektor()
{
    //dtor
}

Wartosc Wektor::pobierzWartosc()
{
    return wartosc;
}

double Wektor::pobierzDlugosc()
{
    return std::sqrt(wartosc.dx*wartosc.dx + wartosc.dy*wartosc.dy);
}

std::string Wektor::pobierzJednostke()
{
    return jednostka;
}

void Wektor::ustawPoczatek(double x, double y)
{
    this->poczatek.x = x;
    this->poczatek.y = y;
}

void Wektor::ustawWartosc(Wartosc wartosc)
{
    this->wartosc = wartosc;
}

void Wektor::ustawJednostke(std::string symbol)
{
    jednostka = symbol;
}

void Wektor::dodaj(Wektor* w)
{
    this->wartosc.dx  += w->wartosc.dx;
    this->wartosc.dy += w->wartosc.dy;
}

void Wektor::dodaj(Wartosc w)
{
    this->wartosc.dx += w.dx;
    this->wartosc.dy += w.dy;
}

std::string Wektor::info()
{
    return "Nidgy nie wyświetli, warto było zrobić metodę abstrakcyjną";
}
