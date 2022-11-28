#include <bits/stdc++.h>

using namespace std;

const int fs = 10;

struct galeria{
    string kod;
    string miasto;
    vector<int> tab;
    int po =0;
};

void a(vector<galeria>& v1){
    map<string, int> m;
    for(auto p: v1) m[p.kod]++;
    for(auto g: m) cout<<g.first << g.second << endl;
}

void b(vector<galeria>& v1){
    for(int i=0;i<fs;i++){
        cout<<v1[i].miasto<<" "<<v1[i].po<<" "<<v1[i].tab.size()<<endl;
    }
}

void c(vector<galeria>& v1){
    string maxN,minN;
    int maxL =0;
    int minL = 70;
    int h = 0;
    for(auto p: galerie){

    }
    cout<<maxN<<" "<<maxL<<endl;
    cout<<minN<<" "<<minL<<endl;
}

int main(){
    ifstream plik("galerie_przyklad.txt");
    galeria gal;
    int x,y,p;
    vector<galeria> v1;
    for(int i=0;i<fs;i++){
        plik>>gal.kod>>gal.miasto;
        for(int i=0;i<70;i++){
            plik>>x>>y;
            p = x*y;
            if(p>0) {
                gal.tab.push_back(p);
                gal.po += p;
            }
        }
        v1.push_back(gal);
    }
    c(v1);
return 0;
}
