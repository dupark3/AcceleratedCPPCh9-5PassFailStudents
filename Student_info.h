#ifndef GUARD_Student_info_h
#define GUARD_Student_info_h

#include <iostream>
#include <string>

class Student_info {
public:
    // interface
    Student_info(); // default constructor
    Student_info(std::istream&); // constructor with arg
    std::istream& read(std::istream&);

    // accessors
    std::string name() const { return n; };
    void showFinalGrade() const { return finalGrade; };
    void showPassOrFail() const { return passOrFail; };

private:
    // implementation
    std::string n;
    double midterm;
    double final;
    double finalGrade;
    char passOrFail;
    void grade(); // sets finalGrade and passOrFail

};

// nonmember functions
bool compare(const Student_info& x, const Student_info& y);

#endif // GUARD_Student_info_h


