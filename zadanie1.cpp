#include <iostream>
#include <fstream>
using namespace std;

const int s = 1000;
int data1[s][10];
int data2[s][10];
int out[s][20];

void print(){
    for(int i=0;i<s;i++){
        cout<<endl;
        for(int j=0;j<10;j++){
            cout<<out[i][j]<<" ";
        }
    }

}

void msort(){
int k1 = 0;
int k2 = 0;
    for(int i=0;i<s;i++){
        for(int j=0;j<20;j++){
            if(data1[k1] < data2[k2]){
                out[i] = data1[k1];
                k1++;
            }
            else {
                out[i] = data2[k2];
                k2++;
            }

        }

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
    msort();
    print();
    file1.close();
    file2.close();

return 0;
}
