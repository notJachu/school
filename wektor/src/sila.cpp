#include "sila.h"
#include "wektor.h"

sila::sila() : Wektor();
{
    jednostka = "N";
}

sila::sila(Punkt poczatek, Wartosc wartosc) : Wektor(poczatek, wartosc)
{
    jednostka = "N";
}

sila::sila(double x, double y, double dx, double dy) : Wektor(x, y, dx, dy)
{
    jednostka = "N";
}

std::string sila::pokazWartosc()
{
    Wartosc w = pobierzWartosc();
    std::ostringstream s;
    s << "(" << w.dx << ", " << w.dy << ") " << jednostka;
    return s.str();
}

std::string sila::info()
{
    return "Sila w " + jednostka;
}

sila::~sila()
{
    //dtor
}
