#pragma once
#include <initializer_list>
#include <algorithm>


class v18 {

    int sz;
    double* elem;

public:
    explicit v18(int s) :sz{s}, elem{new double[s]}
    {
        for (int i = 0; i < s; ++i) elem[i] = 0;
    }

    v18(std::initializer_list<double> lst)
        :sz{static_cast<int>(lst.size())},
         elem{new double[sz]}
    {
        std::copy(lst.begin(), lst.end(), elem);
    }

    v18(const v18& arg);            // копирующий конструктор
    v18(v18&& arg);                 // move-конструктор
    ~v18() { delete[] elem; }

    v18& operator=(const v18& a);   // копирующее присваивание
    v18& operator=(v18&& a);        // move-присваивание

    double& operator[](int n) { return elem[n]; }
    const double& operator[](int n) const { return elem[n]; }

    int size() const { return sz; }
};



v18& v18::operator=(const v18& a) 
{ 
double* p = new double[a.sz] ;
std::copy (a.elem,a.elem+a.sz,p) ;
delete [] elem; 
elem = p; 
sz = a.sz;
return *this; 
}

v18::v18(const v18& arg)
    :sz{arg.sz}, elem{new double[arg.sz]}
{
    std::copy(arg.elem, arg.elem + arg.sz, elem);
}

v18::v18(v18&& a) :sz{a.sz}, elem{a.elem}
{
    a.sz = 0;
    a.elem = nullptr;
}

v18& v18::operator=(v18&& a)
{
    delete[] elem;
    elem = a.elem;
    sz = a.sz;
    a.elem = nullptr;
    a.sz = 0;
    return *this;
}
