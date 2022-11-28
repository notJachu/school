#ifndef SILA_H
#define SILA_H
#include "wektor.h"

class sila : public Wektor
{
    public:
        sila();
        sila(Punkt poczatek, Wartosc wartosc);
        sila(double x, double y, double dx, double dy);
        virtual ~sila();
        std::string info();
        std::string pokazWartosc();

    protected:

    private:
};

#endif // SILA_H
