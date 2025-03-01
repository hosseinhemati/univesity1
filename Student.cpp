#include "Student.h"
#include <iostream>

// Constructor
Student::Student(const std::string& firstName, const std::string& lastName, int id, double averageGrade)
        : firstName(firstName), lastName(lastName), id(id), averageGrade(averageGrade) {}

// Getters
std::string Student::getFirstName() const {
    return firstName;
}

std::string Student::getLastName() const {
    return lastName;
}

int Student::getId() const {
    return id;
}

double Student::getAverageGrade() const {
    return averageGrade;
}

// Setters
void Student::setFirstName(const std::string& firstName) {
    this->firstName = firstName;
}

void Student::setLastName(const std::string& lastName) {
    this->lastName = lastName;
}

void Student::setId(int id) {
    this->id = id;
}

void Student::setAverageGrade(double averageGrade) {
    this->averageGrade = averageGrade;
}

// Method to display student information
void Student::displayInfo() const {
    std::cout << "Student Information:" << std::endl;
    std::cout << "First Name: " << firstName << std::endl;
    std::cout << "Last Name: " << lastName << std::endl;
    std::cout << "Student ID: " << id << std::endl;
    std::cout << "Average Grade: " << averageGrade << std::endl;
}