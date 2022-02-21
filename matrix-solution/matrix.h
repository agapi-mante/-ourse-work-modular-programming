#include <iostream>

class Matrix
{
    public:
        Matrix(int m, int n);
        Matrix(int ** values, int m, int n);
       ~Matrix();

    Matrix sum(const Matrix & matrix);
    void print();

    private:
        int m;
        int n;
        int ** values;
};
