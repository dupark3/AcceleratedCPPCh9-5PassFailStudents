#include <iostream>
#include <numeric> // accumulate
#include <stdexcept> // domain_error
#include <string>
#include <vector>

#include "Student_info.h"

// constructors
Student_info::Student_info() : midterm(0), final(0) { }; // default, no arguments
Student_info::Student_info(std::istream& is) { read(is); }; // with arguments


// member function "read"
std::istream& Student_info::read(std::istream& in){
    in >> n >> midterm >> final;
    grade();
    return in;
}


// member function "grade"
void Student_info::grade(){
    finalGrade = ((midterm * 0.4) + (final * 0.6));
    finalGrade > 60 ? passOrFail = 'P' : passOrFail = 'F';
}


bool compare(const Student_info& x, const Student_info& y){
    return x.name() < y.name();
}
