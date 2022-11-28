#include <bits/stdc++.h>

using namespace std;

const int N = 1000;
string tab[N];
int col =0;
string help;

void A(){
    for(int i=0;i<N;i++){
        if(tab[i].length()%2 == 0) col++;
    }
    cout<<col<<endl;
}

void B(){
    int h1,h2;
    for(int i=0;i<N;i++){
        help = tab[i];
        h1 =0;
        h2 =0;
        col = 0;
        for(int j=0;j<help.length();j++){
            if(help[j] == '0') h1++;
            else h2++;
        }
        if(h1 == h2) col++;
    }
    cout<<col<<endl;
}

void C(){
    int h3;
    int zer,jedynek;
    zer =0;
    jedynek =0;
    for(int i=0;i<N;i++){
        help = tab[i];
        for(int j=0;j<help.length();j++){
            h3 =0;
            if(help[j] == '1') h3++;
        }
        if(h3 == 0) zer++;
        else if(h3 == help.length()) jedynek++;
    }
    cout<<zer<<" "<<jedynek<<endl;
}

void D(){
    int h4=0;
    for(int j=2;j<=16;j++){
        for(int i=0;i<N;i++){
            if(tab[i].length() == j) h4++;
        }
        cout<<"liczb "<<j<<" cyfrowych: "<<h4<<endl;
        h4=0;
    }
}

int main(){
    ifstream plik("napisy.txt");
    for(int i=0;i<N;i++){
        plik >> tab[i];
    }
    A();
    B();
    C();
    D();
return 0;
}

