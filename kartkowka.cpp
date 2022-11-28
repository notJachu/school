#include <bits/stdc++.h>

using namespace std;

const int N = 1000;
int tab[N];

int il(int n){
    int sum =1;
    while(n>0){
        sum *= n%10;
        n = n/10;
    }
    return sum;
}

void A(){
    int a=0;
    string n;
    for(int i=0;i<N;i++){
        n = to_string(tab[i]);
        if(n.length() > 5) a++;
    }
    cout<<a<<endl;
}

void B(){
    int lIl = il(tab[0]);
    int hIl = il(tab[0]);
    int hNum, lNum;
    for(int i=0;i<N;i++){
        if(il(tab[i]) >= hIl){
            hIl = il(tab[i]);
            hNum = tab[i];
        } else if(il(tab[i]) < lIl){
            lIl = il(tab[i]);
            lNum = tab[i];
        }
    }
    cout<<"najwyzszy iloczyn: "<< hIl <<" przy: "<<hNum<<endl;
    cout<<"najnizszy iloczyn: "<< lIl <<" przy: "<<lNum<<endl;
}

int main(){
    ifstream plik("liczby1.txt");
    for(int i=0;i<N;i++){
        plik >> tab[i];
    }
   A();
   B();
return 0;
}
