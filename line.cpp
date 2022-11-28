#include "line.h"
#include <iostream>

line::line(int sz1){
    sz = sz1;
    arr = new std::string[sz];
    start = 0;
    length = 0;
}

line::line(){

}

line::add(std::string wr){
    if(length != sz){
        arr[length] = wr;
        length++;
    }
}

line::get(){
   std::cout<<arr[start]<<std::endl;
   start++;
}

line::print(int a){
    std::cout<<arr[start]<<std::endl;
}

line::qSize(){
    std::cout<<arr[length]<<std::endl;
}
