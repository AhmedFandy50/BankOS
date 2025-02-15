#pragma once
#include <iostream>
#include "validate.h"

using namespace std;

class Person {
private:
    string id;
    string name;
    string address;
    string gender;
    int age;

public:
    // Corrected Constructor
    Person(string id, string name, string address, string gender, int age)
        : id(id), name(name), address(address), gender(gender), age(age) {}

    // Setters
    void setId(string id) {
        this->id = id;
    }

    void setGender(string gender) {
        this->gender = gender;
    }

    void setName(string n) {
        this->name = n;
    }

    void setAge(int a) {
        if (a > 0) { // Validate age
            this->age = a;
        } else {
            cout << "Invalid age! Age must be positive." << endl;
        }
    }

    void setAddress(string addr) {
        this->address = addr;
    }

    // Getters
    string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    string getAddress() const {
        return address;
    }

    string getId() const {
        return id;
    }

    string getGender() const {
        return gender;
    }
};
