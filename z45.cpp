#include <iostream>

class line
{
    private:
        int length;
        int sz;
        int start;
        std::string* arr;
    public:

line(int sz1){
    sz = sz1;
    arr = new std::string[sz];
    start = 0;
    length = 0;
}

line(){

}

void add(std::string wr){
    if(length != sz){
        arr[length] = wr;
        length++;
    }
}

void get(){
   std::cout<<arr[start]<<std::endl;
   start++;
}

void print(){
    std::cout<<arr[start]<<std::endl;
}

void qSize(){
    std::cout<<arr[length]<<std::endl;
}

~line(){
    delete []arr;
}

line(const line& q);
line operator+=(line& q){

}
};

int main(){
    line line(1000);
    line.add("yes");
    line.add("w2");
    line.print();
    line.get();
    line.print();
    return 0;
}
