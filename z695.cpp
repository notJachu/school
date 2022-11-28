#include <bits/stdc++.h>

using namespace std;

int a, b, c;
vector<int> tab;
pair<double, double> dz;

void derr(vector<int> &a){
    for (int i = 0; i < a.size(); i++)
    {
        a[i] *= a.size() - i -1;
    }
}

int main(){
    ifstream plik("metoda_polowienia.txt");
    plik >> a;
    for (int i = 0; i < a; i++)
    {
        plik >> b;
        for (int j = 0; j < b+1; j++)
        {
            plik >> c;
            tab.push_back(c);
        }
        derr(tab);
             for(auto c:tab){
                cout<<c<<endl;
             }
             tab.clear();
        
    }
    
return 0;
}