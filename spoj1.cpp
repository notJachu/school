#include <bits/stdc++.h>

using namespace std;

void toUpper(string& name){
    for(int i = 0;i<name.length();i++){
        name[i] = toupper(name[i]);
    }
}

bool sortuj(pair<string,int> &p1, pair<string,int> &p2){
    if (p1.second == p2.second) return p1.first < p2.first;
    return p1.second > p2.second;
}

int main(){
    string tmp;
    string name;
    map<string,int> data;
    while(cin>>tmp>>tmp>>name){
        toUpper(name);
        data[name]++;
    }
    vector<pair<string,int>> data1;
    for(auto p:data) data1.push_back(p);
    sort(data1.begin(),data1.end(),sortuj);
    for(auto p: data1) cout<<p.first<<" "<<p.second<<endl;

return 0;
}
