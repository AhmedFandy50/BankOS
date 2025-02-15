#pragma once
#include <iostream>
using namespace std;

class Validate {
public:
    static bool Name(string name) {
        if (name.length() < 5 || name.length() > 20) {
            return false;
        }
        for (char c : name) {  // Loop through each character
            if (!isalpha(c)) { // Check if it's not a letter
                return false;
            }
        }
        return true;
    }

    static bool Password(string password) {
        return (password.length() >= 8 && password.length() <= 20);
    }

    static bool Balance(double balance) {
        return (balance >= 1500);
    }

    static bool Salary(double salary) {
        return (salary >= 5000);
    }
};
