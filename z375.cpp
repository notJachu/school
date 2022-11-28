#include <bits/stdc++.h>
using namespace std;

double sum = 0;
int good = 0;
const int ar = 1000000;

struct P
{
    double t;
    int n;
};

struct G
{
    double od;
    int n0;
};

long double e(int n0, double l, int t){
    return(long double) (n0)*exp(-1.0*l*t);
}

int main(){
    ifstream plik;
    ifstream random("punkty_losowe.txt");
    plik.open("expontent_monte_carlo.txt");

    vector<P> punkty;
    vector<G> wykresy;
   
    G g;
    
    for(int i=0;i<100;i++){
        G g;
        plik >> g.n0 >> g.od;
        wykresy.push_back(g);
    }

    for (int i = 0; i < 100000; i++)
    {
        P p;
        random >> p.t >> p.n;
        punkty.push_back(p);
    }
    
    for (int i = 0; i < 100; i++)
    {
        
        for (int j = 0; j < 100000; j++)
        {
            /* code */
            if(punkty[j].n <= e(wykresy[i].n0, wykresy[i].od, punkty[j].t)){
                good++;
            }
        }  
        cout<<wykresy[i].n0*10.0*good/100000<<endl;
            good = 0;
    }
    
return 0;
}


