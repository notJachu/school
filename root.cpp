#include <bits/stdc++.h>

using namespace std;

const double del = 0.00000001;
double a, b = 0;
int n;

double sRoot(double a){
    double x = 1.0;
    double prev;
    do{
        prev = x;
        x = (x+a/x)/2.0;
    }while (abs(prev - x)>= del);
    return x;
}

double rekurencja(double a){
    if(b*b == a) return b;
    else b = rekurencja(b+a/b)/2.0;
}

double nRoot(double a, int n){
    double x = 1.0;
    double prev;
    do{
        prev = x;
        x = ((n-1)*x+a/pow(x, n-1))/n;
    } while (abs(prev - x)>= del);
    return x;
}

int main(){
    cout<<"liczba i stopien"<<endl;
    cin>>a>>n;
    cout<<"sqrt: "<<sRoot(a)<<" stopien "<<n<<" = "<<nRoot(a,n)<<endl;
return 0;
}
