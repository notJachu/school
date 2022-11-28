#ifndef WEKTOR_H
#define WEKTOR_H
#include <string>

struct Punkt {
    double x;
    double y;
};

struct Wartosc
{
    double dx;
    double dy;
};


class Wektor
{
    public:
    Wektor(Punkt poczatek, Punkt koniec);
    Wektor();
    Wektor(Punkt poczatek, Wartosc);
    Wektor(double x, double y, double dx, double dy);
    virtual ~Wektor();
    Wartosc pobierzWartosc();
    double pobierzDlugosc();
    std::string pobierzJednostke();
    virtual std::string pokazWartosc() = 0;
    void ustawJednostke(std::string symbol);
    void ustawPoczatek(double x, double y);
    void ustawWartosc(Wartosc wartosc);
    void dodaj(Wektor* w);
    void dodaj(Wartosc w);
    virtual std::string info();

    protected:
    Punkt poczatek;
    Wartosc wartosc;
    std::string jednostka;
};


#endif // WEKTOR_H
