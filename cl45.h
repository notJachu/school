
#ifndef LINE_H_INCLUDED
#define LINE_H_INCLUDED

class line
{
    private:
        double re;
        double im;
        string* arr;
    public:
        line(int sz);

        void add();
        void print();
        void get();
        void qSize();
};

#endif // LINE_H_INCLUDED
