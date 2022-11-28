#include <bits/stdc++.h>

using namespace std;

class Ulamek{
    private:
        int nwd(int a, int b){
            int reszta;
            while(true){
                reszta = a % b;
                if(reszta == 0) return b;
                if(reszta == 1) return 1;
                    a = b;
                    b = reszta;
            }
        }
        int nww(int a, int b){
            return (a*b)/nwd(a,b);
        }

    public:
        int l,m;
        double s = (l*1.0)/(m*1.0);

        bool sk(){
            if(nwd(l,m) > 1){
                l / nwd(l,m);
                m / nwd(l,m);
                return true;
            }
            return false;
        }

        Ulamek(int l,int m){
            this->l = l;
            this->m = m;
        }

        Ulamek():Ulamek(1,1){};

        Ulamek(const Ulamek& u){
            l = u.l;
            m = u.l;
        }
        Ulamek operator+(Ulamek& u){}
        Ulamek operator-(Ulamek& u){}
        Ulamek operator*(Ulamek& u){
            Ulamek ur;
            ur.l = l*u.l;
            ur.m = m*u.m;
            return ur;
        }
        Ulamek operator/(Ulamek& u){
            Ulamek ur;
            ur.l = l*u.m;
            ur.m = m*u.l;
            return ur;
        }

};

vector<Ulamek> u;

void A(){
    int minL = u[0].l;
    int minM = u[0].m;
    double minS = u[0].s;
    for(int i=0;i<1000;i++){
        if(minS > u[i].s){
            minS = u[i].s;
            minL = u[i].l;
            minM = u[i].m;
        }  else if(minS == u[i].s) if(minM >= u[i].m) {minM = u[i].m;minL = u[i].l;}
    }
    cout<<minL<<" "<<minM<<endl;
}

void bc(){
    int ns = 0;
    long long ls = 0;
    for(int i=0;i<1000;i++){
        if(!u[i].sk()) ns++;
        ls += u[i].l;
    }
    cout<<ns<<endl;
    cout<<ls<<endl;
}

int main(){
    int h,k;
    ifstream plik("dane_ulamki.txt");
    while(plik>>h>>k){
        u.push_back(Ulamek(h,k));
    }
    A();
    bc();
return 0;
}
