#ifndef COURSE_H
#define COURSE_H

#include <string>
#include <vector>
#include "Student.h"

class Course {
private:
    std::string name;
    std::vector<Student> students;
    double averageGrade;

public:
    // Constructor
    Course(const std::string& name);

    // Getters
    std::string getName() const;
    std::vector<Student> getStudents() const;
    double getAverageGrade() const;

    // Setters
    void setName(const std::string& name);
    void addStudent(const Student& student);
    void calculateAverageGrade();

    // Method to display course information
    void displayInfo() const;
};

#endif // COURSE_H
