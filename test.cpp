#include <bits/stdc++.h>

using namespace std;

int il(string n){
    int sum =0;
    int h1,h2;
    for(int i=0;i<n.length()-1;i++){
        h1 = (int)n[i];
        h2 = (int)n[i+1];
        sum = h1*h2;
    return sum;
}
}

int main(){
    string a;
    int ia;
    cin>>ia;
    ia=il(a);
    cout<<ia;
return 0;
}

