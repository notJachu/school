#include <bits/stdc++.h>

using namespace std;

const int N = 2000;
int tab[N];

bool isPrime(int n){
    if(n==1) return false;
    if(n==2 || n==3) return true;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}

void A(){
    int a =0;
    for(int i=0;i<N;i++){
        if(isPrime(tab[i])) a++;
    }
    cout<<a<<endl;
}

void B(){
    int maxL =tab[0];
    int minL =tab[0];
    for(int i=0;i<N;i++){
        if(isPrime(tab[i])){
            if(tab[i]>=maxL) maxL = tab[i];
            else if(tab[i]<minL) minL = tab[i];
        }
    }
    cout<<minL<<endl;
    cout<<maxL<<endl;
}

void C(){
    int c=0;
    for(int i=0;i<N-1;i++){
        if(isPrime(tab[i]) && isPrime(tab[i+1])){
            if(tab[i]+2 == tab[i+1] || tab[i] == tab[i+1]+2){
                c++;
                cout<<c<<endl;
                cout<<tab[i]<<" i "<<tab[i+1]<<endl;
           }
        }
    }
}

int main(){
    ifstream plik("dane_6.txt");
    for(int i=0;i<N;i++){
        plik >> tab[i];
    }
    A();
    B();
    C();
return 0;
}
