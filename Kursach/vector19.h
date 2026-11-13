#pragma once
#include <stdexcept>

template<typename T, typename A = std::allocator<T>>
class v19 {
    A alloc;
    int sz;
    T* elem;
    int space;

public:
    v19() : sz{0}, space{0}, elem{nullptr} { }

    explicit v19(int s) 
        : sz{s}, space{s}, elem{alloc.allocate(s)} 
    {
        for (int i = 0; i < sz; ++i) 
            alloc.construct(&elem[i], T()); 
    }

    v19(const v19&);
    v19& operator=(const v19&);

    ~v19() {
        for (int i = 0; i < sz; ++i) 
            alloc.destroy(&elem[i]);
        alloc.deallocate(elem, space);
    }

    T& operator[](int n) { return elem[n]; }
    const T& operator[](int n) const { return elem[n]; }

    T& at(int n) {
        if (n < 0 || sz <= n) throw std::out_of_range("vector::at");
        return elem[n];
    }
    const T& at(int n) const {
        if (n < 0 || sz <= n) throw std::out_of_range("vector::at");
        return elem[n];
    }

    int size() const { return sz; }
    int capacity() const { return space; }

    void reserve(int newalloc);
    void resize(int newsize, T val = T());
    void push_back(const T& val);
};






template<typename T, typename A>
void v19<T, A>::reserve(int newalloc) {
    if (newalloc <= space) return;
    T* p = alloc.allocate(newalloc);
    for (int i = 0; i < sz; ++i) 
        alloc.construct(&p[i], elem[i]); 
    for (int i = 0; i < sz; ++i) 
        alloc.destroy(&elem[i]); 
    alloc.deallocate(elem, space); 
    elem = p;
    space = newalloc;
}

template<typename T, typename A>
void v19<T, A>::resize(int newsize, T val) {
    reserve(newsize);
    for (int i = sz; i < newsize; ++i) 
        alloc.construct(&elem[i], val);
    for (int i = newsize; i < sz; ++i) 
        alloc.destroy(&elem[i]);
    sz = newsize;
}

template<typename T, typename A>
void v19<T, A>::push_back(const T& val) {
    if (space == 0) 
        reserve(8);
    else if (sz == space) 
        reserve(2 * space);
    alloc.construct(&elem[sz], val);
    ++sz;
}
