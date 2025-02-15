#pragma once
#include <iostream>
#include "validate.h"
#include "Person.h"
#include "Employee.h"

using namespace std;

class Admin : public Employee {
private:
    double accountBalance;

public:
    // Corrected Constructor
    Admin(string id, string n, string addr, string gender, int a, string password, int salary, double accountBalance)
        : Employee(id, n, addr, gender, a, password, salary), accountBalance(accountBalance) {}

    // Setter
    void setAccountBalance(double balance) {
        this->accountBalance = balance;
    }

    // Getter
    double getAccountBalance() const {
        return accountBalance;
    }

    // Display method
    void Display() {
        cout << "Admin Details:" << endl;
        cout << "ID: " << getId() << endl;
        cout << "Name: " << getName() << endl;
        cout << "Address: " << getAddress() << endl;
        cout << "Gender: " << getGender() << endl;
        cout << "Age: " << getAge() << endl;
        cout << "Salary: " << getSalary() << endl;
        cout << "Account Balance: " << getAccountBalance() << endl;
    }
};
