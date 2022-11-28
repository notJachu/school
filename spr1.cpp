#include <bits/stdc++.h>

using namespace std;

vector <string> pass;

bool lCase(string n){
    int s;
    for(int i=1;i<n.length() - 1;i++){
        s = n[i];
        if(s >= 97 && s < 123) return true;
    }
    return false;
}

bool uCase(string n){
    int s;
    for(int i=1;i<n.length() - 1;i++){
        s = n[i];
        if(s >= 65 && s < 98) return true;
    }
    return false;
}

bool hasNum(string n){
    int s;
    for(int i=1;i<n.length() - 1;i++){
        s = n[i];
        if(s >= 48 && s< 58) return true;
    }
    return false;
}

void A(){
    int k;
    for(auto p: pass){
    if(lCase(p)){
        if(uCase(p)){
            if(hasNum(p)) k++;
        }
    }
    }
    cout<<k<<endl;
}


int main(){
    string tmp;
    ifstream plik("hasla.txt");
    while(plik>>tmp){
        pass.push_back(tmp);
    }
    A();
return 0;
}
