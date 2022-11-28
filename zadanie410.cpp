#include <bits/stdc++.h>

using namespace std;

const int N = 1000;
int tab[N];

int sum(int n){
    int temp = n;
    int res = 0;
    while(temp>0){
        res += temp%10;
        temp = temp/10;
    }
    return res;
}

bool isPalindrome(string n){
    for(int i=0;i<n.length()/2;i++){
        if(n[i] != n[n.length()-1-i]) return false;
    }
    return true;
}

void A(){
    int maxL = tab[0];
    for(int i=0;i<N;i++){
        if(tab[i] %2 == 0 && tab[i] >= maxL) maxL = tab[i];
    }
    cout<<maxL<<endl;
}

void B(){
    string str;
    for(int i=0;i<N;i++){
        str = to_string(tab[i]);
        if(isPalindrome(str)) cout<<str<<endl;
    }
}

void C(){
    int col=0;
    for(int i=0;i<N;i++){
        col += sum(tab[i]);
        if(sum(tab[i]) > 30) cout<<tab[i]<<endl;
    }
    cout<<'\n';
    cout<<col<<endl;
}

int main(){
    ifstream plik("liczby_3.txt");
    for(int i=0;i<N;i++){
        plik >> tab[i];
    }
    A();
    cout<<'\n';
    B();
    cout<<'\n';
    C();
return 0;
}
