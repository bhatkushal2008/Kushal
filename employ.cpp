#include <iostream>
#include <string>
using namespace std;

// Base Class
class Employee
{
protected:
    int employeeID;
    string employeeName;
    string department;

public:
    Employee(int id, string name, string dept)
    {
        employeeID = id;
        employeeName = name;
        department = dept;
    }

    void displayEmployee()
    {
        cout << "Employee ID: " << employeeID << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Department: " << department << endl;
    }
};

// Derived Class 1
class Manager : public Employee
{
private:
    int teamSize;

public:
    Manager(int id, string name, string dept, int team)
        : Employee(id, name, dept)
    {
        teamSize = team;
    }

    void displayManager()
    {
        displayEmployee();
        cout << "Team Size: " << teamSize << endl;
    }
};

// Derived Class 2
class Developer : public Employee
{
private:
    string programmingLanguage;

public:
    Developer(int id, string name, string dept, string language)
        : Employee(id, name, dept)
    {
        programmingLanguage = language;
    }

    void displayDeveloper()
    {
        displayEmployee();
        cout << "Programming Language: "
             << programmingLanguage << endl;
    }
};

int main()
{
    Manager m(101, "Rahul", "HR", 10);

    Developer d(102, "Kushal", "CSE", "C++");

    cout << "\n--- Manager Details ---" << endl;
    m.displayManager();

    cout << "\n--- Developer Details ---" << endl;
    d.displayDeveloper();

    return 0;
}