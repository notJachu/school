#include <iostream>

class yes{
    private:
        int h;
        int w;
        int hl;
        int** arr;
    public:
        yes(){

        }
        yes(int h1,int w1){
            w = w1;
            h = h1;
            arr = new int*[h];
            for(int i=0;i<h;i++) arr[i] = new int[w];

            for(int i=0;i<h;i++){
                for(int j=0;j<w;j++){
                    std::cin>>arr[i][j];
                }
            }
        }

        void rot(){
            hl = arr[1][0];
            arr[1][0] = arr[0][0];

            for(int i=1;i<w;i++){
                arr[0][i-1] = arr[0][i];
            }
            std::cout<<"1"<<std::endl;

            for(int j=1;j<h;j++){
                arr[j-1][w] = arr[j][w];
            }
            std::cout<<"1"<<std::endl;

            for(int i=w-1;i>1;i--){
                arr[h][i+1] = arr[h][i];
            }
           std::cout<<"1"<<std::endl;

            for(int j=h;j>2;j--){
                arr[j][0] = arr[j-1][0];
            }
            std::cout<<"1"<<std::endl;
            arr[2][0] = hl;
        }

        void print(){
            for(int i=0;i<h;i++){
                for(int j=0;j<w;j++){
                    std::cout<<arr[i][j]<<" ";
                }
                std::cout<<std::endl;
            }
        }
};

int main(){
    yes yes(3,3);
    yes.print();
    yes.rot();
    yes.print();
return 0;
}
