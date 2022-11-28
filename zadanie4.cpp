#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

int ma,mi;
const int s = 1001;
int tab[s];

void bSort(){
    bool unsorted = true;
    int temp;
    while(unsorted){
        unsorted = false;
        for(int i=1;i<s;i++){
            if(tab[i-1]>tab[i]){
                temp=tab[i];
                tab[i]=tab[i-1];
                tab[i-1]=temp;
                unsorted = true;
            }
        }
    }

}

int main(){
    fstream plik;
    plik.open("zestaw.txt");
    for(int i=0;i<s;i++){
        plik >> tab[i];
    }
    bSort();

}
