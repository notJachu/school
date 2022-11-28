#include <iostream>

macierz::macierz(){
    a = 0;
    b = 0;
    c = 0;
    d = 0;
}

macierz::macierz(int q,int w,int e,int r);{
    a = q;
    b = w;
    c = e;
    d = r;
}

macierz::print(){
    std::cout<<a<<" "<<b<<endl;
    std::cout<<c<<" "<<d<<endl;
}

macierz::calc(){
    std::cout<< (a*d)-(b*c)<<endl;
}

macierz::setData(int q,int w,int e,int r){
    a = q;
    b = w;
    c = e;
    d = r;
}
};
