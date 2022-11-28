#include <bits/stdc++.h>

using namespace std;

struct uczen{
    string imie;
    string nazwisko;
    int klasa;
    char oddzial;
    int numer;
};

bool sor(uczen &p1, uczen &p2){
    if (p1.nazwisko == p2.nazwisko) return p1.imie < p2.imie;
    return p1.nazwisko< p2.nazwisko;
}

int main(){
    ifstream plik("szablony_uczniowie.txt");
    ofstream plik2("posortowane.txt");
    uczen help;
    list<uczen> dziennik;
    while(plik >> help.numer
               >> help.nazwisko
               >> help.imie
               >> help.klasa
               >> help.oddzial){
        dziennik.push_back(help);
    }
    dziennik.sort(sor);
    for(auto p: dziennik) plik2<<p.nazwisko<<" "<<p.imie<<" "<<p.klasa<<" "<<p.oddzial<<" "<<p.numer<<endl;

return 0;
}
