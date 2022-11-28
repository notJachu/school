#include <iostream>

template <class T> class macierz{
    private:
        T a,b,c,d;
    public:

macierz(): macierz(0,0,0,0) {}

macierz(T a,T b,T c,T d){
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
}

void print(){
    std::cout<<"| "<<a<<" "<<b<<" |"<<std::endl;
    std::cout<<"| "<<c<<" "<<d<<" |"<<std::endl;
}

void calc(){
    std::cout<< (a*d)-(b*c)<<std::endl;
}

void setData(T a,T b,T c,T d){
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
}
};


int main(){
    macierz<int> ma(1,2,3,4);
    ma.print();
    ma.calc();
    ma.setData(5,6,7,8);
    ma.print();
    return 0;
}
