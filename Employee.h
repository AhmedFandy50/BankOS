#pragma once
#include <iostream>
#include "validate.h"
#include "Person.h"

using namespace std;

class Employee : public Person {
private:
    string password;
    int salary;

public:
    //  Constructor 
    Employee(string id, string n, string addr, string gender, int age, string password, int salary)
        : Person(id, n, addr, gender, age) {  //  parameters to Person
        this->password = (Validate::Password(password)) ? password : "default123"; // Validate or set default
        this->salary = (Validate::Salary(salary)) ? salary : 0; // Validate or set default
    }

    // Setters
    void setPassword(string password) {
        if (Validate::Password(password)) {  
            this->password = password;
        } else {
            cout << "Invalid password, keeping old value." << endl;
        }
    }

    void setSalary(int salary) { 
        if (Validate::Salary(salary)) {  
            this->salary = salary;
        } else {
            cout << "Invalid salary, keeping old value." << endl;
        }
    }

    // Getters
    string getPassword() const {
        return password;
    }

    int getSalary() const {
        return salary;
    }

    // Display method
    void Display() {
        cout << "Employee Details:" << endl;
        cout << "ID: " << getId() << endl;
        cout << "Name: " << getName() << endl;
        cout << "Address: " << getAddress() << endl;
        cout << "Gender: " << getGender() << endl;
        cout << "Age: " << getAge() << endl;
        cout << "Salary: " << getSalary() << endl;
    }
};
