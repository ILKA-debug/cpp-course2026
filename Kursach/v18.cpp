#include<iostream>
#include "vector18.h"
#include <algorithm>



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
