#include <bits/stdc++.h>

using namespace std;

const int N = 1000;
string tab[N];
int tab1[10] = {1,3,7,9,1,3,7,9,1,3};

void A(){
    int odd =0;
    int even =0;
    string act;
    for(int i=0;i<N;i++){
        act = tab[i];
        if(act[9] % 2 == 0) even++;
        else if(act[9] % 2 != 0) odd++;
    }
    cout<<even<<" "<<odd<<endl;
}

void B(){
    int nov = 0;
    for(int i=0;i<N;i++){
        if(tab[i].substr(2,2) == "11" || tab[i].substr(2,2) == "31") nov++;
    }
    cout<<nov<<endl;
}

void C(){
    string str;
    int sum=0;
    int col =0;
    for(int i=0;i<N;i++){
        str = tab[i];
        for(int j=0;j<str.length();j++){
            sum += tab1[j] * ((int)str[j]) - 48;
        }
        if(sum %10 != 0) col++;
    }
    cout<<col<<endl;
}

int main(){
    ifstream plik("dane.txt");
    for(int i=0;i<N;i++){
        plik >> tab[i];
    }
    A();
    B();
    C();
return 0;
}
