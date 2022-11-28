#include <bits/stdc++.h>

using namespace std;

const int N=1000;
int tab[N][3];

int NWD(int n, int m){
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
    int temp = n;
    int res = 0;
    while(temp>0){
        res += temp%10;
        temp = temp/10;
    }
    return res;
}

int sum1(int a,int b,int c){
    int m=0;
    m = sum(a);
    m += sum(b);
    m += sum(c);
    return m;
}

void A(){
    int a=0;
    for(int i=0;i<N;i++){
        if(tab[i][2] > tab[i][1] && tab[i][1] > tab[i][0]) a++;
    }
    cout<<a<<endl;
}

void B(){
    int col =0;
    int help;
    for(int i=0;i<N;i++){
        help = NWD(tab[i][2],tab[i][1]);
        col += NWD(help,tab[i][0]);
    }
    cout<<col<<endl;
}

void C(){
    int c=0;
    int it=0;
    int k;
    int hSum = sum1(tab[0][0],tab[0][1],tab[0][2]);

    for(int i=0;i<N;i++){
        k = sum1(tab[i][0],tab[i][1],tab[i][2]);
        if(k == 35) c++;
    }
    cout<<c<<endl;
}

int main(){
    ifstream plik("liczby.txt");
    for(int i=0;i<N;i++){
        for(int j=0;j<3;j++){
            plik >> tab[i][j];
        }
    }
    A();
    B();
    C();
return 0;
}
