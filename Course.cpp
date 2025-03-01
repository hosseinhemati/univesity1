#include "Course.h"
#include <iostream>

// Constructor
Course::Course(const std::string& name) : name(name), averageGrade(0.0) {}

// Getters
std::string Course::getName() const {
    return name;
}

std::vector<Student> Course::getStudents() const {
    return students;
}

double Course::getAverageGrade() const {
    return averageGrade;
}

// Setters
void Course::setName(const std::string& name) {
    this->name = name;
}

void Course::addStudent(const Student& student) {
    students.push_back(student);
}

void Course::calculateAverageGrade() {
    if (students.empty()) {
        averageGrade = 0.0;
        return;
    }

    double sum = 0.0;
    for (const auto& student : students) {
        sum += student.getAverageGrade();
    }
    averageGrade = sum / students.size();
}

// Method to display course information
void Course::displayInfo() const {
    std::cout << "Course Name: " << name << std::endl;
    std::cout << "Number of Students: " << students.size() << std::endl;
    std::cout << "Average Grade: " << averageGrade << std::endl;
    std::cout << "Student List:" << std::endl;
    for (const auto& student : students) {
        student.displayInfo();
        std::cout << std::endl;
    }
}