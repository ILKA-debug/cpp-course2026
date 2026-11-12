#include<iostream>

class v17
{
    int sz;
    double* elem;
    
public:
    v17(int s) : sz{s}, elem{new double[s]}
    {       
        for (int i = 0; i < s; ++i) elem[i] = 0;
    }

    ~v17() {delete[] elem;}
    int size() const {return sz;}

    double get(int n) const {return elem[n]; }
    void set(int n, double v) {elem[n]=v;}
};
