#include "mothods.h"
#include <fstream>

using namespace std;

void mothods::getData(){
    cin>>k;
    fstream plik;
    plik.open("dane_1.txt");

    for(int i=0;i<100;i++){
        plik >> tab[i];
    }
}

void mothods::szyfruj(){
    for(int i=0;i<100;i++){
        for(int j=0;j<tab[i].length();j++){
            k=k%26;
            tab[i][j] += k;
            if(tab[i][j]>90){
                tab[i][j] = tab[i][j]-89;
                tab[i][j] = tab[i][j]+65;
            }
        }
        cout<<tab[i]<<endl;
    }
}

