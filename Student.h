#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
private:
    std::string firstName;
    std::string lastName;
    int id;
    double averageGrade;

public:
    // Constructor
    Student(const std::string& firstName, const std::string& lastName, int id, double averageGrade);

    // Getters
    std::string getFirstName() const;
    std::string getLastName() const;
    int getId() const;
    double getAverageGrade() const;

    // Setters
    void setFirstName(const std::string& firstName);
    void setLastName(const std::string& lastName);
    void setId(int id);
    void setAverageGrade(double averageGrade);

    // Method to display student information
    void displayInfo() const;
};

#endif // STUDENT_H