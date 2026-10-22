#include<iostream>
#include"like.h"
#include<algorithm>
#include<stdexcept>


Student::Student() : name_("None"), group_("Undefined"), marks_{} {}

Student::~Student(){}

Student::Student(std::string name, std::string group) : name_(name), group_(group), marks_{} {}

Student::Student(const Student &other) : name_(other.name_), group_(other.group_), marks_(other.marks_), averageScore_(other.averageScore_) {}

Student::Student(Student &&other) noexcept : name_(std::move(other.name_)), group_(std::move(other.group_)), marks_(std::move(other.marks_)), averageScore_(other.averageScore_) {}

Student &Student::operator=(const Student &other){
    name_ = other.name_;
    group_ = other.group_;
    marks_ = other.marks_;
    averageScore_ = other.averageScore_;
    return *this;
    
}

Student &Student::operator=(Student &&other) noexcept
{
    name_ = std::move(other.name_);
    group_ = std::move(other.group_);
    marks_ = std::move(other.marks_);
    averageScore_ = other.averageScore_;
    return *this;
}

void Student::addMark(int mark)
{
    int min_mark = 1;
    int max_mark = 10;
    int summ_marks = 0;

    if (mark < min_mark || mark > max_mark)
    { 
        throw std::invalid_argument( " mark is out of frange");
    }

    marks_.push_back(mark);

    for ( int marks : marks_)
    {
        summ_marks += marks;
    }
    averageScore_ = static_cast<double>(summ_marks) / marks_.size();
}

const std::vector<int> &Student::getMarks() const
{
    return marks_;
}

const double Student::getAverageScore() const
{
    return averageScore_;
}

std::ostream &operator<<(std::ostream &os, const Student &student)
{
    os << "Student's name: " << student.name_ << std::endl;
    os << "Student's group: " << student.group_ <<std::endl;
    os << "Student's marks: ";
    for (int marks: student.getMarks()) 
    {
        os << marks << ", ";
    }
    os << std::endl;
    os << "Student's average score: " << student.averageScore_ <<std::endl;
     
    return os;
}

bool operator<(const Student &lhs, const Student &rhs)
{   
    return lhs.getAverageScore() < rhs.getAverageScore();
}
