#include <iostream>

using namespace std;

char a = '0';
int b = a;

int main(){
    cout<<a<<endl;
    cout<<b<<endl;
    a = '9';
    b = a;
    cout<<a<<endl;
    cout<<b<<endl;
return 0;
}
