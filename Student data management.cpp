#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int rollNo;
    char grade;

public:
    // Method to set student details
    void setDetails(const std::string& studentName, int studentRollNo, char studentGrade) {
        name = studentName;
        rollNo = studentRollNo;
        grade = studentGrade;
    }

    // Method to display student details
    void displayDetails() const {
        std::cout << "Name: " << name << ", Roll No: " << rollNo << ", Grade: " << grade << std::endl;
    }
};

int main() {
    const int numberOfStudents = 3;
    Student students[numberOfStudents];  // Array of Student objects

    // Read details for each student
    for (int i = 0; i < numberOfStudents; ++i) {
        std::string name;
        int rollNo;
        char grade;

        std::cout << "Enter details for student " << i + 1 << ":\n";
        std::cout << "Name: ";
        std::cin >> name;
        std::cout << "Roll No: ";
        std::cin >> rollNo;
        std::cout << "Grade: ";
        std::cin >> grade;

        students[i].setDetails(name, rollNo, grade);  // Set details for each student
    }

    // Display details of all students
    std::cout << "\nDetails of students who appeared in the examination:\n";
    for (int i = 0; i < numberOfStudents; ++i) {
        students[i].displayDetails();  // Display details of each student
    }

    return 0;
}
