#include <bits/stdc++.h>

using namespace std;

vector <string> data;
map <string,int> data2;

void a(){

}

void b(){
    for(auto a:data){
        data2[a]++;
    }
    for(auto a:data2){
        cout<<data2[a]<<endl;
    }
}

int main(){
    string tmp;
    ifstream plik("zero_jedynki.txt");
    while(plik >> tmp){
        data.push_back(tmp);
    }
return 0;
}
