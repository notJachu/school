#include <bits/stdc++.h>

using namespace std;

class Rzymskie{
    public:
    int liczba;
    inline static string rzym[] = {"M", "D", "C", "L", "X", "V", "I"};
    inline static int liczby[] = {1000,500,100,50,10,5,1};
        Rzymskie(int k){
            liczba = k;
        }
    int  naLiczbe(string r){
        int tmp;
        for(int i=0i,r.size();i++){
            tmp = zamien(r[i]);
            if(i<r.size()-1 && tmp < zamien(r[i+1])) liczba -=tmp;
            else liczba +=tmp;
        }
        return liczba;
    }

    string naRzym(){
        int tmp = liczba;
        string rz;
        int i=0;
        while(wmp > 0){
            while(tmp >=Rzymskie::liczby[i]){
                tmp -= Rzymskie::liczby[i];
                rz += Rzymskie::liczby[i];
            }
            i++;
        }
        return rz;
    }

    int zamien(char ch){
        switch(ch){
            case 'I':
                return 1;
            case 'V':
                return 5;
            case 'X':
                return 10;
            case 'L':
                return 50;
            case 'C':
                return 100;
            case 'D':
                return 500;
            case 'M':
                return 1000;
            default:
                return -10;

        }
    }

};

int main(){
    string dane[] = {"I", "II", "IV", "V", "CXXIII", "CCLVI", "MCMXCIX", "MMCDXXIV"};
    Rzymskie rz1(0);
    Rzymskie rz2(0);
    for(int i=0;i<8;i+=2){
        cout <<rz1
    }


return 0;
}
