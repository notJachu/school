#include <iostream>
#include <fstream>

using namespace std;

int k;
string tab[100];

void szyfruj(){
    for(int i=0;i<100;i++){
        for(int j=0;j<tab[i].length();j++){
            k=k%26;
            tab[i][j] += k;
            if(tab[i][j]>90){
                tab[i][j] = tab[i][j]-26;
            }
        }
        cout<<tab[i]<<endl;
    }
}

int main(){

    ifstream plik;
    plik.open("dane_1.txt");

    for(int i=0;i<100;i++){
        plik >> tab[i];
    }
    cin>>k;
    szyfruj();

return 0;
}
