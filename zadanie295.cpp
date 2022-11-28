#include <bits/stdc++.h>

using namespace std;

const int N = 1000;
int tab[N];
int najW,najM;

int sum(int n){
    int suma = 0;
    while(n>0){
        suma += n%10;
        n = n/10;
    }
    return suma;
}

int A(){
    int even = 0;
    for(int i=0;i<N;i++){
        if(tab[i]%2==0) even++;
    }
    return even;
}

void B(int& najW,int& najM){
    najW = sum(tab[0]);
    najM = sum(tab[0]);
    int hNum = tab[0];
    int lNum = tab[0];

    for(int i=0;i<N;i++){
        if(sum(tab[i])>=najW){
            najW = sum(tab[i]);
            hNum = tab[i];
        } else if(najM>sum(tab[i])){
            najM = sum(tab[i]);
            lNum = tab[i];
        }
    }
    cout<<hNum<<endl;
    cout<<lNum<<endl;
}

void C(){
    string num;
    bool yes;
    for(int i=0;i<N;i++){
        num = to_string(tab[i]);
        yes = true;
        for(int j=0;j<num.length()-1;j++){
            if(num[i]>=num[i+1]) yes = false;
        }
        if(yes==true) cout<<num<<endl;
    }
}


int main(){
    ifstream plik("cyfry.txt");
    for(int i=0;i<N;i++){
        plik >> tab[i];
    }
    cout<<A()<<endl;
    B(najW,najM);
    //C();
return 0;
}
