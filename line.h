#ifndef LINE_H_INCLUDED
#define LINE_H_INCLUDED

class line
{
    private:
        int lenth;
        int sz;
        int start;
        std::string* arr;
    public:
        line(int sz);
        void add(std::string wr);
        void print();
        void get();
        void qSize();
};

#endif // LINE_H_INCLUDED
