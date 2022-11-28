#include <bits/stdc++.h>

using namespace std;

double sq(int a, int b, int c){
    double del = 0.0;
    double x1, x2;
    del = pow(b,2) - 4*a*c;
    cout<<del<<endl;
    if(del > 0){
         x1 = ((b*-1) - sqrt(del))/2*a;
         x2 = ((b*-1) + sqrt(del))/2*a;
         return x1, x2;
    }else if(del == 0){
        x1 = b*-1/a;
        return x1;
    }
    else return 1.0;
}

int a,b,c,d;
int main(){
    srand(time(NULL));
        a = rand()%21 -10;
        b = rand()%21 -10;
        c = rand()%21 -10;
        d = rand()%21 -10;
    a *= 3;
    b *= 2;
    cout<<a<<"x^3 + "<<b<<"x^2 + "<<c<<"x +"<<d<<endl;
    sq(b,c,d);
return 0;
}