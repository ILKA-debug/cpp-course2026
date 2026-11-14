#include<iostream>
#include"vector19.h"
#include<string>
#include <algorithm>

bool len(const std::string& a, const std::string& b){ return a.length() < b.length() ;}

int main()
{
    v19<std::string> vec1(5);
    vec1.push_back("one");
    vec1.push_back("two");
    vec1.push_back("|            |");
    vec1.push_back("1");
    vec1.push_back("three");

    std::sort(vec1.begin(), vec1.end(), len);

    for (std::string n : vec1) {
        std::cout << n << " ";  
    }
    return 0 ;
}