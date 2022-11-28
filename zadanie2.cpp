#include <iostream>
#include <fstream>

using namespace std;

const int s = 1000;
int data1[s][10];
int data2[s][10];
int sc = 0;
int b = 0;
int ct = 0;
bool tab1[101];
bool tab2[101];

/*void pB(){
    for(int i=0;i<s;i++){
        b = 0;
        for(int j=0;j<10;j++){
            if(data1[i][j]%2==0||data2[i][j]%2==0)b++;
        }
    }

}
*/
void pA(){
    for(int i=0;i<s;i++){
        if(data1[i][10]==data2[i][10]) sc++;
    }
}

//void pC(s,data1,data2){

//}

/*bool same(data1,data2){
    bool tab1[101];
    bool tab2[101];
    for(int i=0;i<101;i++0){
        tab1[i] = false;
        tab2[i] = false;
    }
    for(int i=0;i<10;i++){
        tab1[data1[1]] = true;
        tab2[data2[i]] = true;
    }
}
*/
bool punkt(){
    for(int i=0;i<s;i++){
            tab1[data1[i]] = true;
            tab2[data2[i]] = true;
    }
    for(int i=0;i<101;i++){
        if(tab1[i] != tab2[i]) return false;
    }

}

int main(){
    ifstream file1("dane1.txt");
    ifstream file2("dane2.txt");
    for(int i=0;i<s;i++){
        for(int j=0;j<10;j++){
            file1 >> data1[i][j];
            file2 >> data2[i][j];
        }
    }
    pA();
    file1.close();
    file2.close();
    cout<<sc;
return 0;
}

