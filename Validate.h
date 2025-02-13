#pragma once
#include<iostream>
using namespace std;
bool flag =false;
class Validate{
    public:
    
    static bool Name(string name)
    {
        if(name.length()< 5 || name.length()>20)
        {
            flag = false;
        }
        else
        {
            for(int i = 0; i < name.length(); i++)
            {
                if(!isalpha(name.at(i)))
                {
                    flag= false;
                }
                else
                {
                    flag = true;
                } 
               
            }
            
        }
       return flag;
    }
    static bool Password(string password)
    {
        if(password.length() < 8 || password.length() > 20)
        {
            flag= false;
        }
        else 
        {
            flag = true;
        }
        return flag;
    }
    static bool Balance(double balance)
    {
        if(balance < 1500)
        {
            return false;
        }
        else 
        {
            return true;
        }
    }
    static bool Salary(double salary)
    {
        if(salary < 5000)
        {
            flag = false;
        }
        else 
        {
            flag = true;
        }
        return flag;
    }
    
};