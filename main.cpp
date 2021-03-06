#include <algorithm> // max, sort, stable_partition
#include <iostream>
#include <string>
#include <vector>

#include "Student_info.h"

int main()
{
    std::vector<Student_info> students;
    Student_info record; // default constructor called
    std::string::size_type maxLen = 0;

    // read using member function read and store the data as class objects into vector students
    while(record.read(std::cin)) {
        maxLen = std::max(maxLen, record.name().size());
        students.push_back(record);
    }

    // alphabetize students by name
    std::sort(students.begin(), students.end(), compare);
    // stable partition anyone who is passing to the front
    std::stable_partition(students.begin(), students.end(), passOrFail);

    // write the names and grades of students
    for (std::vector<Student_info>::size_type i = 0; i != students.size(); ++i){
        std::cout << students[i].name() << std::string(maxLen + 1 - students[i].name().size(), ' ')
                  << students[i].showPassOrFail() << std::endl;
    }

    return 0;
}
