#include<string>
#include<vector>
#include<iostream>


class Student
{
private:
    std::string name_;
    std::string group_;
    std::vector<int> marks_;
    double averageScore_ = 0.0;
public:
    Student();
    Student(std::string name, std::string group);
    ~Student();

    Student(const Student& other);
    Student(Student&& other) noexcept;
    Student& operator=(const Student& other);
    Student& operator=(Student&& other) noexcept;
     
    void addMark(int mark);
    const std::vector<int>& getMarks() const;
    const double getAverageScore() const;

    friend std::ostream& operator<<(std::ostream& os, const Student& student);
    friend bool operator<(const Student& lhs, const Student& rhs);
};






