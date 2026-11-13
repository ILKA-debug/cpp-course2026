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



