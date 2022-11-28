#include <bits/stdc++.h>

using namespace std;

struct Point{
    int x,y;
};

class sqr{
 private:
    double x1,x2,y1,y2;
public:
    sqr(Point a,Point b){
        x1 = a.x;
        y1 = a.y;
        x2 = b.x;
        y2 = b.y;
    }
    void pole(){
        double p = 0;
        double  a = y1 - y2;
        p = a*a;
        cout<<p<<endl;
    }
    void ob(){
        double p = 0;
        double  a = y1 - y2;
        p = a*4;
        if(p<0) p = p*(-1);
        cout<<p<<endl;
    }
    sqr(const sqr& s){
        x1 = s.x1;
        x2 = s.x2;
        y1 = s.y1;
        y2 = s.y2;
    }
    bool operator%(sqr& s){
        if((x1 < s.x2) && (y2<s.y1)) return true;
        if((x2 > s.x1) && (y1>s.y2)) return true;
        else return false;
    }
};

int main(){
        Point p1;
    p1.x = 2;
    p1.y = 4;
        Point p2;
    p2.x = 4;
    p2.y = 2;
          Point p3;
    p1.x = 1;
    p1.y = 3;
        Point p4;
    p2.x = 4;
    p2.y = 0;
    sqr s1(p1,p2);
    sqr s2(p3,p4);
    if(s1%s2) cout<<1<<endl;
    else cout<<0<<endl;
    s1.pole();
    s1.ob();
    s2.pole();
    s2.ob();
return 0;
}
