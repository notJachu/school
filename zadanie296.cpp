#include <bits/stdc++.h>
using namespace std;

const int N = 1000;
int tab[N][2];

int NWD(int n, int m)
{
    int reszta;
    while(true){
        reszta = n % m;
        if(reszta == 0) return m;
        n = m;
        m = reszta;
    }
    return 0;
}

int sum(int n){
    int suma = 0;
    while(n>0){
        suma += n%10;
        n = n/10;
    }
    return suma;
}

void A(){
    int a=0;
    for(int i=0;i<N;i++){
        if((tab[i][0]%tab[i][1]==0) || (tab[i][1]%tab[i][0]==0)) a++;
    }
    cout<<a<<endl;
}

void B(){
    int b=0;
    for(int i=0;i<N;i++){
        if(NWD(tab[i][0],tab[i][1]) == 1) b++;
    }
    cout<<b<<endl;
}

void C(){
    int c=0;
    for(int i=0;i<N;i++){
        if(sum(tab[i][0]) == sum(tab[i][1])) c++;
    }
    cout<<c<<endl;
}

int main(){
    ifstream plik("PARY_LICZB.TXT");
    for(int i=0;i<N;i++){
        for(int j=0;j<2;j++){
            plik >> tab[i][j];
        }
    }
    A();
    B();
    C();
return 0;
}
