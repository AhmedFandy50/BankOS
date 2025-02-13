
#include<iostream>
#pragma once
#include"validate.h"
using namespace std;
class Admin /*:public Employee*/ {
    public:
    string name,password;
    double salary;

    Admin()/*:Employee*/
    {

    }
    Admin(int id,string name,string password,double salary)/*:Employee(id,name,password,salary)*/
    {   
        //this->set(id);
        this->setName(name);
        this->setPassword(password);
        this->setSalary(salary);
    }
    /*
    void setId(int id)
    {
        this->id=id;
    }
    int getId()
    {
        return this->id;
    }
    */
   void setName(string name)
   {
   if(Validate::Name(name))
    {
        this->name=name;
    }
    else
    {   
        cout << "name not valid\n";
    }
   }
   string getName()
   {
    return this->name;
   }
   void setPassword(string password)
   {
   if(Validate::Password(password))
    {
        this->password=password;
    }
    else
    {   
        cout << "password not valid\n";
    }
   }
   string getPassword()
   {
    return this->password;
   }
   void setSalary(double salary)
   {
    if(Validate::Salary(salary))
    {
        this->salary=salary;
    }
    else
    {   throw exception();
    }
   }
   double getSalary()
   {
    return this->salary;
   }

   void Display()
   {
    //Employee::Display();
   }
};
