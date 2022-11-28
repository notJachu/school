#include <bits/stdc++.h>

using namespace std;

const double del = 0.0000001;
long temp = 0;
long sum = 0;

long double sRoot(long a){
    __int128 x = 1.0;
    do{
        x = (x+a/x)/2;
    }while (x*x >= a || (x+1)*(x+1) < a);
    return x;
}

int main(){
    ifstream plik("pierwiastki_calkowite.txt");
      while(plik >> temp){
        sum += sRoot(temp);
    }
    cout<<sum<<endl;
return 0;
}
