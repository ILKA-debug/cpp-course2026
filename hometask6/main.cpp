#include<iostream>
#include "students.h"
#include<vector>
#include<algorithm>


int main()
{
    
    
    
    std::vector<Student> studenti;
    Student st1("Roman" , " 11b");
    st1.addMark(10);
    st1.addMark(8);
    st1.addMark(1);
    Student st2("Platon", "11v");
    st2.addMark(2);
    st2.addMark(5);
    st2.addMark(7);
    Student st3("Vasilii", "11g");
    st3.addMark(10);
    st3.addMark(8);
    st3.addMark(9);

    studenti.push_back(std::move(st1));
    studenti.push_back(std::move(st2));
    studenti.push_back(std::move(st3));

    std::sort(studenti.begin(), studenti.end(), [](Student const &lhs, Student const &rhs){return lhs < rhs ;});
    for( const  auto& stud : studenti)
    {
        std::cout << stud << std::endl; 

    }

    return 0;
}

