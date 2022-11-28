#include <iostream>
#include <fstream>

using namespace std;

char tab[5][5];
string tab2[100][6];
int a,b;

void create(){
    char let ='a';
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(let=='j')let++;
            tab[i][j] = let;
            let++;
        }
    }
}

void code(){
    ifstream codes;
    codes.open("szyfry.txt");

    for(int i=0;i<100;i++){


        }
}

void decode(){

    ifstream codes;
    codes.open("szyfry.txt");

    for(int i=0;i<100;i++){
    cout << endl;
        for(int j=0;j<6;j++){
            codes >> tab2[i][j];


        }
    }
}


int main(){
    create();
    /*for(int i=0;i<5;i++){
        cout<<endl;
        for(int j=0;j<5;j++){
          cout<<tab[i][j]<<' ';
        }
    }
    */
    //decode();
return 0;
}
